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

// Function: sfmpv_SearchDelim
// Address: 0x3511f8 - 0x351350
void sfmpv_SearchDelim_0x3511f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sfmpv_SearchDelim_0x3511f8");
#endif

    switch (ctx->pc) {
        case 0x35123cu: goto label_35123c;
        case 0x351250u: goto label_351250;
        case 0x3512a8u: goto label_3512a8;
        case 0x3512c0u: goto label_3512c0;
        case 0x3512d0u: goto label_3512d0;
        case 0x3512d8u: goto label_3512d8;
        case 0x351308u: goto label_351308;
        case 0x35131cu: goto label_35131c;
        default: break;
    }

    ctx->pc = 0x3511f8u;

    // 0x3511f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3511f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3511fc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x3511fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x351200: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x351200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x351204: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x351204u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351208: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x351208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x35120c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x35120cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351210: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x351210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x351214: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x351214u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351218: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x351218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x35121c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x35121cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351220: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x351220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x351224: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x351224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x351228: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x351228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x35122c: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x35122cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x351230: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x351230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x351234: 0xc0da4dc  jal         func_369370
    ctx->pc = 0x351234u;
    SET_GPR_U32(ctx, 31, 0x35123Cu);
    ctx->pc = 0x351238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351234u;
    // 0x351238: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369370u, 0x351234u, 0x35123Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35123Cu;
label_35123c:
    // 0x35123c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x35123cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351240: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x351240u;
    {
        const bool branch_taken_0x351240 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x351240) {
            ctx->pc = 0x351244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x351240u;
            // 0x351244: 0x8e47000c  lw          $a3, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x351268u;
            goto label_351268;
        }
    }
    ctx->pc = 0x351248u;
    // 0x351248: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x351248u;
    {
        const bool branch_taken_0x351248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x351248) {
            ctx->pc = 0x351314u;
            goto label_351314;
        }
    }
    ctx->pc = 0x351250u;
label_351250:
    // 0x351250: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x351250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x351254: 0xaec60000  sw          $a2, 0x0($s6)
    ctx->pc = 0x351254u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 6));
    // 0x351258: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x351258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35125c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x35125cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x351260: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x351260u;
    {
        const bool branch_taken_0x351260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x351264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351260u;
        // 0x351264: 0x541021  addu        $v0, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351260) {
            ctx->pc = 0x351324u;
            goto label_351324;
        }
    }
    ctx->pc = 0x351268u;
label_351268:
    // 0x351268: 0x10e0002e  beqz        $a3, . + 4 + (0x2E << 2)
    ctx->pc = 0x351268u;
    {
        const bool branch_taken_0x351268 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x35126Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351268u;
        // 0x35126c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351268) {
            ctx->pc = 0x351324u;
            goto label_351324;
        }
    }
    ctx->pc = 0x351270u;
    // 0x351270: 0x8e530004  lw          $s3, 0x4($s2)
    ctx->pc = 0x351270u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x351274: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x351274u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x351278: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x351278u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35127c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x35127cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351280: 0x2a620004  slti        $v0, $s3, 0x4
    ctx->pc = 0x351280u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x351284: 0x62980a  movz        $s3, $v1, $v0
    ctx->pc = 0x351284u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
    // 0x351288: 0x28e20004  slti        $v0, $a3, 0x4
    ctx->pc = 0x351288u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x35128c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x35128cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x351290: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x351290u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351294: 0xe2800b  movn        $s0, $a3, $v0
    ctx->pc = 0x351294u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 7));
    // 0x351298: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x351298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35129c: 0xb32823  subu        $a1, $a1, $s3
    ctx->pc = 0x35129cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x3512a0: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x3512A0u;
    SET_GPR_U32(ctx, 31, 0x3512A8u);
    ctx->pc = 0x3512A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3512A0u;
    // 0x3512a4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x3512A0u, 0x3512A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3512A8u;
