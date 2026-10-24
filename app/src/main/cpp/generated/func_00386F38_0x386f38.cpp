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

// Function: func_00386F38
// Address: 0x386f38 - 0x386fa0
void func_00386F38_0x386f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00386F38_0x386f38");
#endif

    switch (ctx->pc) {
        case 0x386f70u: goto label_386f70;
        default: break;
    }

    ctx->pc = 0x386f38u;

    // 0x386f38: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x386f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x386f3c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x386f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x386f40: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x386f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x386f44: 0x58400  sll         $s0, $a1, 16
    ctx->pc = 0x386f44u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x386f48: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x386f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x386f4c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x386f4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386f50: 0x49400  sll         $s2, $a0, 16
    ctx->pc = 0x386f50u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x386f54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x386f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x386f58: 0x129403  sra         $s2, $s2, 16
    ctx->pc = 0x386f58u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 18), 16));
    // 0x386f5c: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x386f5cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x386f60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x386f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386f64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x386f64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386f68: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x386F68u;
    SET_GPR_U32(ctx, 31, 0x386F70u);
    ctx->pc = 0x386F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386F68u;
    // 0x386f6c: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x386F68u, 0x386F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386F70u;
label_386f70:
    // 0x386f70: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x386f70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x386f74: 0xa6300002  sh          $s0, 0x2($s1)
    ctx->pc = 0x386f74u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 16));
    // 0x386f78: 0xa6320000  sh          $s2, 0x0($s1)
    ctx->pc = 0x386f78u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 18));
    // 0x386f7c: 0xa623000e  sh          $v1, 0xE($s1)
    ctx->pc = 0x386f7cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x386f80: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x386f80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x386f84: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x386f84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x386f88: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x386f88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x386f8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x386f8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x386f90: 0x3e00008  jr          $ra
    ctx->pc = 0x386F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x386F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386F90u;
        // 0x386f94: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x386F90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x386F98u;
    // 0x386f98: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x386f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x386f9c: 0x0  nop
    ctx->pc = 0x386f9cu;
    // NOP
    ctx->pc = 0x386fa0u;
}
