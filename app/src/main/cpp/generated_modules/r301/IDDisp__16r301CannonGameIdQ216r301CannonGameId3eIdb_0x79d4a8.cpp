#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r301_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r301
{
// Function: IDDisp__16r301CannonGameIdQ216r301CannonGameId3eIdb
// Address: 0x79d4a8 - 0x79d528
void IDDisp__16r301CannonGameIdQ216r301CannonGameId3eIdb_0x79d4a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IDDisp__16r301CannonGameIdQ216r301CannonGameId3eIdb_0x79d4a8");
#endif

    switch (ctx->pc) {
        case 0x79d4d8u: goto label_79d4d8;
        case 0x79d4e4u: goto label_79d4e4;
        case 0x79d510u: goto label_79d510;
        default: break;
    }

    ctx->pc = 0x79d4a8u;

    // 0x79d4a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x79d4a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x79d4ac: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x79d4acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79d4b0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x79d4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x79d4b4: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x79d4b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79d4b8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x79d4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x79d4bc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x79d4bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79d4c0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x79d4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x79d4c4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x79d4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x79d4c8: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x79D4C8u;
    {
        const bool branch_taken_0x79d4c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x79D4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D4C8u;
        // 0x79d4cc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d4c8) {
            ctx->pc = 0x79D4F8u;
            goto label_79d4f8;
        }
    }
    ctx->pc = 0x79D4D0u;
    // 0x79d4d0: 0x24f00060  addiu       $s0, $a3, 0x60
    ctx->pc = 0x79d4d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 96));
    // 0x79d4d4: 0x24110005  addiu       $s1, $zero, 0x5
    ctx->pc = 0x79d4d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_79d4d8:
    // 0x79d4d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79d4d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79d4dc: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x79D4DCu;
    SET_GPR_U32(ctx, 31, 0x79D4E4u);
    ctx->pc = 0x79D4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79D4DCu;
    // 0x79d4e0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x79D4DCu, 0x79D4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79D4E4u;
label_79d4e4:
    // 0x79d4e4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x79d4e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x79d4e8: 0x621fffb  bgez        $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x79D4E8u;
    {
        const bool branch_taken_0x79d4e8 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x79D4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D4E8u;
        // 0x79d4ec: 0x2610007c  addiu       $s0, $s0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d4e8) {
            ctx->pc = 0x79D4D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79d4d8;
        }
    }
    ctx->pc = 0x79D4F0u;
    // 0x79d4f0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x79D4F0u;
    {
        const bool branch_taken_0x79d4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79D4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D4F0u;
        // 0x79d4f4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d4f0) {
            ctx->pc = 0x79D514u;
            goto label_79d514;
        }
    }
    ctx->pc = 0x79D4F8u;
label_79d4f8:
    // 0x79d4f8: 0x2404007c  addiu       $a0, $zero, 0x7C
    ctx->pc = 0x79d4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x79d4fc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x79d4fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79d500: 0x642018  mult        $a0, $v1, $a0
    ctx->pc = 0x79d500u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x79d504: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x79d504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x79d508: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x79D508u;
    SET_GPR_U32(ctx, 31, 0x79D510u);
    ctx->pc = 0x79D50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79D508u;
    // 0x79d50c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x79D508u, 0x79D510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79D510u;
label_79d510:
    // 0x79d510: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x79d510u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_79d514:
    // 0x79d514: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x79d514u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79d518: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x79d518u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79d51c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79d51cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79d520: 0x3e00008  jr          $ra
    ctx->pc = 0x79D520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79D524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D520u;
        // 0x79d524: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79D520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79D528u;
}
} // namespace gh_r301
