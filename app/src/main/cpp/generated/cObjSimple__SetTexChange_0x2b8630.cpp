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

// Function: cObjSimple__SetTexChange
// Address: 0x2b8630 - 0x2b8820
void cObjSimple__SetTexChange_0x2b8630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cObjSimple__SetTexChange_0x2b8630");
#endif

    switch (ctx->pc) {
        case 0x2b8664u: goto label_2b8664;
        case 0x2b8698u: goto label_2b8698;
        case 0x2b86bcu: goto label_2b86bc;
        case 0x2b8808u: goto label_2b8808;
        default: break;
    }

    ctx->pc = 0x2b8630u;

    // 0x2b8630: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b8630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b8634: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2b8634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2b8638: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b8638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b863c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b863cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8640: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b8640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b8644: 0x920204d0  lbu         $v0, 0x4D0($s0)
    ctx->pc = 0x2b8644u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1232)));
    // 0x2b8648: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2B8648u;
    {
        const bool branch_taken_0x2b8648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B864Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8648u;
        // 0x2b864c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8648) {
            ctx->pc = 0x2B8684u;
            goto label_2b8684;
        }
    }
    ctx->pc = 0x2B8650u;
    // 0x2b8650: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2b8650u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2b8654: 0x8e040304  lw          $a0, 0x304($s0)
    ctx->pc = 0x2b8654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2b8658: 0x24a5b4a8  addiu       $a1, $a1, -0x4B58
    ctx->pc = 0x2b8658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948008));
    // 0x2b865c: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x2B865Cu;
    SET_GPR_U32(ctx, 31, 0x2B8664u);
    ctx->pc = 0x2B8660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B865Cu;
    // 0x2b8660: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x2B865Cu, 0x2B8664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8664u;
label_2b8664:
    // 0x2b8664: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b8664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8668: 0x54a00016  bnel        $a1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x2B8668u;
    {
        const bool branch_taken_0x2b8668 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b8668) {
            ctx->pc = 0x2B866Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8668u;
            // 0x2b866c: 0x960202fe  lhu         $v0, 0x2FE($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B86C4u;
            goto label_2b86c4;
        }
    }
    ctx->pc = 0x2B8670u;
    // 0x2b8670: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2b8670u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2b8674: 0x8e040304  lw          $a0, 0x304($s0)
    ctx->pc = 0x2b8674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2b8678: 0x24a5b4b0  addiu       $a1, $a1, -0x4B50
    ctx->pc = 0x2b8678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948016));
    // 0x2b867c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2B867Cu;
    {
        const bool branch_taken_0x2b867c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B867Cu;
        // 0x2b8680: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b867c) {
            ctx->pc = 0x2B86B4u;
            goto label_2b86b4;
        }
    }
    ctx->pc = 0x2B8684u;
label_2b8684:
    // 0x2b8684: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2b8684u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2b8688: 0x8e040304  lw          $a0, 0x304($s0)
    ctx->pc = 0x2b8688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2b868c: 0x8e0604d4  lw          $a2, 0x4D4($s0)
    ctx->pc = 0x2b868cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
    // 0x2b8690: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x2B8690u;
    SET_GPR_U32(ctx, 31, 0x2B8698u);
    ctx->pc = 0x2B8694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8690u;
    // 0x2b8694: 0x24a5b4a8  addiu       $a1, $a1, -0x4B58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x2B8690u, 0x2B8698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8698u;
label_2b8698:
    // 0x2b8698: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b8698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b869c: 0x54a00009  bnel        $a1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B869Cu;
    {
        const bool branch_taken_0x2b869c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b869c) {
            ctx->pc = 0x2B86A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B869Cu;
            // 0x2b86a0: 0x960202fe  lhu         $v0, 0x2FE($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B86C4u;
            goto label_2b86c4;
        }
    }
    ctx->pc = 0x2B86A4u;
    // 0x2b86a4: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2b86a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2b86a8: 0x8e040304  lw          $a0, 0x304($s0)
    ctx->pc = 0x2b86a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2b86ac: 0x8e0604d4  lw          $a2, 0x4D4($s0)
    ctx->pc = 0x2b86acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
    // 0x2b86b0: 0x24a5b4b0  addiu       $a1, $a1, -0x4B50
    ctx->pc = 0x2b86b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948016));
label_2b86b4:
    // 0x2b86b4: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x2B86B4u;
    SET_GPR_U32(ctx, 31, 0x2B86BCu);
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x2B86B4u, 0x2B86BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B86BCu;
label_2b86bc:
    // 0x2b86bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b86bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b86c0: 0x960202fe  lhu         $v0, 0x2FE($s0)
    ctx->pc = 0x2b86c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
