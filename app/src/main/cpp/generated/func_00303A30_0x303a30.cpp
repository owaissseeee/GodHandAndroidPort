#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: func_00303A30
// Address: 0x303a30 - 0x3041b8
void func_00303A30_0x303a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00303A30_0x303a30");
#endif

    switch (ctx->pc) {
        case 0x303aa4u: goto label_303aa4;
        case 0x303accu: goto label_303acc;
        case 0x303b2cu: goto label_303b2c;
        case 0x303ba8u: goto label_303ba8;
        case 0x303bb8u: goto label_303bb8;
        case 0x303c44u: goto label_303c44;
        case 0x303ca8u: goto label_303ca8;
        case 0x303df4u: goto label_303df4;
        case 0x303fccu: goto label_303fcc;
        case 0x30407cu: goto label_30407c;
        case 0x3040a0u: goto label_3040a0;
        case 0x3040b4u: goto label_3040b4;
        case 0x3040c0u: goto label_3040c0;
        case 0x3040d4u: goto label_3040d4;
        case 0x3040e4u: goto label_3040e4;
        case 0x3040f4u: goto label_3040f4;
        case 0x304104u: goto label_304104;
        case 0x30411cu: goto label_30411c;
        case 0x304128u: goto label_304128;
        case 0x30413cu: goto label_30413c;
        case 0x304148u: goto label_304148;
        default: break;
    }

    ctx->pc = 0x303a30u;

    // 0x303a30: 0x27bdfd90  addiu       $sp, $sp, -0x270
    ctx->pc = 0x303a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966672));
    // 0x303a34: 0x7fb20230  sq          $s2, 0x230($sp)
    ctx->pc = 0x303a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 18));
    // 0x303a38: 0x7fb50200  sq          $s5, 0x200($sp)
    ctx->pc = 0x303a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 21));
    // 0x303a3c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x303a3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303a40: 0x7fb00250  sq          $s0, 0x250($sp)
    ctx->pc = 0x303a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 16));
    // 0x303a44: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x303a44u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303a48: 0x7fb601f0  sq          $s6, 0x1F0($sp)
    ctx->pc = 0x303a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 22));
    // 0x303a4c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x303a4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303a50: 0x7fb10240  sq          $s1, 0x240($sp)
    ctx->pc = 0x303a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 17));
    // 0x303a54: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x303a54u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303a58: 0x7fb30220  sq          $s3, 0x220($sp)
    ctx->pc = 0x303a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 19));
    // 0x303a5c: 0x7fb40210  sq          $s4, 0x210($sp)
    ctx->pc = 0x303a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 20));
    // 0x303a60: 0xffbf01e0  sd          $ra, 0x1E0($sp)
    ctx->pc = 0x303a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 31));
    // 0x303a64: 0xe7b40260  swc1        $f20, 0x260($sp)
    ctx->pc = 0x303a64u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 608), bits); }
    // 0x303a68: 0xae47010c  sw          $a3, 0x10C($s2)
    ctx->pc = 0x303a68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 268), GPR_U32(ctx, 7));
    // 0x303a6c: 0xae4a0110  sw          $t2, 0x110($s2)
    ctx->pc = 0x303a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 272), GPR_U32(ctx, 10));
    // 0x303a70: 0xa64b018e  sh          $t3, 0x18E($s2)
    ctx->pc = 0x303a70u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 398), (uint16_t)GPR_U32(ctx, 11));
    // 0x303a74: 0xa649018c  sh          $t1, 0x18C($s2)
    ctx->pc = 0x303a74u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 396), (uint16_t)GPR_U32(ctx, 9));
    // 0x303a78: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x303A78u;
    {
        const bool branch_taken_0x303a78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x303A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303A78u;
        // 0x303a7c: 0xae550108  sw          $s5, 0x108($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 264), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303a78) {
            ctx->pc = 0x303A90u;
            goto label_303a90;
        }
    }
    ctx->pc = 0x303A80u;
    // 0x303a80: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x303a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x303a84: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x303a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x303a88: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x303a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x303a8c: 0xae420118  sw          $v0, 0x118($s2)
    ctx->pc = 0x303a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 280), GPR_U32(ctx, 2));
label_303a90:
    // 0x303a90: 0x92c2028e  lbu         $v0, 0x28E($s6)
    ctx->pc = 0x303a90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 654)));
    // 0x303a94: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x303A94u;
    {
        const bool branch_taken_0x303a94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x303a94) {
            ctx->pc = 0x303A98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303A94u;
            // 0x303a98: 0xae420220  sw          $v0, 0x220($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 544), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x303AA8u;
            goto label_303aa8;
        }
    }
    ctx->pc = 0x303A9Cu;
    // 0x303a9c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x303A9Cu;
    SET_GPR_U32(ctx, 31, 0x303AA4u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x303A9Cu, 0x303AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303AA4u;
label_303aa4:
    // 0x303aa4: 0xae420220  sw          $v0, 0x220($s2)
    ctx->pc = 0x303aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 544), GPR_U32(ctx, 2));
