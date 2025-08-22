.thumb
.align 2

@0x81025E8 with r0
PokedexMemoryAllocationHook:
	ldr r0, [r5]
	strb r4, [r0]
	bl IsInBattle
	cmp r0, #0x0
	bne RegularPokedexMemoryAlloc
	ldr r0, .ExpandedPokedexSize
	b PokedexMemoryAllocReturn

RegularPokedexMemoryAlloc:
	ldr r0, .RegularPokedexSize

PokedexMemoryAllocReturn:
	ldr r1, =0x81025F0 | 1
bxr1:
	bx r1

.align 2
.RegularPokedexSize: .word 0xC10
.ExpandedPokedexSize: .word 1304 * 8

@0x8104A66 with r1
DisplayRegionalDexNumHook:
	mov r5, r0
	ldr r1, =IsNationalPokedexEnabled
	bl bxr1
	cmp r0, #0x0
	beq UseRegionalDexOrdering
	ldr r0, =0x203ACF0
	ldr r0, [r0]
	add r0, #0xC
	ldr r0, [r0]
	cmp r0, #0x9	@;Check if looking at regional dex
	beq UseRegionalDexOrdering
	mov r0, r5
	ldr r1, =SpeciesToNationalPokedexNum
	bl bxr1
	b DisplayDexNumberReturn

UseRegionalDexOrdering:
	mov r0, r5
	bl SpeciesToRegionalDexNum
	
DisplayDexNumberReturn:
	mov r5, r0
	ldr r0, =0x8104A70 | 1
	bx r0