label_2b86c4:
    // 0x2b86c4: 0x2444fdd9  addiu       $a0, $v0, -0x227
    ctx->pc = 0x2b86c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966745));
    // 0x2b86c8: 0x2c83004d  sltiu       $v1, $a0, 0x4D
    ctx->pc = 0x2b86c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)77) ? 1 : 0);
    // 0x2b86cc: 0x10600043  beqz        $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x2B86CCu;
    {
        const bool branch_taken_0x2b86cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B86D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B86CCu;
        // 0x2b86d0: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b86cc) {
            ctx->pc = 0x2B87DCu;
            goto label_2b87dc;
        }
    }
    ctx->pc = 0x2B86D4u;
    // 0x2b86d4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b86d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b86d8: 0x2442b700  addiu       $v0, $v0, -0x4900
    ctx->pc = 0x2b86d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948608));
    // 0x2b86dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b86dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b86e0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2b86e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b86e4: 0x800008  jr          $a0
    ctx->pc = 0x2B86E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B86ECu: goto label_2b86ec;
            case 0x2B86FCu: goto label_2b86fc;
            case 0x2B870Cu: goto label_2b870c;
            case 0x2B871Cu: goto label_2b871c;
            case 0x2B872Cu: goto label_2b872c;
            case 0x2B873Cu: goto label_2b873c;
            case 0x2B874Cu: goto label_2b874c;
            case 0x2B875Cu: goto label_2b875c;
            case 0x2B876Cu: goto label_2b876c;
            case 0x2B877Cu: goto label_2b877c;
            case 0x2B878Cu: goto label_2b878c;
            case 0x2B879Cu: goto label_2b879c;
            case 0x2B87ACu: goto label_2b87ac;
            case 0x2B87BCu: goto label_2b87bc;
            case 0x2B87CCu: goto label_2b87cc;
            case 0x2B87DCu: goto label_2b87dc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B86E4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2B86ECu;
label_2b86ec:
    // 0x2b86ec: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x2b86ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2b86f0: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x2b86f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x2b86f4: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x2B86F4u;
    {
        const bool branch_taken_0x2b86f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B86F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B86F4u;
        // 0x2b86f8: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b86f4) {
            ctx->pc = 0x2B87E0u;
            goto label_2b87e0;
        }
    }
    ctx->pc = 0x2B86FCu;
label_2b86fc:
    // 0x2b86fc: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x2b86fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2b8700: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2b8700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2b8704: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x2B8704u;
    {
        const bool branch_taken_0x2b8704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8704u;
        // 0x2b8708: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8704) {
            ctx->pc = 0x2B87E0u;
            goto label_2b87e0;
        }
    }
    ctx->pc = 0x2B870Cu;
label_2b870c:
    // 0x2b870c: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x2b870cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2b8710: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x2b8710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x2b8714: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x2B8714u;
    {
        const bool branch_taken_0x2b8714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8714u;
        // 0x2b8718: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8714) {
            ctx->pc = 0x2B87E0u;
            goto label_2b87e0;
        }
    }
    ctx->pc = 0x2B871Cu;
label_2b871c:
    // 0x2b871c: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x2b871cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2b8720: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x2b8720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x2b8724: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x2B8724u;
    {
        const bool branch_taken_0x2b8724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8724u;
        // 0x2b8728: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8724) {
            ctx->pc = 0x2B87E0u;
            goto label_2b87e0;
        }
    }
    ctx->pc = 0x2B872Cu;
label_2b872c:
    // 0x2b872c: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x2b872cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2b8730: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x2b8730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x2b8734: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2B8734u;
    {
        const bool branch_taken_0x2b8734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8734u;
        // 0x2b8738: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8734) {
            ctx->pc = 0x2B87E0u;
            goto label_2b87e0;
        }
    }
    ctx->pc = 0x2B873Cu;
label_2b873c:
    // 0x2b873c: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x2b873cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2b8740: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x2b8740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x2b8744: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2B8744u;
    {
        const bool branch_taken_0x2b8744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8744u;
        // 0x2b8748: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8744) {
            ctx->pc = 0x2B87E0u;
            goto label_2b87e0;
        }
    }
    ctx->pc = 0x2B874Cu;
label_2b874c:
    // 0x2b874c: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x2b874cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2b8750: 0x8c620078  lw          $v0, 0x78($v1)
    ctx->pc = 0x2b8750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 120)));
    // 0x2b8754: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2B8754u;
    {
        const bool branch_taken_0x2b8754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8754u;
        // 0x2b8758: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8754) {
            ctx->pc = 0x2B87E0u;
            goto label_2b87e0;
        }
    }
    ctx->pc = 0x2B875Cu;
