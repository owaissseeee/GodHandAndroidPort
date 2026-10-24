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

// Function: func_0012C348
// Address: 0x12c348 - 0x12c418
void func_0012C348_0x12c348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0012C348_0x12c348");
#endif

    switch (ctx->pc) {
        case 0x12c3e4u: goto label_12c3e4;
        case 0x12c40cu: goto label_12c40c;
        default: break;
    }

    ctx->pc = 0x12c348u;

    // 0x12c348: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x12c348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x12c34c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12c34cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12c350: 0x8c437a2c  lw          $v1, 0x7A2C($v0)
    ctx->pc = 0x12c350u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A2Cu));
    // 0x12c354: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x12c354u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
    // 0x12c358: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x12c358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x12c35c: 0x1460002b  bnez        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x12C35Cu;
    {
        const bool branch_taken_0x12c35c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C35Cu;
        // 0x12c360: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c35c) {
            ctx->pc = 0x12C40Cu;
            goto label_12c40c;
        }
    }
    ctx->pc = 0x12C364u;
    // 0x12c364: 0x2ca20005  sltiu       $v0, $a1, 0x5
    ctx->pc = 0x12c364u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x12c368: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12C368u;
    {
        const bool branch_taken_0x12c368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C368u;
        // 0x12c36c: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c368) {
            ctx->pc = 0x12C388u;
            goto label_12c388;
        }
    }
    ctx->pc = 0x12C370u;
    // 0x12c370: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x12c370u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x12c374: 0x2442d1e0  addiu       $v0, $v0, -0x2E20
    ctx->pc = 0x12c374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955488));
    // 0x12c378: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12c378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12c37c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x12c37cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12c380: 0x800008  jr          $a0
    ctx->pc = 0x12C380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12C388u: goto label_12c388;
            case 0x12C39Cu: goto label_12c39c;
            case 0x12C3B0u: goto label_12c3b0;
            case 0x12C3C4u: goto label_12c3c4;
            case 0x12C3ECu: goto label_12c3ec;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C380u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x12C388u;
label_12c388:
    // 0x12c388: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x12c388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x12c38c: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x12c38cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x12c390: 0x8c437a04  lw          $v1, 0x7A04($v0)
    ctx->pc = 0x12c390u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A04u));
    // 0x12c394: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x12C394u;
    {
        const bool branch_taken_0x12c394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C394u;
        // 0x12c398: 0x3c060004  lui         $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c394) {
            ctx->pc = 0x12C3D4u;
            goto label_12c3d4;
        }
    }
    ctx->pc = 0x12C39Cu;
label_12c39c:
    // 0x12c39c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x12c39cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x12c3a0: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x12c3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x12c3a4: 0x8c437a04  lw          $v1, 0x7A04($v0)
    ctx->pc = 0x12c3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A04u));
    // 0x12c3a8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x12C3A8u;
    {
        const bool branch_taken_0x12c3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C3A8u;
        // 0x12c3ac: 0x3c060006  lui         $a2, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)6 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c3a8) {
            ctx->pc = 0x12C3D4u;
            goto label_12c3d4;
        }
    }
    ctx->pc = 0x12C3B0u;
label_12c3b0:
    // 0x12c3b0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x12c3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x12c3b4: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x12c3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x12c3b8: 0x8c437a04  lw          $v1, 0x7A04($v0)
    ctx->pc = 0x12c3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A04u));
    // 0x12c3bc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x12C3BCu;
    {
        const bool branch_taken_0x12c3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C3BCu;
        // 0x12c3c0: 0x3c06000a  lui         $a2, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)10 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c3bc) {
            ctx->pc = 0x12C3D4u;
            goto label_12c3d4;
        }
    }
    ctx->pc = 0x12C3C4u;
label_12c3c4:
    // 0x12c3c4: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x12c3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x12c3c8: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x12c3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x12c3cc: 0x8c437a04  lw          $v1, 0x7A04($v0)
    ctx->pc = 0x12c3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A04u));
    // 0x12c3d0: 0x3c06000e  lui         $a2, 0xE
    ctx->pc = 0x12c3d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)14 << 16));
label_12c3d4:
    // 0x12c3d4: 0x24848140  addiu       $a0, $a0, -0x7EC0
    ctx->pc = 0x12c3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934848));
    // 0x12c3d8: 0x3c0503ff  lui         $a1, 0x3FF
    ctx->pc = 0x12c3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1023 << 16));
    // 0x12c3dc: 0xc0c6ec2  jal         func_31BB08
    ctx->pc = 0x12C3DCu;
    SET_GPR_U32(ctx, 31, 0x12C3E4u);
    ctx->pc = 0x12C3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C3DCu;
    // 0x12c3e0: 0x663004  sllv        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31BB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31BB08u, 0x12C3DCu, 0x12C3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C3E4u;
label_12c3e4:
    // 0x12c3e4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x12C3E4u;
    {
        const bool branch_taken_0x12c3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C3E4u;
        // 0x12c3e8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c3e4) {
            ctx->pc = 0x12C410u;
            goto label_12c410;
        }
    }
    ctx->pc = 0x12C3ECu;
label_12c3ec:
    // 0x12c3ec: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x12c3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x12c3f0: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x12c3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x12c3f4: 0x8c437a04  lw          $v1, 0x7A04($v0)
    ctx->pc = 0x12c3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A04u));
    // 0x12c3f8: 0x3c060002  lui         $a2, 0x2
    ctx->pc = 0x12c3f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2 << 16));
    // 0x12c3fc: 0x24848140  addiu       $a0, $a0, -0x7EC0
    ctx->pc = 0x12c3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934848));
    // 0x12c400: 0x3c050328  lui         $a1, 0x328
    ctx->pc = 0x12c400u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)808 << 16));
    // 0x12c404: 0xc0c6ec2  jal         func_31BB08
    ctx->pc = 0x12C404u;
    SET_GPR_U32(ctx, 31, 0x12C40Cu);
    ctx->pc = 0x12C408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C404u;
    // 0x12c408: 0x663004  sllv        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31BB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31BB08u, 0x12C404u, 0x12C40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C40Cu;
label_12c40c:
    // 0x12c40c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12c40cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12c410:
    // 0x12c410: 0x3e00008  jr          $ra
    ctx->pc = 0x12C410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C410u;
        // 0x12c414: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C418u;
}
