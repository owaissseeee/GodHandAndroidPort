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

// Function: func_0018B240
// Address: 0x18b240 - 0x18b290
void func_0018B240_0x18b240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0018B240_0x18b240");
#endif

    switch (ctx->pc) {
        case 0x18b264u: goto label_18b264;
        case 0x18b27cu: goto label_18b27c;
        default: break;
    }

    ctx->pc = 0x18b240u;

    // 0x18b240: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18b240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18b244: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x18b244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x18b248: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18b248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x18b24c: 0x8c625b58  lw          $v0, 0x5B58($v1)
    ctx->pc = 0x18b24cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785B58u));
    // 0x18b250: 0x24705b58  addiu       $s0, $v1, 0x5B58
    ctx->pc = 0x18b250u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 23384));
    // 0x18b254: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x18B254u;
    {
        const bool branch_taken_0x18b254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B254u;
        // 0x18b258: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b254) {
            ctx->pc = 0x18B27Cu;
            goto label_18b27c;
        }
    }
    ctx->pc = 0x18B25Cu;
    // 0x18b25c: 0xc06e016  jal         func_1B8058
    ctx->pc = 0x18B25Cu;
    SET_GPR_U32(ctx, 31, 0x18B264u);
    ctx->pc = 0x1B8058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8058u, 0x18B25Cu, 0x18B264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B264u;
label_18b264:
    // 0x18b264: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x18b264u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x18b268: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x18b268u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x18b26c: 0x24a537b0  addiu       $a1, $a1, 0x37B0
    ctx->pc = 0x18b26cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14256));
    // 0x18b270: 0x24c65878  addiu       $a2, $a2, 0x5878
    ctx->pc = 0x18b270u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22648));
    // 0x18b274: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x18B274u;
    SET_GPR_U32(ctx, 31, 0x18B27Cu);
    ctx->pc = 0x18B278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B274u;
    // 0x18b278: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x18B274u, 0x18B27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B27Cu;
label_18b27c:
    // 0x18b27c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x18b27cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b280: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18b280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18b284: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18b284u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18b288: 0x3e00008  jr          $ra
    ctx->pc = 0x18B288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B288u;
        // 0x18b28c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B290u;
}
