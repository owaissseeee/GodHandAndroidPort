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

// Function: func_00354128
// Address: 0x354128 - 0x354210
void func_00354128_0x354128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00354128_0x354128");
#endif

    switch (ctx->pc) {
        case 0x354184u: goto label_354184;
        case 0x3541c8u: goto label_3541c8;
        default: break;
    }

    ctx->pc = 0x354128u;

    // 0x354128: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x354128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35412c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x35412cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354130: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x354130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x354134: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x354134u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354138: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x354138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35413c: 0x24710d30  addiu       $s1, $v1, 0xD30
    ctx->pc = 0x35413cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 3376));
    // 0x354140: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x354140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x354144: 0x2605000c  addiu       $a1, $s0, 0xC
    ctx->pc = 0x354144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x354148: 0x8ca20028  lw          $v0, 0x28($a1)
    ctx->pc = 0x354148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x35414c: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x35414cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x354150: 0x8c660e6c  lw          $a2, 0xE6C($v1)
    ctx->pc = 0x354150u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3692)));
    // 0x354154: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x354154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x354158: 0x8e230164  lw          $v1, 0x164($s1)
    ctx->pc = 0x354158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 356)));
    // 0x35415c: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x35415cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x354160: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x354160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x354164: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x354164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x354168: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x354168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x35416c: 0xae03004c  sw          $v1, 0x4C($s0)
    ctx->pc = 0x35416cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
    // 0x354170: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x354170u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354174: 0x8e230164  lw          $v1, 0x164($s1)
    ctx->pc = 0x354174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 356)));
    // 0x354178: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x354178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35417c: 0xc0d58d6  jal         func_356358
    ctx->pc = 0x35417Cu;
    SET_GPR_U32(ctx, 31, 0x354184u);
    ctx->pc = 0x354180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35417Cu;
    // 0x354180: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x356358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356358u, 0x35417Cu, 0x354184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354184u;
label_354184:
    // 0x354184: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x354184u;
    {
        const bool branch_taken_0x354184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x354184) {
            ctx->pc = 0x354188u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x354184u;
            // 0x354188: 0x8e030038  lw          $v1, 0x38($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3541E0u;
            goto label_3541e0;
        }
    }
    ctx->pc = 0x35418Cu;
    // 0x35418c: 0x8e250160  lw          $a1, 0x160($s1)
    ctx->pc = 0x35418cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x354190: 0x8e0300e8  lw          $v1, 0xE8($s0)
    ctx->pc = 0x354190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x354194: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x354194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x354198: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x354198u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x35419c: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x35419cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x3541a0: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x3541a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x3541a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3541a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3541a8: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x3541a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3541ac: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x3541acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x3541b0: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x3541b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3541b4: 0x8cc69920  lw          $a2, -0x66E0($a2)
    ctx->pc = 0x3541b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294940960)));
    // 0x3541b8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x3541b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3541bc: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x3541bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3541c0: 0xc0db248  jal         func_36C920
    ctx->pc = 0x3541C0u;
    SET_GPR_U32(ctx, 31, 0x3541C8u);
    ctx->pc = 0x3541C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3541C0u;
    // 0x3541c4: 0x528c0  sll         $a1, $a1, 3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C920u, 0x3541C0u, 0x3541C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3541C8u;
label_3541c8:
    // 0x3541c8: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x3541c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
    // 0x3541cc: 0x8e230164  lw          $v1, 0x164($s1)
    ctx->pc = 0x3541ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 356)));
    // 0x3541d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3541d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3541d4: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x3541d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x3541d8: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x3541d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x3541dc: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x3541dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_3541e0:
    // 0x3541e0: 0x8e220284  lw          $v0, 0x284($s1)
    ctx->pc = 0x3541e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 644)));
    // 0x3541e4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x3541e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3541e8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3541E8u;
    {
        const bool branch_taken_0x3541e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3541e8) {
            ctx->pc = 0x3541ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3541E8u;
            // 0x3541ec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x354200u;
            goto label_354200;
        }
    }
    ctx->pc = 0x3541F0u;
    // 0x3541f0: 0xae230284  sw          $v1, 0x284($s1)
    ctx->pc = 0x3541f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 644), GPR_U32(ctx, 3));
    // 0x3541f4: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x3541f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x3541f8: 0xae220288  sw          $v0, 0x288($s1)
    ctx->pc = 0x3541f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 648), GPR_U32(ctx, 2));
    // 0x3541fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3541fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_354200:
    // 0x354200: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x354200u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x354204: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x354204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x354208: 0x3e00008  jr          $ra
    ctx->pc = 0x354208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35420Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354208u;
        // 0x35420c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x354210u;
}
