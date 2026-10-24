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

// Function: func_002C7E30
// Address: 0x2c7e30 - 0x2c7f00
void func_002C7E30_0x2c7e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002C7E30_0x2c7e30");
#endif

    switch (ctx->pc) {
        case 0x2c7e58u: goto label_2c7e58;
        case 0x2c7e70u: goto label_2c7e70;
        default: break;
    }

    ctx->pc = 0x2c7e30u;

    // 0x2c7e30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c7e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2c7e34: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2c7e34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2c7e38: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2c7e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2c7e3c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2c7e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2c7e40: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x2c7e40u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2c7e44: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c7e44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7e48: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c7e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c7e4c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c7e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7e50: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2C7E50u;
    SET_GPR_U32(ctx, 31, 0x2C7E58u);
    ctx->pc = 0x2C7E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7E50u;
    // 0x2c7e54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2C7E50u, 0x2C7E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7E58u;
label_2c7e58:
    // 0x2c7e58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c7e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c7e5c: 0x16030004  bne         $s0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C7E5Cu;
    {
        const bool branch_taken_0x2c7e5c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C7E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7E5Cu;
        // 0x2c7e60: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7e5c) {
            ctx->pc = 0x2C7E70u;
            goto label_2c7e70;
        }
    }
    ctx->pc = 0x2C7E64u;
    // 0x2c7e64: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c7e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7e68: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x2C7E68u;
    SET_GPR_U32(ctx, 31, 0x2C7E70u);
    ctx->pc = 0x2C7E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7E68u;
    // 0x2c7e6c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x2C7E68u, 0x2C7E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7E70u;
label_2c7e70:
    // 0x2c7e70: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x2c7e70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2c7e74: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x2c7e74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2c7e78: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x2c7e78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c7e7c: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x2c7e7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c7e80: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x2c7e80u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x2c7e84: 0x73878  dsll        $a3, $a3, 1
    ctx->pc = 0x2c7e84u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 1);
    // 0x2c7e88: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x2c7e88u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x2c7e8c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2c7e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x2c7e90: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x2c7e90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x2c7e94: 0x63078  dsll        $a2, $a2, 1
    ctx->pc = 0x2c7e94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 1);
    // 0x2c7e98: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x2c7e98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x2c7e9c: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x2c7e9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2c7ea0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x2c7ea0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x2c7ea4: 0x97a50010  lhu         $a1, 0x10($sp)
    ctx->pc = 0x2c7ea4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c7ea8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2c7ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2c7eac: 0x97a30012  lhu         $v1, 0x12($sp)
    ctx->pc = 0x2c7eacu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 18)));
    // 0x2c7eb0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2c7eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2c7eb4: 0x97a40014  lhu         $a0, 0x14($sp)
    ctx->pc = 0x2c7eb4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2c7eb8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2c7eb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2c7ebc: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x2c7ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x2c7ec0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c7ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2c7ec4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x2c7ec4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2c7ec8: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x2c7ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x2c7ecc: 0x97a30016  lhu         $v1, 0x16($sp)
    ctx->pc = 0x2c7eccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 22)));
    // 0x2c7ed0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2c7ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2c7ed4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2c7ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c7ed8: 0x52c3a  dsrl        $a1, $a1, 16
    ctx->pc = 0x2c7ed8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 16);
    // 0x2c7edc: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2c7edcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2c7ee0: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2c7ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2c7ee4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2c7ee4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c7ee8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c7ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2c7eec: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2c7eecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c7ef0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c7ef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c7ef4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C7EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7EF4u;
        // 0x2c7ef8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C7EF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C7EFCu;
    // 0x2c7efc: 0x0  nop
    ctx->pc = 0x2c7efcu;
    // NOP
    ctx->pc = 0x2c7f00u;
}