label_303aa8:
    // 0x303aa8: 0x92430118  lbu         $v1, 0x118($s2)
    ctx->pc = 0x303aa8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 280)));
    // 0x303aac: 0x26c40198  addiu       $a0, $s6, 0x198
    ctx->pc = 0x303aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 408));
    // 0x303ab0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x303ab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303ab4: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x303ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x303ab8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x303AB8u;
    {
        const bool branch_taken_0x303ab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x303ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303AB8u;
        // 0x303abc: 0x3a1fa  dsrl        $s4, $v1, 7 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) >> 7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x303ab8) {
            ctx->pc = 0x303B20u;
            goto label_303b20;
        }
    }
    ctx->pc = 0x303AC0u;
    // 0x303ac0: 0x26c20278  addiu       $v0, $s6, 0x278
    ctx->pc = 0x303ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 632));
    // 0x303ac4: 0x27b100f0  addiu       $s1, $sp, 0xF0
    ctx->pc = 0x303ac4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x303ac8: 0x27b30100  addiu       $s3, $sp, 0x100
    ctx->pc = 0x303ac8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_303acc:
    // 0x303acc: 0x68830007  ldl         $v1, 0x7($a0)
    ctx->pc = 0x303accu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x303ad0: 0x6c830000  ldr         $v1, 0x0($a0)
    ctx->pc = 0x303ad0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x303ad4: 0x6886000f  ldl         $a2, 0xF($a0)
    ctx->pc = 0x303ad4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x303ad8: 0x6c860008  ldr         $a2, 0x8($a0)
    ctx->pc = 0x303ad8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x303adc: 0x68870017  ldl         $a3, 0x17($a0)
    ctx->pc = 0x303adcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x303ae0: 0x6c870010  ldr         $a3, 0x10($a0)
    ctx->pc = 0x303ae0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x303ae4: 0x6888001f  ldl         $t0, 0x1F($a0)
    ctx->pc = 0x303ae4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x303ae8: 0x6c880018  ldr         $t0, 0x18($a0)
    ctx->pc = 0x303ae8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x303aec: 0xb0a30007  sdl         $v1, 0x7($a1)
    ctx->pc = 0x303aecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x303af0: 0xb4a30000  sdr         $v1, 0x0($a1)
    ctx->pc = 0x303af0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x303af4: 0xb0a6000f  sdl         $a2, 0xF($a1)
    ctx->pc = 0x303af4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x303af8: 0xb4a60008  sdr         $a2, 0x8($a1)
    ctx->pc = 0x303af8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x303afc: 0xb0a70017  sdl         $a3, 0x17($a1)
    ctx->pc = 0x303afcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x303b00: 0xb4a70010  sdr         $a3, 0x10($a1)
    ctx->pc = 0x303b00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x303b04: 0xb0a8001f  sdl         $t0, 0x1F($a1)
    ctx->pc = 0x303b04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x303b08: 0xb4a80018  sdr         $t0, 0x18($a1)
    ctx->pc = 0x303b08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x303b0c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x303b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x303b10: 0x1482ffee  bne         $a0, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x303B10u;
    {
        const bool branch_taken_0x303b10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x303B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303B10u;
        // 0x303b14: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303b10) {
            ctx->pc = 0x303ACCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_303acc;
        }
    }
    ctx->pc = 0x303B18u;
    // 0x303b18: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x303B18u;
    {
        const bool branch_taken_0x303b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x303b18) {
            ctx->pc = 0x303B58u;
            goto label_303b58;
        }
    }
    ctx->pc = 0x303B20u;
label_303b20:
    // 0x303b20: 0x26c20278  addiu       $v0, $s6, 0x278
    ctx->pc = 0x303b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 632));
    // 0x303b24: 0x27b100f0  addiu       $s1, $sp, 0xF0
    ctx->pc = 0x303b24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x303b28: 0x27b30100  addiu       $s3, $sp, 0x100
    ctx->pc = 0x303b28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_303b2c:
    // 0x303b2c: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x303b2cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x303b30: 0xdc860008  ld          $a2, 0x8($a0)
    ctx->pc = 0x303b30u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x303b34: 0xdc870010  ld          $a3, 0x10($a0)
    ctx->pc = 0x303b34u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x303b38: 0xdc880018  ld          $t0, 0x18($a0)
    ctx->pc = 0x303b38u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x303b3c: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x303b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x303b40: 0xfca60008  sd          $a2, 0x8($a1)
    ctx->pc = 0x303b40u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 6));
    // 0x303b44: 0xfca70010  sd          $a3, 0x10($a1)
    ctx->pc = 0x303b44u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
    // 0x303b48: 0xfca80018  sd          $t0, 0x18($a1)
    ctx->pc = 0x303b48u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 8));
    // 0x303b4c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x303b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x303b50: 0x1482fff6  bne         $a0, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x303B50u;
    {
        const bool branch_taken_0x303b50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x303B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303B50u;
        // 0x303b54: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303b50) {
            ctx->pc = 0x303B2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_303b2c;
        }
    }
    ctx->pc = 0x303B58u;
label_303b58:
    // 0x303b58: 0x68820007  ldl         $v0, 0x7($a0)
    ctx->pc = 0x303b58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x303b5c: 0x6c820000  ldr         $v0, 0x0($a0)
    ctx->pc = 0x303b5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x303b60: 0x6883000f  ldl         $v1, 0xF($a0)
    ctx->pc = 0x303b60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x303b64: 0x6c830008  ldr         $v1, 0x8($a0)
    ctx->pc = 0x303b64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x303b68: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x303b68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x303b6c: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x303b6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x303b70: 0xb0a3000f  sdl         $v1, 0xF($a1)
    ctx->pc = 0x303b70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x303b74: 0xb4a30008  sdr         $v1, 0x8($a1)
    ctx->pc = 0x303b74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x303b78: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x303b78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x303b7c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x303b7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x303b80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x303b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303b84: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x303b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303b88: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x303b88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303b8c: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x303b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303b90: 0xc7a200a0  lwc1        $f2, 0xA0($sp)
    ctx->pc = 0x303b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x303b94: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x303b94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x303b98: 0xe7a100f4  swc1        $f1, 0xF4($sp)
    ctx->pc = 0x303b98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x303b9c: 0xe7a200f8  swc1        $f2, 0xF8($sp)
    ctx->pc = 0x303b9cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x303ba0: 0xc0c28dc  jal         func_30A370
    ctx->pc = 0x303BA0u;
    SET_GPR_U32(ctx, 31, 0x303BA8u);
    ctx->pc = 0x303BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303BA0u;
    // 0x303ba4: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A370u, 0x303BA0u, 0x303BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303BA8u;
label_303ba8:
    // 0x303ba8: 0xc7ac00a4  lwc1        $f12, 0xA4($sp)
    ctx->pc = 0x303ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x303bac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x303bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303bb0: 0xc0c2ae8  jal         func_30ABA0
    ctx->pc = 0x303BB0u;
    SET_GPR_U32(ctx, 31, 0x303BB8u);
    ctx->pc = 0x303BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303BB0u;
    // 0x303bb4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30ABA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30ABA0u, 0x303BB0u, 0x303BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303BB8u;
