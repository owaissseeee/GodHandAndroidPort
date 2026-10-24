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

// Function: scePadSetActDirect
// Address: 0x398128 - 0x3981f0
void scePadSetActDirect_0x398128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scePadSetActDirect_0x398128");
#endif

    switch (ctx->pc) {
        case 0x398150u: goto label_398150;
        case 0x398190u: goto label_398190;
        case 0x3981ccu: goto label_3981cc;
        default: break;
    }

    ctx->pc = 0x398128u;

    // 0x398128: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x398128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x39812c: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x39812cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x398130: 0xffb10090  sd          $s1, 0x90($sp)
    ctx->pc = 0x398130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 17));
    // 0x398134: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x398134u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398138: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x398138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x39813c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x39813cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398140: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x398140u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398144: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x398144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x398148: 0xc0e5ef2  jal         func_397BC8
    ctx->pc = 0x398148u;
    SET_GPR_U32(ctx, 31, 0x398150u);
    ctx->pc = 0x39814Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398148u;
    // 0x39814c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397BC8u, 0x398148u, 0x398150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398150u;
label_398150:
    // 0x398150: 0x93a30072  lbu         $v1, 0x72($sp)
    ctx->pc = 0x398150u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 114)));
    // 0x398154: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x398154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x398158: 0x1462001f  bne         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x398158u;
    {
        const bool branch_taken_0x398158 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x39815Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398158u;
        // 0x39815c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398158) {
            ctx->pc = 0x3981D8u;
            goto label_3981d8;
        }
    }
    ctx->pc = 0x398160u;
    // 0x398160: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x398160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x398164: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x398164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x398168: 0x2431818  mult        $v1, $s2, $v1
    ctx->pc = 0x398168u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x39816c: 0x72242018  mult1       $a0, $s1, $a0
    ctx->pc = 0x39816cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x398170: 0x3c020078  lui         $v0, 0x78
    ctx->pc = 0x398170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)120 << 16));
    // 0x398174: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x398174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398178: 0x2442c110  addiu       $v0, $v0, -0x3EF0
    ctx->pc = 0x398178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951184));
    // 0x39817c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x39817cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x398180: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x398180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x398184: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x398184u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x398188: 0x24c7000c  addiu       $a3, $a2, 0xC
    ctx->pc = 0x398188u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x39818c: 0x0  nop
    ctx->pc = 0x39818cu;
    // NOP
label_398190:
    // 0x398190: 0x2051021  addu        $v0, $s0, $a1
    ctx->pc = 0x398190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x398194: 0xe52021  addu        $a0, $a3, $a1
    ctx->pc = 0x398194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x398198: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x398198u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x39819c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x39819cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3981a0: 0x28a20006  slti        $v0, $a1, 0x6
    ctx->pc = 0x3981a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x3981a4: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x3981a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3981a8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3981A8u;
    {
        const bool branch_taken_0x3981a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3981a8) {
            ctx->pc = 0x398190u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_398190;
        }
    }
    ctx->pc = 0x3981B0u;
    // 0x3981b0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x3981b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3981b4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x3981b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3981b8: 0xacd00004  sw          $s0, 0x4($a2)
    ctx->pc = 0x3981b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 16));
    // 0x3981bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3981bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3981c0: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x3981c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x3981c4: 0xc0e5e32  jal         func_3978C8
    ctx->pc = 0x3981C4u;
    SET_GPR_U32(ctx, 31, 0x3981CCu);
    ctx->pc = 0x3981C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3981C4u;
    // 0x3981c8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3978C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3978C8u, 0x3981C4u, 0x3981CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3981CCu;
label_3981cc:
    // 0x3981cc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3981ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x3981d0: 0x2800b  movn        $s0, $zero, $v0
    ctx->pc = 0x3981d0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x3981d4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3981d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3981d8:
    // 0x3981d8: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x3981d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3981dc: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x3981dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3981e0: 0xdfb10090  ld          $s1, 0x90($sp)
    ctx->pc = 0x3981e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3981e4: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x3981e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3981e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3981E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3981ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3981E8u;
        // 0x3981ec: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3981E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3981F0u;
}
