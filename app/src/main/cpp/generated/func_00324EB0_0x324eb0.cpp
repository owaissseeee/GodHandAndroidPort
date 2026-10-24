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

// Function: func_00324EB0
// Address: 0x324eb0 - 0x324f08
void func_00324EB0_0x324eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00324EB0_0x324eb0");
#endif

    switch (ctx->pc) {
        case 0x324ed8u: goto label_324ed8;
        case 0x324ee0u: goto label_324ee0;
        default: break;
    }

    ctx->pc = 0x324eb0u;

    // 0x324eb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x324eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x324eb4: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x324eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x324eb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x324eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x324ebc: 0x24428158  addiu       $v0, $v0, -0x7EA8
    ctx->pc = 0x324ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934872));
    // 0x324ec0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x324ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x324ec4: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x324ec4u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x3C8158u));
    // 0x324ec8: 0x54600008  bnel        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x324EC8u;
    {
        const bool branch_taken_0x324ec8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x324ec8) {
            ctx->pc = 0x324ECCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x324EC8u;
            // 0x324ecc: 0x3c02003d  lui         $v0, 0x3D (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x324EECu;
            goto label_324eec;
        }
    }
    ctx->pc = 0x324ED0u;
    // 0x324ed0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x324ed0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324ed4: 0x0  nop
    ctx->pc = 0x324ed4u;
    // NOP
label_324ed8:
    // 0x324ed8: 0xc0c93a6  jal         func_324E98
    ctx->pc = 0x324ED8u;
    SET_GPR_U32(ctx, 31, 0x324EE0u);
    ctx->pc = 0x324E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324E98u, 0x324ED8u, 0x324EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324EE0u;
label_324ee0:
    // 0x324ee0: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x324ee0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x324ee4: 0x1040fffc  beqz        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x324EE4u;
    {
        const bool branch_taken_0x324ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x324EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324EE4u;
        // 0x324ee8: 0x3c02003d  lui         $v0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324ee4) {
            ctx->pc = 0x324ED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_324ed8;
        }
    }
    ctx->pc = 0x324EECu;
label_324eec:
    // 0x324eec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x324eecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x324ef0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x324ef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x324ef4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x324ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x324ef8: 0x24428160  addiu       $v0, $v0, -0x7EA0
    ctx->pc = 0x324ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934880));
    // 0x324efc: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x324efcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x324f00: 0x80ebeb8  j           func_3AFAE0
    ctx->pc = 0x324F00u;
    ctx->pc = 0x324F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324F00u;
    // 0x324f04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFAE0u, 0x324F00u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x324F08u;
}