label_303bb8:
    // 0x303bb8: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x303BB8u;
    {
        const bool branch_taken_0x303bb8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x303BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303BB8u;
        // 0x303bbc: 0xc7a000f0  lwc1        $f0, 0xF0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x303bb8) {
            ctx->pc = 0x303BC8u;
            goto label_303bc8;
        }
    }
    ctx->pc = 0x303BC0u;
    // 0x303bc0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x303bc0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x303bc4: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x303bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_303bc8:
    // 0x303bc8: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x303bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303bcc: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x303bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x303bd0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x303bd0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x303bd4: 0xc7a300f0  lwc1        $f3, 0xF0($sp)
    ctx->pc = 0x303bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x303bd8: 0xc7a400f4  lwc1        $f4, 0xF4($sp)
    ctx->pc = 0x303bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x303bdc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x303bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x303be0: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x303be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303be4: 0xc7a200a8  lwc1        $f2, 0xA8($sp)
    ctx->pc = 0x303be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x303be8: 0xe643011c  swc1        $f3, 0x11C($s2)
    ctx->pc = 0x303be8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 284), bits); }
    // 0x303bec: 0xe6440120  swc1        $f4, 0x120($s2)
    ctx->pc = 0x303becu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 288), bits); }
    // 0x303bf0: 0xe6410124  swc1        $f1, 0x124($s2)
    ctx->pc = 0x303bf0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 292), bits); }
    // 0x303bf4: 0xe6420174  swc1        $f2, 0x174($s2)
    ctx->pc = 0x303bf4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 372), bits); }
    // 0x303bf8: 0xe6400178  swc1        $f0, 0x178($s2)
    ctx->pc = 0x303bf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 376), bits); }
    // 0x303bfc: 0x16800018  bnez        $s4, . + 4 + (0x18 << 2)
    ctx->pc = 0x303BFCu;
    {
        const bool branch_taken_0x303bfc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x303C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303BFCu;
        // 0x303c00: 0xa642018a  sh          $v0, 0x18A($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 394), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303bfc) {
            ctx->pc = 0x303C60u;
            goto label_303c60;
        }
    }
    ctx->pc = 0x303C04u;
    // 0x303c04: 0xc7a2000c  lwc1        $f2, 0xC($sp)
    ctx->pc = 0x303c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x303c08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x303c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303c0c: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x303c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303c10: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x303c10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303c14: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x303c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303c18: 0xe7a20100  swc1        $f2, 0x100($sp)
    ctx->pc = 0x303c18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x303c1c: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x303c1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x303c20: 0xe7a10104  swc1        $f1, 0x104($sp)
    ctx->pc = 0x303c20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x303c24: 0xe674000c  swc1        $f20, 0xC($s3)
    ctx->pc = 0x303c24u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x303c28: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x303c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303c2c: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x303c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303c30: 0xc7a20108  lwc1        $f2, 0x108($sp)
    ctx->pc = 0x303c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x303c34: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x303c34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x303c38: 0xe7a100f4  swc1        $f1, 0xF4($sp)
    ctx->pc = 0x303c38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x303c3c: 0xc0ad88c  jal         func_2B6230
    ctx->pc = 0x303C3Cu;
    SET_GPR_U32(ctx, 31, 0x303C44u);
    ctx->pc = 0x303C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303C3Cu;
    // 0x303c40: 0xe7a200f8  swc1        $f2, 0xF8($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6230u, 0x303C3Cu, 0x303C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303C44u;
label_303c44:
    // 0x303c44: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x303c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303c48: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x303c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303c4c: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x303c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x303c50: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x303c50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x303c54: 0xe7a10104  swc1        $f1, 0x104($sp)
    ctx->pc = 0x303c54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x303c58: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x303C58u;
    {
        const bool branch_taken_0x303c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303C58u;
        // 0x303c5c: 0xe7a20108  swc1        $f2, 0x108($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x303c58) {
            ctx->pc = 0x303CC8u;
            goto label_303cc8;
        }
    }
    ctx->pc = 0x303C60u;
label_303c60:
    // 0x303c60: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x303c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303c64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x303c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303c68: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x303c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303c6c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x303c6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303c70: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x303c70u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x303c74: 0xc7a2000c  lwc1        $f2, 0xC($sp)
    ctx->pc = 0x303c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x303c78: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x303c78u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x303c7c: 0xe7a20100  swc1        $f2, 0x100($sp)
    ctx->pc = 0x303c7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x303c80: 0xe7a10104  swc1        $f1, 0x104($sp)
    ctx->pc = 0x303c80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x303c84: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x303c84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x303c88: 0xe674000c  swc1        $f20, 0xC($s3)
    ctx->pc = 0x303c88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x303c8c: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x303c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303c90: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x303c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303c94: 0xc7a20108  lwc1        $f2, 0x108($sp)
    ctx->pc = 0x303c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x303c98: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x303c98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x303c9c: 0xe7a100f4  swc1        $f1, 0xF4($sp)
    ctx->pc = 0x303c9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x303ca0: 0xc0ad88c  jal         func_2B6230
    ctx->pc = 0x303CA0u;
    SET_GPR_U32(ctx, 31, 0x303CA8u);
    ctx->pc = 0x303CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303CA0u;
    // 0x303ca4: 0xe7a200f8  swc1        $f2, 0xF8($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6230u, 0x303CA0u, 0x303CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303CA8u;
