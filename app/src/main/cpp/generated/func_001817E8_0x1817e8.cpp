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

// Function: func_001817E8
// Address: 0x1817e8 - 0x181838
void func_001817E8_0x1817e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001817E8_0x1817e8");
#endif

    switch (ctx->pc) {
        case 0x18180cu: goto label_18180c;
        case 0x181824u: goto label_181824;
        default: break;
    }

    ctx->pc = 0x1817e8u;

    // 0x1817e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1817e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1817ec: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x1817ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x1817f0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1817f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1817f4: 0x8c625a68  lw          $v0, 0x5A68($v1)
    ctx->pc = 0x1817f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785A68u));
    // 0x1817f8: 0x24705a68  addiu       $s0, $v1, 0x5A68
    ctx->pc = 0x1817f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 23144));
    // 0x1817fc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1817FCu;
    {
        const bool branch_taken_0x1817fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x181800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1817FCu;
        // 0x181800: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1817fc) {
            ctx->pc = 0x181824u;
            goto label_181824;
        }
    }
    ctx->pc = 0x181804u;
    // 0x181804: 0xc06f54a  jal         func_1BD528
    ctx->pc = 0x181804u;
    SET_GPR_U32(ctx, 31, 0x18180Cu);
    ctx->pc = 0x1BD528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD528u, 0x181804u, 0x18180Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18180Cu;
label_18180c:
    // 0x18180c: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x18180cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x181810: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x181810u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x181814: 0x24a52820  addiu       $a1, $a1, 0x2820
    ctx->pc = 0x181814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10272));
    // 0x181818: 0x24c659b8  addiu       $a2, $a2, 0x59B8
    ctx->pc = 0x181818u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22968));
    // 0x18181c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x18181Cu;
    SET_GPR_U32(ctx, 31, 0x181824u);
    ctx->pc = 0x181820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18181Cu;
    // 0x181820: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x18181Cu, 0x181824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181824u;
label_181824:
    // 0x181824: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x181824u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181828: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x181828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18182c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18182cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181830: 0x3e00008  jr          $ra
    ctx->pc = 0x181830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181830u;
        // 0x181834: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181838u;
}
