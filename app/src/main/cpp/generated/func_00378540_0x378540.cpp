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

// Function: func_00378540
// Address: 0x378540 - 0x378610
void func_00378540_0x378540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00378540_0x378540");
#endif

    switch (ctx->pc) {
        case 0x378564u: goto label_378564;
        case 0x3785e0u: goto label_3785e0;
        default: break;
    }

    ctx->pc = 0x378540u;

    // 0x378540: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x378540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x378544: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x378544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378548: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x378548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x37854c: 0x34068b5c  ori         $a2, $zero, 0x8B5C
    ctx->pc = 0x37854cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35676);
    // 0x378550: 0x3c100077  lui         $s0, 0x77
    ctx->pc = 0x378550u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)119 << 16));
    // 0x378554: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x378554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x378558: 0x26103318  addiu       $s0, $s0, 0x3318
    ctx->pc = 0x378558u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 13080));
    // 0x37855c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x37855Cu;
    SET_GPR_U32(ctx, 31, 0x378564u);
    ctx->pc = 0x378560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37855Cu;
    // 0x378560: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x37855Cu, 0x378564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378564u;
label_378564:
    // 0x378564: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x378564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x378568: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x378568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x37856c: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x37856cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x378570: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x378570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x378574: 0xa2000005  sb          $zero, 0x5($s0)
    ctx->pc = 0x378574u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x378578: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x378578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x37857c: 0xa2000006  sb          $zero, 0x6($s0)
    ctx->pc = 0x37857cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x378580: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x378580u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x378584: 0xa2000007  sb          $zero, 0x7($s0)
    ctx->pc = 0x378584u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 0));
    // 0x378588: 0x2605007c  addiu       $a1, $s0, 0x7C
    ctx->pc = 0x378588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
    // 0x37858c: 0xa2000008  sb          $zero, 0x8($s0)
    ctx->pc = 0x37858cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x378590: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x378590u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x378594: 0x246bb170  addiu       $t3, $v1, -0x4E90
    ctx->pc = 0x378594u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947184));
    // 0x378598: 0x69680007  ldl         $t0, 0x7($t3)
    ctx->pc = 0x378598u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x37859c: 0x6d680000  ldr         $t0, 0x0($t3)
    ctx->pc = 0x37859cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x3785a0: 0xb20801b9  sdl         $t0, 0x1B9($s0)
    ctx->pc = 0x3785a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 441); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3785a4: 0xb60801b2  sdr         $t0, 0x1B2($s0)
    ctx->pc = 0x3785a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 434); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3785a8: 0x246bb170  addiu       $t3, $v1, -0x4E90
    ctx->pc = 0x3785a8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947184));
    // 0x3785ac: 0x69680007  ldl         $t0, 0x7($t3)
    ctx->pc = 0x3785acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x3785b0: 0x6d680000  ldr         $t0, 0x0($t3)
    ctx->pc = 0x3785b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x3785b4: 0xb20802b9  sdl         $t0, 0x2B9($s0)
    ctx->pc = 0x3785b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 697); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3785b8: 0xb60802b2  sdr         $t0, 0x2B2($s0)
    ctx->pc = 0x3785b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 690); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3785bc: 0x246bb170  addiu       $t3, $v1, -0x4E90
    ctx->pc = 0x3785bcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947184));
    // 0x3785c0: 0x69680007  ldl         $t0, 0x7($t3)
    ctx->pc = 0x3785c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x3785c4: 0x6d680000  ldr         $t0, 0x0($t3)
    ctx->pc = 0x3785c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x3785c8: 0xb20803b9  sdl         $t0, 0x3B9($s0)
    ctx->pc = 0x3785c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 953); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3785cc: 0xb60803b2  sdr         $t0, 0x3B2($s0)
    ctx->pc = 0x3785ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 946); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3785d0: 0xa6040012  sh          $a0, 0x12($s0)
    ctx->pc = 0x3785d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 4));
    // 0x3785d4: 0xa6020014  sh          $v0, 0x14($s0)
    ctx->pc = 0x3785d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x3785d8: 0xa6020010  sh          $v0, 0x10($s0)
    ctx->pc = 0x3785d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x3785dc: 0x0  nop
    ctx->pc = 0x3785dcu;
    // NOP
label_3785e0:
    // 0x3785e0: 0xa0a7ffe0  sb          $a3, -0x20($a1)
    ctx->pc = 0x3785e0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294967264), (uint8_t)GPR_U32(ctx, 7));
    // 0x3785e4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3785e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3785e8: 0xa0a70000  sb          $a3, 0x0($a1)
    ctx->pc = 0x3785e8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x3785ec: 0x0  nop
    ctx->pc = 0x3785ecu;
    // NOP
    // 0x3785f0: 0x4c1fffb  bgez        $a2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3785F0u;
    {
        const bool branch_taken_0x3785f0 = (GPR_S64(ctx, 6) >= 0);
        ctx->pc = 0x3785F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3785F0u;
        // 0x3785f4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3785f0) {
            ctx->pc = 0x3785E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3785e0;
        }
    }
    ctx->pc = 0x3785F8u;
    // 0x3785f8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3785f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3785fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3785fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x378600: 0x3e00008  jr          $ra
    ctx->pc = 0x378600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x378604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378600u;
        // 0x378604: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x378600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x378608u;
    // 0x378608: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x378608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x37860c: 0x0  nop
    ctx->pc = 0x37860cu;
    // NOP
    ctx->pc = 0x378610u;
}