label_303ca8:
    // 0x303ca8: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x303ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303cac: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x303cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303cb0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x303cb0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x303cb4: 0xc7a2001c  lwc1        $f2, 0x1C($sp)
    ctx->pc = 0x303cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x303cb8: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x303cb8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x303cbc: 0xe7a20100  swc1        $f2, 0x100($sp)
    ctx->pc = 0x303cbcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x303cc0: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x303cc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x303cc4: 0xe7a10108  swc1        $f1, 0x108($sp)
    ctx->pc = 0x303cc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_303cc8:
    // 0x303cc8: 0xe674000c  swc1        $f20, 0xC($s3)
    ctx->pc = 0x303cc8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x303ccc: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x303cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303cd0: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x303cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303cd4: 0xc7a20108  lwc1        $f2, 0x108($sp)
    ctx->pc = 0x303cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x303cd8: 0xe6400128  swc1        $f0, 0x128($s2)
    ctx->pc = 0x303cd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 296), bits); }
    // 0x303cdc: 0xe641012c  swc1        $f1, 0x12C($s2)
    ctx->pc = 0x303cdcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 300), bits); }
    // 0x303ce0: 0xe6420130  swc1        $f2, 0x130($s2)
    ctx->pc = 0x303ce0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 304), bits); }
    // 0x303ce4: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x303ce4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x303ce8: 0xe7a100f4  swc1        $f1, 0xF4($sp)
    ctx->pc = 0x303ce8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x303cec: 0xe7a200f8  swc1        $f2, 0xF8($sp)
    ctx->pc = 0x303cecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x303cf0: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x303cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303cf4: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x303cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303cf8: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x303cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x303cfc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x303cfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x303d00: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x303d00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x303d04: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x303d04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x303d08: 0xe7a10104  swc1        $f1, 0x104($sp)
    ctx->pc = 0x303d08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x303d0c: 0xe7a20108  swc1        $f2, 0x108($sp)
    ctx->pc = 0x303d0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x303d10: 0xe674000c  swc1        $f20, 0xC($s3)
    ctx->pc = 0x303d10u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x303d14: 0xc7a20100  lwc1        $f2, 0x100($sp)
    ctx->pc = 0x303d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x303d18: 0xc7a00104  lwc1        $f0, 0x104($sp)
    ctx->pc = 0x303d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303d1c: 0xc7a10108  lwc1        $f1, 0x108($sp)
    ctx->pc = 0x303d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303d20: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x303d20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x303d24: 0xe7a100f8  swc1        $f1, 0xF8($sp)
    ctx->pc = 0x303d24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x303d28: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x303D28u;
    {
        const bool branch_taken_0x303d28 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x303D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303D28u;
        // 0x303d2c: 0xe7a200f0  swc1        $f2, 0xF0($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x303d28) {
            ctx->pc = 0x303D38u;
            goto label_303d38;
        }
    }
    ctx->pc = 0x303D30u;
    // 0x303d30: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x303d30u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x303d34: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x303d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_303d38:
    // 0x303d38: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x303d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303d3c: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x303d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303d40: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x303d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x303d44: 0xc7a300f0  lwc1        $f3, 0xF0($sp)
    ctx->pc = 0x303d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x303d48: 0xc7a400f4  lwc1        $f4, 0xF4($sp)
    ctx->pc = 0x303d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x303d4c: 0xc7a500f8  lwc1        $f5, 0xF8($sp)
    ctx->pc = 0x303d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x303d50: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x303d50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x303d54: 0xe7a10104  swc1        $f1, 0x104($sp)
    ctx->pc = 0x303d54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x303d58: 0xe7a20108  swc1        $f2, 0x108($sp)
    ctx->pc = 0x303d58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x303d5c: 0xe643014c  swc1        $f3, 0x14C($s2)
    ctx->pc = 0x303d5cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 332), bits); }
    // 0x303d60: 0xe6440150  swc1        $f4, 0x150($s2)
    ctx->pc = 0x303d60u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 336), bits); }
    // 0x303d64: 0xe6450154  swc1        $f5, 0x154($s2)
    ctx->pc = 0x303d64u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 340), bits); }
    // 0x303d68: 0xe674000c  swc1        $f20, 0xC($s3)
    ctx->pc = 0x303d68u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x303d6c: 0xc7a20100  lwc1        $f2, 0x100($sp)
    ctx->pc = 0x303d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x303d70: 0xc7a00104  lwc1        $f0, 0x104($sp)
    ctx->pc = 0x303d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303d74: 0xc7a10108  lwc1        $f1, 0x108($sp)
    ctx->pc = 0x303d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303d78: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x303d78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x303d7c: 0xe7a100f8  swc1        $f1, 0xF8($sp)
    ctx->pc = 0x303d7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x303d80: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x303D80u;
    {
        const bool branch_taken_0x303d80 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x303D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303D80u;
        // 0x303d84: 0xe7a200f0  swc1        $f2, 0xF0($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x303d80) {
            ctx->pc = 0x303D90u;
            goto label_303d90;
        }
    }
    ctx->pc = 0x303D88u;
    // 0x303d88: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x303d88u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x303d8c: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x303d8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_303d90:
    // 0x303d90: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x303d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303d94: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x303d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303d98: 0xc7a20074  lwc1        $f2, 0x74($sp)
    ctx->pc = 0x303d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x303d9c: 0xc7a300f0  lwc1        $f3, 0xF0($sp)
    ctx->pc = 0x303d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x303da0: 0xc7a400f4  lwc1        $f4, 0xF4($sp)
    ctx->pc = 0x303da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x303da4: 0xc7a500f8  lwc1        $f5, 0xF8($sp)
    ctx->pc = 0x303da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x303da8: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x303da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x303dac: 0xe7a10104  swc1        $f1, 0x104($sp)
    ctx->pc = 0x303dacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x303db0: 0xe7a20108  swc1        $f2, 0x108($sp)
    ctx->pc = 0x303db0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x303db4: 0xe6430158  swc1        $f3, 0x158($s2)
    ctx->pc = 0x303db4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 344), bits); }
    // 0x303db8: 0xe644015c  swc1        $f4, 0x15C($s2)
    ctx->pc = 0x303db8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 348), bits); }
    // 0x303dbc: 0xe6450160  swc1        $f5, 0x160($s2)
    ctx->pc = 0x303dbcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 352), bits); }
    // 0x303dc0: 0xe674000c  swc1        $f20, 0xC($s3)
    ctx->pc = 0x303dc0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x303dc4: 0xc7a20100  lwc1        $f2, 0x100($sp)
    ctx->pc = 0x303dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x303dc8: 0xc7a00104  lwc1        $f0, 0x104($sp)
    ctx->pc = 0x303dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303dcc: 0xc7a10108  lwc1        $f1, 0x108($sp)
    ctx->pc = 0x303dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303dd0: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x303dd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x303dd4: 0xe7a100f8  swc1        $f1, 0xF8($sp)
    ctx->pc = 0x303dd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x303dd8: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x303DD8u;
    {
        const bool branch_taken_0x303dd8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x303DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303DD8u;
        // 0x303ddc: 0xe7a200f0  swc1        $f2, 0xF0($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x303dd8) {
            ctx->pc = 0x303DE8u;
            goto label_303de8;
        }
    }
    ctx->pc = 0x303DE0u;
    // 0x303de0: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x303de0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x303de4: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x303de4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_303de8:
    // 0x303de8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x303de8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303dec: 0xc0ad8a2  jal         func_2B6288
    ctx->pc = 0x303DECu;
    SET_GPR_U32(ctx, 31, 0x303DF4u);
    ctx->pc = 0x303DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303DECu;
    // 0x303df0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6288u, 0x303DECu, 0x303DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303DF4u;