label_2b875c:
    // 0x2b875c: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x2b875cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2b8760: 0x8c620070  lw          $v0, 0x70($v1)
    ctx->pc = 0x2b8760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x2b8764: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2B8764u;
    {
        const bool branch_taken_0x2b8764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8764u;
        // 0x2b8768: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8764) {
            ctx->pc = 0x2B87E0u;
            goto label_2b87e0;
        }
    }
    ctx->pc = 0x2B876Cu;
label_2b876c:
    // 0x2b876c: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x2b876cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2b8770: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2b8770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2b8774: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2B8774u;
    {
        const bool branch_taken_0x2b8774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8774u;
        // 0x2b8778: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8774) {
            ctx->pc = 0x2B87E0u;
            goto label_2b87e0;
        }
    }
    ctx->pc = 0x2B877Cu;
label_2b877c:
    // 0x2b877c: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x2b877cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2b8780: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x2b8780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x2b8784: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2B8784u;
    {
        const bool branch_taken_0x2b8784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8784u;
        // 0x2b8788: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8784) {
            ctx->pc = 0x2B87E0u;
            goto label_2b87e0;
        }
    }
    ctx->pc = 0x2B878Cu;
label_2b878c:
    // 0x2b878c: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x2b878cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2b8790: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x2b8790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x2b8794: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2B8794u;
    {
        const bool branch_taken_0x2b8794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8794u;
        // 0x2b8798: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8794) {
            ctx->pc = 0x2B87E0u;
            goto label_2b87e0;
        }
    }
    ctx->pc = 0x2B879Cu;
label_2b879c:
    // 0x2b879c: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x2b879cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2b87a0: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x2b87a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x2b87a4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2B87A4u;
    {
        const bool branch_taken_0x2b87a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B87A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B87A4u;
        // 0x2b87a8: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b87a4) {
            ctx->pc = 0x2B87E0u;
            goto label_2b87e0;
        }
    }
    ctx->pc = 0x2B87ACu;
label_2b87ac:
    // 0x2b87ac: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x2b87acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2b87b0: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x2b87b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x2b87b4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2B87B4u;
    {
        const bool branch_taken_0x2b87b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B87B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B87B4u;
        // 0x2b87b8: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b87b4) {
            ctx->pc = 0x2B87E0u;
            goto label_2b87e0;
        }
    }
    ctx->pc = 0x2B87BCu;
label_2b87bc:
    // 0x2b87bc: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x2b87bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2b87c0: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x2b87c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x2b87c4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2B87C4u;
    {
        const bool branch_taken_0x2b87c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B87C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B87C4u;
        // 0x2b87c8: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b87c4) {
            ctx->pc = 0x2B87E0u;
            goto label_2b87e0;
        }
    }
    ctx->pc = 0x2B87CCu;
label_2b87cc:
    // 0x2b87cc: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x2b87ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2b87d0: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x2b87d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x2b87d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B87D4u;
    {
        const bool branch_taken_0x2b87d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B87D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B87D4u;
        // 0x2b87d8: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b87d4) {
            ctx->pc = 0x2B87E0u;
            goto label_2b87e0;
        }
    }
    ctx->pc = 0x2B87DCu;
label_2b87dc:
    // 0x2b87dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b87dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b87e0:
    // 0x2b87e0: 0x50a0000a  beql        $a1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2B87E0u;
    {
        const bool branch_taken_0x2b87e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b87e0) {
            ctx->pc = 0x2B87E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B87E0u;
            // 0x2b87e4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B880Cu;
            goto label_2b880c;
        }
    }
    ctx->pc = 0x2B87E8u;
    // 0x2b87e8: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B87E8u;
    {
        const bool branch_taken_0x2b87e8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B87ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B87E8u;
        // 0x2b87ec: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b87e8) {
            ctx->pc = 0x2B8808u;
            goto label_2b8808;
        }
    }
    ctx->pc = 0x2B87F0u;
    // 0x2b87f0: 0x8e020254  lw          $v0, 0x254($s0)
    ctx->pc = 0x2b87f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
    // 0x2b87f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b87f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b87f8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2b87f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b87fc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2b87fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2b8800: 0xc0526b6  jal         func_149AD8
    ctx->pc = 0x2B8800u;
    SET_GPR_U32(ctx, 31, 0x2B8808u);
    ctx->pc = 0x2B8804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8800u;
    // 0x2b8804: 0xae020254  sw          $v0, 0x254($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 596), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149AD8u, 0x2B8800u, 0x2B8808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8808u;
label_2b8808:
    // 0x2b8808: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2b8808u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2b880c:
    // 0x2b880c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b880cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b8810: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b8810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b8814: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B8818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8814u;
        // 0x2b8818: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B881Cu;
    // 0x2b881c: 0x0  nop
    ctx->pc = 0x2b881cu;
    // NOP
    ctx->pc = 0x2b8820u;
}
