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

// Function: func_00178268
// Address: 0x178268 - 0x1782b8
void func_00178268_0x178268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00178268_0x178268");
#endif

    switch (ctx->pc) {
        case 0x17828cu: goto label_17828c;
        case 0x1782a4u: goto label_1782a4;
        default: break;
    }

    ctx->pc = 0x178268u;

    // 0x178268: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x178268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17826c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x17826cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x178270: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x178270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x178274: 0x8c6258e8  lw          $v0, 0x58E8($v1)
    ctx->pc = 0x178274u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7858E8u));
    // 0x178278: 0x247058e8  addiu       $s0, $v1, 0x58E8
    ctx->pc = 0x178278u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 22760));
    // 0x17827c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17827Cu;
    {
        const bool branch_taken_0x17827c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x178280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17827Cu;
        // 0x178280: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17827c) {
            ctx->pc = 0x1782A4u;
            goto label_1782a4;
        }
    }
    ctx->pc = 0x178284u;
    // 0x178284: 0xc06e016  jal         func_1B8058
    ctx->pc = 0x178284u;
    SET_GPR_U32(ctx, 31, 0x17828Cu);
    ctx->pc = 0x1B8058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8058u, 0x178284u, 0x17828Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17828Cu;
label_17828c:
    // 0x17828c: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x17828cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x178290: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x178290u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x178294: 0x24a51398  addiu       $a1, $a1, 0x1398
    ctx->pc = 0x178294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5016));
    // 0x178298: 0x24c65878  addiu       $a2, $a2, 0x5878
    ctx->pc = 0x178298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22648));
    // 0x17829c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x17829Cu;
    SET_GPR_U32(ctx, 31, 0x1782A4u);
    ctx->pc = 0x1782A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17829Cu;
    // 0x1782a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x17829Cu, 0x1782A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1782A4u;
label_1782a4:
    // 0x1782a4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1782a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1782a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1782a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1782ac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1782acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1782b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1782B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1782B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1782B0u;
        // 0x1782b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1782B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1782B8u;
}