label_303df4:
    // 0x303df4: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x303df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303df8: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x303df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303dfc: 0xc7a20084  lwc1        $f2, 0x84($sp)
    ctx->pc = 0x303dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x303e00: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x303e00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x303e04: 0xe7a10104  swc1        $f1, 0x104($sp)
    ctx->pc = 0x303e04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x303e08: 0xe7a20108  swc1        $f2, 0x108($sp)
    ctx->pc = 0x303e08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x303e0c: 0xe674000c  swc1        $f20, 0xC($s3)
    ctx->pc = 0x303e0cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x303e10: 0xc7a20100  lwc1        $f2, 0x100($sp)
    ctx->pc = 0x303e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x303e14: 0xc7a00104  lwc1        $f0, 0x104($sp)
    ctx->pc = 0x303e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303e18: 0xc7a10108  lwc1        $f1, 0x108($sp)
    ctx->pc = 0x303e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303e1c: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x303e1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x303e20: 0xe7a100f8  swc1        $f1, 0xF8($sp)
    ctx->pc = 0x303e20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x303e24: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x303E24u;
    {
        const bool branch_taken_0x303e24 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x303E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303E24u;
        // 0x303e28: 0xe7a200f0  swc1        $f2, 0xF0($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x303e24) {
            ctx->pc = 0x303E34u;
            goto label_303e34;
        }
    }
    ctx->pc = 0x303E2Cu;
    // 0x303e2c: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x303e2cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x303e30: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x303e30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_303e34:
    // 0x303e34: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x303e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303e38: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x303e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303e3c: 0xc7a200f8  lwc1        $f2, 0xF8($sp)
    ctx->pc = 0x303e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x303e40: 0xe6400164  swc1        $f0, 0x164($s2)
    ctx->pc = 0x303e40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 356), bits); }
    // 0x303e44: 0xe6410168  swc1        $f1, 0x168($s2)
    ctx->pc = 0x303e44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 360), bits); }
    // 0x303e48: 0xe642016c  swc1        $f2, 0x16C($s2)
    ctx->pc = 0x303e48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 364), bits); }
    // 0x303e4c: 0x12000050  beqz        $s0, . + 4 + (0x50 << 2)
    ctx->pc = 0x303E4Cu;
    {
        const bool branch_taken_0x303e4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x303E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303E4Cu;
        // 0x303e50: 0x82c500be  lb          $a1, 0xBE($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 190)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303e4c) {
            ctx->pc = 0x303F90u;
            goto label_303f90;
        }
    }
    ctx->pc = 0x303E54u;
    // 0x303e54: 0x264401a0  addiu       $a0, $s2, 0x1A0
    ctx->pc = 0x303e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 416));
    // 0x303e58: 0x10900007  beq         $a0, $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x303E58u;
    {
        const bool branch_taken_0x303e58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        ctx->pc = 0x303E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303E58u;
        // 0x303e5c: 0x264301b0  addiu       $v1, $s2, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303e58) {
            ctx->pc = 0x303E78u;
            goto label_303e78;
        }
    }
    ctx->pc = 0x303E60u;
    // 0x303e60: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x303e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303e64: 0xe64001a0  swc1        $f0, 0x1A0($s2)
    ctx->pc = 0x303e64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 416), bits); }
    // 0x303e68: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x303e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303e6c: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x303e6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x303e70: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x303e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303e74: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x303e74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_303e78:
    // 0x303e78: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x303e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x303e7c: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x303E7Cu;
    {
        const bool branch_taken_0x303e7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x303e7c) {
            ctx->pc = 0x303E80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303E7Cu;
            // 0x303e80: 0x264301c0  addiu       $v1, $s2, 0x1C0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 448));
            ctx->in_delay_slot = false;
            ctx->pc = 0x303EA0u;
            goto label_303ea0;
        }
    }
    ctx->pc = 0x303E84u;
    // 0x303e84: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x303e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303e88: 0xe64001b0  swc1        $f0, 0x1B0($s2)
    ctx->pc = 0x303e88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 432), bits); }
    // 0x303e8c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x303e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303e90: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x303e90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x303e94: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x303e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303e98: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x303e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x303e9c: 0x264301c0  addiu       $v1, $s2, 0x1C0
    ctx->pc = 0x303e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 448));
label_303ea0:
    // 0x303ea0: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x303ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x303ea4: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x303EA4u;
    {
        const bool branch_taken_0x303ea4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x303ea4) {
            ctx->pc = 0x303EC4u;
            goto label_303ec4;
        }
    }
    ctx->pc = 0x303EACu;
    // 0x303eac: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x303eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303eb0: 0xe64001c0  swc1        $f0, 0x1C0($s2)
    ctx->pc = 0x303eb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 448), bits); }
    // 0x303eb4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x303eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303eb8: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x303eb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x303ebc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x303ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303ec0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x303ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_303ec4:
    // 0x303ec4: 0x6a080037  ldl         $t0, 0x37($s0)
    ctx->pc = 0x303ec4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x303ec8: 0x6e080030  ldr         $t0, 0x30($s0)
    ctx->pc = 0x303ec8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x303ecc: 0x6a02003f  ldl         $v0, 0x3F($s0)
    ctx->pc = 0x303eccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x303ed0: 0x6e020038  ldr         $v0, 0x38($s0)
    ctx->pc = 0x303ed0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x303ed4: 0xb24801d7  sdl         $t0, 0x1D7($s2)
    ctx->pc = 0x303ed4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 471); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x303ed8: 0xb64801d0  sdr         $t0, 0x1D0($s2)
    ctx->pc = 0x303ed8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 464); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x303edc: 0xb24201df  sdl         $v0, 0x1DF($s2)
    ctx->pc = 0x303edcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 479); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x303ee0: 0xb64201d8  sdr         $v0, 0x1D8($s2)
    ctx->pc = 0x303ee0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 472); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x303ee4: 0x26470200  addiu       $a3, $s2, 0x200
    ctx->pc = 0x303ee4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 512));
    // 0x303ee8: 0x26060060  addiu       $a2, $s0, 0x60
    ctx->pc = 0x303ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x303eec: 0xc6000040  lwc1        $f0, 0x40($s0)
    ctx->pc = 0x303eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303ef0: 0xe4800040  swc1        $f0, 0x40($a0)
    ctx->pc = 0x303ef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x303ef4: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x303ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x303ef8: 0xac820044  sw          $v0, 0x44($a0)
    ctx->pc = 0x303ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 2));
    // 0x303efc: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x303efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x303f00: 0xac830048  sw          $v1, 0x48($a0)
    ctx->pc = 0x303f00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 3));
    // 0x303f04: 0x9202004c  lbu         $v0, 0x4C($s0)
    ctx->pc = 0x303f04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x303f08: 0xa082004c  sb          $v0, 0x4C($a0)
    ctx->pc = 0x303f08u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 76), (uint8_t)GPR_U32(ctx, 2));
    // 0x303f0c: 0x9203004d  lbu         $v1, 0x4D($s0)
    ctx->pc = 0x303f0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 77)));
    // 0x303f10: 0xa083004d  sb          $v1, 0x4D($a0)
    ctx->pc = 0x303f10u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 3));
    // 0x303f14: 0x9202004e  lbu         $v0, 0x4E($s0)
    ctx->pc = 0x303f14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 78)));
    // 0x303f18: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x303f18u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
    // 0x303f1c: 0x9203004f  lbu         $v1, 0x4F($s0)
    ctx->pc = 0x303f1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 79)));
    // 0x303f20: 0xa083004f  sb          $v1, 0x4F($a0)
    ctx->pc = 0x303f20u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 79), (uint8_t)GPR_U32(ctx, 3));
    // 0x303f24: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x303f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x303f28: 0x10e60007  beq         $a3, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x303F28u;
    {
        const bool branch_taken_0x303f28 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        ctx->pc = 0x303F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303F28u;
        // 0x303f2c: 0xac820050  sw          $v0, 0x50($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303f28) {
            ctx->pc = 0x303F48u;
            goto label_303f48;
        }
    }
    ctx->pc = 0x303F30u;
    // 0x303f30: 0xc6000060  lwc1        $f0, 0x60($s0)
    ctx->pc = 0x303f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303f34: 0xe6400200  swc1        $f0, 0x200($s2)
    ctx->pc = 0x303f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 512), bits); }
    // 0x303f38: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x303f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303f3c: 0xe4e10004  swc1        $f1, 0x4($a3)
    ctx->pc = 0x303f3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x303f40: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x303f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303f44: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x303f44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
