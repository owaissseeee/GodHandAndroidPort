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

// Function: cEmWrap_CkActive
// Address: 0x295f28 - 0x295f80
void cEmWrap_CkActive_0x295f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEmWrap_CkActive_0x295f28");
#endif

    switch (ctx->pc) {
        case 0x295f3cu: goto label_295f3c;
        case 0x295f54u: goto label_295f54;
        case 0x295f6cu: goto label_295f6c;
        default: break;
    }

    ctx->pc = 0x295f28u;

    // 0x295f28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x295f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x295f2c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x295f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x295f30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x295f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x295f34: 0xc0a565e  jal         func_295978
    ctx->pc = 0x295F34u;
    SET_GPR_U32(ctx, 31, 0x295F3Cu);
    ctx->pc = 0x295F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295F34u;
    // 0x295f38: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295978u, 0x295F34u, 0x295F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295F3Cu;
label_295f3c:
    // 0x295f3c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x295F3Cu;
    {
        const bool branch_taken_0x295f3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x295F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295F3Cu;
        // 0x295f40: 0x3c040045  lui         $a0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295f3c) {
            ctx->pc = 0x295F5Cu;
            goto label_295f5c;
        }
    }
    ctx->pc = 0x295F44u;
    // 0x295f44: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x295f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x295f48: 0x2484a870  addiu       $a0, $a0, -0x5790
    ctx->pc = 0x295f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944880));
    // 0x295f4c: 0xc0e959e  jal         func_3A5678
    ctx->pc = 0x295F4Cu;
    SET_GPR_U32(ctx, 31, 0x295F54u);
    ctx->pc = 0x295F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295F4Cu;
    // 0x295f50: 0x8c4504ac  lw          $a1, 0x4AC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5678u, 0x295F4Cu, 0x295F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295F54u;
label_295f54:
    // 0x295f54: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x295F54u;
    {
        const bool branch_taken_0x295f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x295f54) {
            ctx->pc = 0x295F64u;
            goto label_295f64;
        }
    }
    ctx->pc = 0x295F5Cu;
label_295f5c:
    // 0x295f5c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x295F5Cu;
    {
        const bool branch_taken_0x295f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295F5Cu;
        // 0x295f60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295f5c) {
            ctx->pc = 0x295F6Cu;
            goto label_295f6c;
        }
    }
    ctx->pc = 0x295F64u;
label_295f64:
    // 0x295f64: 0xc09bb30  jal         func_26ECC0
    ctx->pc = 0x295F64u;
    SET_GPR_U32(ctx, 31, 0x295F6Cu);
    ctx->pc = 0x295F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295F64u;
    // 0x295f68: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26ECC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26ECC0u, 0x295F64u, 0x295F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295F6Cu;
label_295f6c:
    // 0x295f6c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x295f6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x295f70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x295f70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x295f74: 0x3e00008  jr          $ra
    ctx->pc = 0x295F74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295F74u;
        // 0x295f78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295F74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x295F7Cu;
    // 0x295f7c: 0x0  nop
    ctx->pc = 0x295f7cu;
    // NOP
    ctx->pc = 0x295f80u;
}
