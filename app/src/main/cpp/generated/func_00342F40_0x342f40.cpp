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

// Function: func_00342F40
// Address: 0x342f40 - 0x342f98
void func_00342F40_0x342f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00342F40_0x342f40");
#endif

    switch (ctx->pc) {
        case 0x342f60u: goto label_342f60;
        case 0x342f6cu: goto label_342f6c;
        default: break;
    }

    ctx->pc = 0x342f40u;

    // 0x342f40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x342f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x342f44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x342f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x342f48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x342f48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342f4c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x342f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x342f50: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x342f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x342f54: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x342f54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x342f58: 0xc0d1b04  jal         func_346C10
    ctx->pc = 0x342F58u;
    SET_GPR_U32(ctx, 31, 0x342F60u);
    ctx->pc = 0x342F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342F58u;
    // 0x342f5c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346C10u, 0x342F58u, 0x342F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342F60u;
label_342f60:
    // 0x342f60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x342f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342f64: 0xc0d1cba  jal         func_3472E8
    ctx->pc = 0x342F64u;
    SET_GPR_U32(ctx, 31, 0x342F6Cu);
    ctx->pc = 0x342F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342F64u;
    // 0x342f68: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3472E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3472E8u, 0x342F64u, 0x342F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342F6Cu;
label_342f6c:
    // 0x342f6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x342f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x342f70: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x342f70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x342f74: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x342f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x342f78: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x342f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x342f7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x342f7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x342f80: 0x82880a  movz        $s1, $a0, $v0
    ctx->pc = 0x342f80u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 4));
    // 0x342f84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x342f84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x342f88: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x342f88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342f8c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x342f8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x342f90: 0x3e00008  jr          $ra
    ctx->pc = 0x342F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342F90u;
        // 0x342f94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342F90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342F98u;
}