label_303f48:
    // 0x303f48: 0x96020070  lhu         $v0, 0x70($s0)
    ctx->pc = 0x303f48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x303f4c: 0xa4820070  sh          $v0, 0x70($a0)
    ctx->pc = 0x303f4cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 112), (uint16_t)GPR_U32(ctx, 2));
    // 0x303f50: 0x96030072  lhu         $v1, 0x72($s0)
    ctx->pc = 0x303f50u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 114)));
    // 0x303f54: 0xa4830072  sh          $v1, 0x72($a0)
    ctx->pc = 0x303f54u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 114), (uint16_t)GPR_U32(ctx, 3));
    // 0x303f58: 0x92020074  lbu         $v0, 0x74($s0)
    ctx->pc = 0x303f58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x303f5c: 0xa0820074  sb          $v0, 0x74($a0)
    ctx->pc = 0x303f5cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 116), (uint8_t)GPR_U32(ctx, 2));
    // 0x303f60: 0x92030075  lbu         $v1, 0x75($s0)
    ctx->pc = 0x303f60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 117)));
    // 0x303f64: 0xa0830075  sb          $v1, 0x75($a0)
    ctx->pc = 0x303f64u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 117), (uint8_t)GPR_U32(ctx, 3));
    // 0x303f68: 0x96020076  lhu         $v0, 0x76($s0)
    ctx->pc = 0x303f68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 118)));
    // 0x303f6c: 0xa4820076  sh          $v0, 0x76($a0)
    ctx->pc = 0x303f6cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 118), (uint16_t)GPR_U32(ctx, 2));
    // 0x303f70: 0x8e030078  lw          $v1, 0x78($s0)
    ctx->pc = 0x303f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x303f74: 0xac830078  sw          $v1, 0x78($a0)
    ctx->pc = 0x303f74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 3));
    // 0x303f78: 0x8208004c  lb          $t0, 0x4C($s0)
    ctx->pc = 0x303f78u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x303f7c: 0x2902fffd  slti        $v0, $t0, -0x3
    ctx->pc = 0x303f7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)4294967293) ? 1 : 0);
    // 0x303f80: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x303F80u;
    {
        const bool branch_taken_0x303f80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x303F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303F80u;
        // 0x303f84: 0x28a2fffe  slti        $v0, $a1, -0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967294) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x303f80) {
            ctx->pc = 0x303F94u;
            goto label_303f94;
        }
    }
    ctx->pc = 0x303F88u;
    // 0x303f88: 0x81027  nor         $v0, $zero, $t0
    ctx->pc = 0x303f88u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 8)));
    // 0x303f8c: 0x102280b  movn        $a1, $t0, $v0
    ctx->pc = 0x303f8cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 8));
label_303f90:
    // 0x303f90: 0x28a2fffe  slti        $v0, $a1, -0x2
    ctx->pc = 0x303f90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967294) ? 1 : 0);
label_303f94:
    // 0x303f94: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x303F94u;
    {
        const bool branch_taken_0x303f94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x303F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303F94u;
        // 0x303f98: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303f94) {
            ctx->pc = 0x304084u;
            goto label_304084;
        }
    }
    ctx->pc = 0x303F9Cu;
    // 0x303f9c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x303f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x303fa0: 0x10a20038  beq         $a1, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x303FA0u;
    {
        const bool branch_taken_0x303fa0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x303FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303FA0u;
        // 0x303fa4: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303fa0) {
            ctx->pc = 0x304084u;
            goto label_304084;
        }
    }
    ctx->pc = 0x303FA8u;
    // 0x303fa8: 0x52a0003b  beql        $s5, $zero, . + 4 + (0x3B << 2)
    ctx->pc = 0x303FA8u;
    {
        const bool branch_taken_0x303fa8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x303fa8) {
            ctx->pc = 0x303FACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303FA8u;
            // 0x303fac: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x304098u;
            goto label_304098;
        }
    }
    ctx->pc = 0x303FB0u;
    // 0x303fb0: 0x92a302b4  lbu         $v1, 0x2B4($s5)
    ctx->pc = 0x303fb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 692)));
    // 0x303fb4: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x303fb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x303fb8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x303FB8u;
    {
        const bool branch_taken_0x303fb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x303FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303FB8u;
        // 0x303fbc: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303fb8) {
            ctx->pc = 0x303FD4u;
            goto label_303fd4;
        }
    }
    ctx->pc = 0x303FC0u;
    // 0x303fc0: 0x8645018c  lh          $a1, 0x18C($s2)
    ctx->pc = 0x303fc0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 396)));
    // 0x303fc4: 0xc0c14f0  jal         func_3053C0
    ctx->pc = 0x303FC4u;
    SET_GPR_U32(ctx, 31, 0x303FCCu);
    ctx->pc = 0x303FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303FC4u;
    // 0x303fc8: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3053C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3053C0u, 0x303FC4u, 0x303FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303FCCu;
label_303fcc:
    // 0x303fcc: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x303FCCu;
    {
        const bool branch_taken_0x303fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303FCCu;
        // 0x303fd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303fcc) {
            ctx->pc = 0x30418Cu;
            goto label_30418c;
        }
    }
    ctx->pc = 0x303FD4u;
label_303fd4:
    // 0x303fd4: 0x10a2000e  beq         $a1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x303FD4u;
    {
        const bool branch_taken_0x303fd4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x303FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303FD4u;
        // 0x303fd8: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303fd4) {
            ctx->pc = 0x304010u;
            goto label_304010;
        }
    }
    ctx->pc = 0x303FDCu;
    // 0x303fdc: 0xafa30100  sw          $v1, 0x100($sp)
    ctx->pc = 0x303fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
    // 0x303fe0: 0x4a00002  bltz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x303FE0u;
    {
        const bool branch_taken_0x303fe0 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x303FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303FE0u;
        // 0x303fe4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303fe0) {
            ctx->pc = 0x303FECu;
            goto label_303fec;
        }
    }
    ctx->pc = 0x303FE8u;
    // 0x303fe8: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x303fe8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_303fec:
    // 0x303fec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x303fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x303ff0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x303FF0u;
    {
        const bool branch_taken_0x303ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x303FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303FF0u;
        // 0x303ff4: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303ff0) {
            ctx->pc = 0x304008u;
            goto label_304008;
        }
    }
    ctx->pc = 0x303FF8u;
    // 0x303ff8: 0x8ea30278  lw          $v1, 0x278($s5)
    ctx->pc = 0x303ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 632)));
    // 0x303ffc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x303ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x304000: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x304000u;
    {
        const bool branch_taken_0x304000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304000u;
        // 0x304004: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304000) {
            ctx->pc = 0x30400Cu;
            goto label_30400c;
        }
    }
    ctx->pc = 0x304008u;