label_3512a8:
    // 0x3512a8: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x3512a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3512ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3512acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3512b0: 0x2708021  addu        $s0, $s3, $s0
    ctx->pc = 0x3512b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x3512b4: 0x3b32021  addu        $a0, $sp, $s3
    ctx->pc = 0x3512b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 19)));
    // 0x3512b8: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x3512B8u;
    SET_GPR_U32(ctx, 31, 0x3512C0u);
    ctx->pc = 0x3512BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3512B8u;
    // 0x3512bc: 0x2610fffd  addiu       $s0, $s0, -0x3 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967293));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x3512B8u, 0x3512C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3512C0u;
label_3512c0:
    // 0x3512c0: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x3512c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x3512c4: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x3512C4u;
    {
        const bool branch_taken_0x3512c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3512c4) {
            ctx->pc = 0x3512C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3512C4u;
            // 0x3512c8: 0x8e45000c  lw          $a1, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3512FCu;
            goto label_3512fc;
        }
    }
    ctx->pc = 0x3512CCu;
    // 0x3512cc: 0x0  nop
    ctx->pc = 0x3512ccu;
    // NOP
label_3512d0:
    // 0x3512d0: 0xc0da476  jal         func_3691D8
    ctx->pc = 0x3512D0u;
    SET_GPR_U32(ctx, 31, 0x3512D8u);
    ctx->pc = 0x3512D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3512D0u;
    // 0x3512d4: 0x3b42021  addu        $a0, $sp, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3691D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3691D8u, 0x3512D0u, 0x3512D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3512D8u;
label_3512d8:
    // 0x3512d8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3512d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3512dc: 0xd51024  and         $v0, $a2, $s5
    ctx->pc = 0x3512dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 21));
    // 0x3512e0: 0x5440ffdb  bnel        $v0, $zero, . + 4 + (-0x25 << 2)
    ctx->pc = 0x3512E0u;
    {
        const bool branch_taken_0x3512e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3512e0) {
            ctx->pc = 0x3512E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3512E0u;
            // 0x3512e4: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x351250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_351250;
        }
    }
    ctx->pc = 0x3512E8u;
    // 0x3512e8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3512e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x3512ec: 0x290102a  slt         $v0, $s4, $s0
    ctx->pc = 0x3512ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x3512f0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3512F0u;
    {
        const bool branch_taken_0x3512f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3512f0) {
            ctx->pc = 0x3512D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3512d0;
        }
    }
    ctx->pc = 0x3512F8u;
    // 0x3512f8: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x3512f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_3512fc:
    // 0x3512fc: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3512fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351300: 0xc0da4dc  jal         func_369370
    ctx->pc = 0x351300u;
    SET_GPR_U32(ctx, 31, 0x351308u);
    ctx->pc = 0x351304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351300u;
    // 0x351304: 0x8e440008  lw          $a0, 0x8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369370u, 0x351300u, 0x351308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351308u;
label_351308:
    // 0x351308: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x351308u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35130c: 0x52200006  beql        $s1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x35130Cu;
    {
        const bool branch_taken_0x35130c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x35130c) {
            ctx->pc = 0x351310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35130Cu;
            // 0x351310: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x351328u;
            goto label_351328;
        }
    }
    ctx->pc = 0x351314u;
label_351314:
    // 0x351314: 0xc0da476  jal         func_3691D8
    ctx->pc = 0x351314u;
    SET_GPR_U32(ctx, 31, 0x35131Cu);
    ctx->pc = 0x351318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351314u;
    // 0x351318: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3691D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3691D8u, 0x351314u, 0x35131Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35131Cu;
label_35131c:
    // 0x35131c: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x35131cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x351320: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x351320u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_351324:
    // 0x351324: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x351324u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_351328:
    // 0x351328: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x351328u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35132c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x35132cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x351330: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x351330u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x351334: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x351334u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x351338: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x351338u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35133c: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x35133cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x351340: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x351340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x351344: 0x3e00008  jr          $ra
    ctx->pc = 0x351344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x351348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351344u;
        // 0x351348: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35134Cu;
    // 0x35134c: 0x0  nop
    ctx->pc = 0x35134cu;
    // NOP
    ctx->pc = 0x351350u;
}