label_304008:
    // 0x304008: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x304008u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30400c:
    // 0x30400c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30400cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_304010:
    // 0x304010: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x304010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x304014: 0x50a2001f  beql        $a1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x304014u;
    {
        const bool branch_taken_0x304014 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x304014) {
            ctx->pc = 0x304018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x304014u;
            // 0x304018: 0xae500104  sw          $s0, 0x104($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 260), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x304094u;
            goto label_304094;
        }
    }
    ctx->pc = 0x30401Cu;
    // 0x30401c: 0x5280001d  beql        $s4, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x30401Cu;
    {
        const bool branch_taken_0x30401c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x30401c) {
            ctx->pc = 0x304020u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30401Cu;
            // 0x304020: 0xae500104  sw          $s0, 0x104($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 260), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x304094u;
            goto label_304094;
        }
    }
    ctx->pc = 0x304024u;
    // 0x304024: 0x5200001b  beql        $s0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x304024u;
    {
        const bool branch_taken_0x304024 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x304024) {
            ctx->pc = 0x304028u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x304024u;
            // 0x304028: 0xae500104  sw          $s0, 0x104($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 260), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x304094u;
            goto label_304094;
        }
    }
    ctx->pc = 0x30402Cu;
    // 0x30402c: 0x8e04014c  lw          $a0, 0x14C($s0)
    ctx->pc = 0x30402cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
    // 0x304030: 0x50800010  beql        $a0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x304030u;
    {
        const bool branch_taken_0x304030 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x304030) {
            ctx->pc = 0x304034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x304030u;
            // 0x304034: 0x8645018c  lh          $a1, 0x18C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 396)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x304074u;
            goto label_304074;
        }
    }
    ctx->pc = 0x304038u;
    // 0x304038: 0x92a202b4  lbu         $v0, 0x2B4($s5)
    ctx->pc = 0x304038u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 692)));
    // 0x30403c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30403cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304040: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x304040u;
    {
        const bool branch_taken_0x304040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x304044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304040u;
        // 0x304044: 0xafa20100  sw          $v0, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304040) {
            ctx->pc = 0x304054u;
            goto label_304054;
        }
    }
    ctx->pc = 0x304048u;
    // 0x304048: 0x8ea20278  lw          $v0, 0x278($s5)
    ctx->pc = 0x304048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 632)));
    // 0x30404c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x30404Cu;
    {
        const bool branch_taken_0x30404c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30404Cu;
        // 0x304050: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30404c) {
            ctx->pc = 0x304058u;
            goto label_304058;
        }
    }
    ctx->pc = 0x304054u;
label_304054:
    // 0x304054: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x304054u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_304058:
    // 0x304058: 0x3c03f0f0  lui         $v1, 0xF0F0
    ctx->pc = 0x304058u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61680 << 16));
    // 0x30405c: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x30405cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x304060: 0x3463f0f1  ori         $v1, $v1, 0xF0F1
    ctx->pc = 0x304060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61681);
    // 0x304064: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x304064u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x304068: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x304068u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x30406c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x30406Cu;
    {
        const bool branch_taken_0x30406c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30406Cu;
        // 0x304070: 0xa24201ec  sb          $v0, 0x1EC($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 492), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30406c) {
            ctx->pc = 0x30407Cu;
            goto label_30407c;
        }
    }
    ctx->pc = 0x304074u;
label_304074:
    // 0x304074: 0xc0c14f0  jal         func_3053C0
    ctx->pc = 0x304074u;
    SET_GPR_U32(ctx, 31, 0x30407Cu);
    ctx->pc = 0x304078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304074u;
    // 0x304078: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3053C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3053C0u, 0x304074u, 0x30407Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30407Cu;
label_30407c:
    // 0x30407c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x30407Cu;
    {
        const bool branch_taken_0x30407c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30407Cu;
        // 0x304080: 0xae500104  sw          $s0, 0x104($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 260), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30407c) {
            ctx->pc = 0x304094u;
            goto label_304094;
        }
    }
    ctx->pc = 0x304084u;
label_304084:
    // 0x304084: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x304084u;
    {
        const bool branch_taken_0x304084 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x304088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304084u;
        // 0x304088: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304084) {
            ctx->pc = 0x304098u;
            goto label_304098;
        }
    }
    ctx->pc = 0x30408Cu;
    // 0x30408c: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x30408Cu;
    {
        const bool branch_taken_0x30408c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30408Cu;
        // 0x304090: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30408c) {
            ctx->pc = 0x30418Cu;
            goto label_30418c;
        }
    }
    ctx->pc = 0x304094u;
label_304094:
    // 0x304094: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x304094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_304098:
    // 0x304098: 0xc0c0a62  jal         func_302988
    ctx->pc = 0x304098u;
    SET_GPR_U32(ctx, 31, 0x3040A0u);
    ctx->pc = 0x30409Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304098u;
    // 0x30409c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302988u, 0x304098u, 0x3040A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3040A0u;
label_3040a0:
    // 0x3040a0: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x3040a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x3040a4: 0x54400029  bnel        $v0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x3040A4u;
    {
        const bool branch_taken_0x3040a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3040a4) {
            ctx->pc = 0x3040A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3040A4u;
            // 0x3040a8: 0x8e430100  lw          $v1, 0x100($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30414Cu;
            goto label_30414c;
        }
    }
    ctx->pc = 0x3040ACu;
    // 0x3040ac: 0xc0ad86c  jal         func_2B61B0
    ctx->pc = 0x3040ACu;
    SET_GPR_U32(ctx, 31, 0x3040B4u);
    ctx->pc = 0x3040B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3040ACu;
    // 0x3040b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B61B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B61B0u, 0x3040ACu, 0x3040B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3040B4u;
label_3040b4:
    // 0x3040b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3040b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3040b8: 0xc051d4a  jal         func_147528
    ctx->pc = 0x3040B8u;
    SET_GPR_U32(ctx, 31, 0x3040C0u);
    ctx->pc = 0x3040BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3040B8u;
    // 0x3040bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x3040B8u, 0x3040C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3040C0u;
label_3040c0:
    // 0x3040c0: 0x27b00150  addiu       $s0, $sp, 0x150
    ctx->pc = 0x3040c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x3040c4: 0x264501b0  addiu       $a1, $s2, 0x1B0
    ctx->pc = 0x3040c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 432));
    // 0x3040c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3040c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3040cc: 0xc051dca  jal         func_147728
    ctx->pc = 0x3040CCu;
    SET_GPR_U32(ctx, 31, 0x3040D4u);
    ctx->pc = 0x3040D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3040CCu;
    // 0x3040d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147728u, 0x3040CCu, 0x3040D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3040D4u;
label_3040d4:
    // 0x3040d4: 0x27b10190  addiu       $s1, $sp, 0x190
    ctx->pc = 0x3040d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x3040d8: 0x264501c0  addiu       $a1, $s2, 0x1C0
    ctx->pc = 0x3040d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 448));
    // 0x3040dc: 0xc051db4  jal         func_1476D0
    ctx->pc = 0x3040DCu;
    SET_GPR_U32(ctx, 31, 0x3040E4u);
    ctx->pc = 0x3040E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3040DCu;
    // 0x3040e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1476D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1476D0u, 0x3040DCu, 0x3040E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3040E4u;
label_3040e4:
    // 0x3040e4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3040e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3040e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3040e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3040ec: 0xc051d52  jal         func_147548
    ctx->pc = 0x3040ECu;
    SET_GPR_U32(ctx, 31, 0x3040F4u);
    ctx->pc = 0x3040F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3040ECu;
    // 0x3040f0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147548u, 0x3040ECu, 0x3040F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3040F4u;
label_3040f4:
    // 0x3040f4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3040f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3040f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3040f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3040fc: 0xc051d52  jal         func_147548
    ctx->pc = 0x3040FCu;
    SET_GPR_U32(ctx, 31, 0x304104u);
    ctx->pc = 0x304100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3040FCu;
    // 0x304100: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147548u, 0x3040FCu, 0x304104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304104u;
label_304104:
    // 0x304104: 0xfba00140  sqc2        $vf0, 0x140($sp)
    ctx->pc = 0x304104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x304108: 0x27b00140  addiu       $s0, $sp, 0x140
    ctx->pc = 0x304108u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x30410c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x30410cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304110: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x304110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304114: 0xc051f22  jal         func_147C88
    ctx->pc = 0x304114u;
    SET_GPR_U32(ctx, 31, 0x30411Cu);
    ctx->pc = 0x304118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304114u;
    // 0x304118: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C88u, 0x304114u, 0x30411Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30411Cu;
label_30411c:
    // 0x30411c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30411cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304120: 0xc0ad88c  jal         func_2B6230
    ctx->pc = 0x304120u;
    SET_GPR_U32(ctx, 31, 0x304128u);
    ctx->pc = 0x304124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304120u;
    // 0x304124: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6230u, 0x304120u, 0x304128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304128u;
label_304128:
    // 0x304128: 0xfba001d0  sqc2        $vf0, 0x1D0($sp)
    ctx->pc = 0x304128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x30412c: 0x27b001d0  addiu       $s0, $sp, 0x1D0
    ctx->pc = 0x30412cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x304130: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x304130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304134: 0xc051f18  jal         func_147C60
    ctx->pc = 0x304134u;
    SET_GPR_U32(ctx, 31, 0x30413Cu);
    ctx->pc = 0x304138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304134u;
    // 0x304138: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x304134u, 0x30413Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30413Cu;
label_30413c:
    // 0x30413c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30413cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304140: 0xc0ad8a2  jal         func_2B6288
    ctx->pc = 0x304140u;
    SET_GPR_U32(ctx, 31, 0x304148u);
    ctx->pc = 0x304144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304140u;
    // 0x304144: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6288u, 0x304140u, 0x304148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304148u;
label_304148:
    // 0x304148: 0x8e430100  lw          $v1, 0x100($s2)
    ctx->pc = 0x304148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
label_30414c:
    // 0x30414c: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x30414cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x304150: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x304150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x304154: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x304154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x304158: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x304158u;
    {
        const bool branch_taken_0x304158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x304158) {
            ctx->pc = 0x30415Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x304158u;
            // 0x30415c: 0x8e430108  lw          $v1, 0x108($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x304170u;
            goto label_304170;
        }
    }
    ctx->pc = 0x304160u;
    // 0x304160: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x304160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x304164: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x304164u;
    {
        const bool branch_taken_0x304164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x304168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304164u;
        // 0x304168: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304164) {
            ctx->pc = 0x30418Cu;
            goto label_30418c;
        }
    }
    ctx->pc = 0x30416Cu;
    // 0x30416c: 0x8e430108  lw          $v1, 0x108($s2)
    ctx->pc = 0x30416cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
label_304170:
    // 0x304170: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x304170u;
    {
        const bool branch_taken_0x304170 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x304174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304170u;
        // 0x304174: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304170) {
            ctx->pc = 0x30418Cu;
            goto label_30418c;
        }
    }
    ctx->pc = 0x304178u;
    // 0x304178: 0x906202f4  lbu         $v0, 0x2F4($v1)
    ctx->pc = 0x304178u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 756)));
    // 0x30417c: 0xa2420226  sb          $v0, 0x226($s2)
    ctx->pc = 0x30417cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 550), (uint8_t)GPR_U32(ctx, 2));
    // 0x304180: 0x906302f5  lbu         $v1, 0x2F5($v1)
    ctx->pc = 0x304180u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 757)));
    // 0x304184: 0xa2430227  sb          $v1, 0x227($s2)
    ctx->pc = 0x304184u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 551), (uint8_t)GPR_U32(ctx, 3));
    // 0x304188: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x304188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30418c:
    // 0x30418c: 0x7bb00250  lq          $s0, 0x250($sp)
    ctx->pc = 0x30418cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x304190: 0x7bb10240  lq          $s1, 0x240($sp)
    ctx->pc = 0x304190u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x304194: 0x7bb20230  lq          $s2, 0x230($sp)
    ctx->pc = 0x304194u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x304198: 0x7bb30220  lq          $s3, 0x220($sp)
    ctx->pc = 0x304198u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x30419c: 0x7bb40210  lq          $s4, 0x210($sp)
    ctx->pc = 0x30419cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x3041a0: 0x7bb50200  lq          $s5, 0x200($sp)
    ctx->pc = 0x3041a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x3041a4: 0x7bb601f0  lq          $s6, 0x1F0($sp)
    ctx->pc = 0x3041a4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x3041a8: 0xdfbf01e0  ld          $ra, 0x1E0($sp)
    ctx->pc = 0x3041a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x3041ac: 0xc7b40260  lwc1        $f20, 0x260($sp)
    ctx->pc = 0x3041acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3041b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3041B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3041B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3041B0u;
        // 0x3041b4: 0x27bd0270  addiu       $sp, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3041B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3041B8u;
}
