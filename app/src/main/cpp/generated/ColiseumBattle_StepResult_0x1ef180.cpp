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

// Function: ColiseumBattle_StepResult
// Address: 0x1ef180 - 0x1ef740
void ColiseumBattle_StepResult_0x1ef180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ColiseumBattle_StepResult_0x1ef180");
#endif

    switch (ctx->pc) {
        case 0x1ef1ecu: goto label_1ef1ec;
        case 0x1ef1f8u: goto label_1ef1f8;
        case 0x1ef244u: goto label_1ef244;
        case 0x1ef25cu: goto label_1ef25c;
        case 0x1ef280u: goto label_1ef280;
        case 0x1ef294u: goto label_1ef294;
        case 0x1ef2c4u: goto label_1ef2c4;
        case 0x1ef320u: goto label_1ef320;
        case 0x1ef368u: goto label_1ef368;
        case 0x1ef388u: goto label_1ef388;
        case 0x1ef39cu: goto label_1ef39c;
        case 0x1ef3d4u: goto label_1ef3d4;
        case 0x1ef428u: goto label_1ef428;
        case 0x1ef4bcu: goto label_1ef4bc;
        case 0x1ef4d4u: goto label_1ef4d4;
        case 0x1ef510u: goto label_1ef510;
        case 0x1ef520u: goto label_1ef520;
        case 0x1ef52cu: goto label_1ef52c;
        case 0x1ef554u: goto label_1ef554;
        case 0x1ef594u: goto label_1ef594;
        case 0x1ef5b4u: goto label_1ef5b4;
        case 0x1ef608u: goto label_1ef608;
        case 0x1ef64cu: goto label_1ef64c;
        case 0x1ef690u: goto label_1ef690;
        case 0x1ef6b4u: goto label_1ef6b4;
        case 0x1ef704u: goto label_1ef704;
        case 0x1ef710u: goto label_1ef710;
        case 0x1ef718u: goto label_1ef718;
        case 0x1ef720u: goto label_1ef720;
        default: break;
    }

    ctx->pc = 0x1ef180u;

    // 0x1ef180: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ef180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1ef184: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1ef184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1ef188: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1ef188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1ef18c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ef18cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef190: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1ef190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1ef194: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1ef194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1ef198: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ef198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ef19c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1ef19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1ef1a0: 0x2c62000b  sltiu       $v0, $v1, 0xB
    ctx->pc = 0x1ef1a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x1ef1a4: 0x10400157  beqz        $v0, . + 4 + (0x157 << 2)
    ctx->pc = 0x1EF1A4u;
    {
        const bool branch_taken_0x1ef1a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF1A4u;
        // 0x1ef1a8: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef1a4) {
            ctx->pc = 0x1EF704u;
            goto label_1ef704;
        }
    }
    ctx->pc = 0x1EF1ACu;
    // 0x1ef1ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ef1acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ef1b0: 0x2442be60  addiu       $v0, $v0, -0x41A0
    ctx->pc = 0x1ef1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950496));
    // 0x1ef1b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ef1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ef1b8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1ef1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ef1bc: 0x800008  jr          $a0
    ctx->pc = 0x1EF1BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EF1C4u: goto label_1ef1c4;
            case 0x1EF208u: goto label_1ef208;
            case 0x1EF330u: goto label_1ef330;
            case 0x1EF3F0u: goto label_1ef3f0;
            case 0x1EF438u: goto label_1ef438;
            case 0x1EF488u: goto label_1ef488;
            case 0x1EF55Cu: goto label_1ef55c;
            case 0x1EF5D4u: goto label_1ef5d4;
            case 0x1EF618u: goto label_1ef618;
            case 0x1EF65Cu: goto label_1ef65c;
            case 0x1EF6C4u: goto label_1ef6c4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF1BCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1EF1C4u;
label_1ef1c4:
    // 0x1ef1c4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1ef1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1ef1c8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1ef1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1ef1cc: 0x8c47aff0  lw          $a3, -0x5010($v0)
    ctx->pc = 0x1ef1ccu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x5CAFF0u));
    // 0x1ef1d0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1ef1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1ef1d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ef1d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef1d8: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x1ef1d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x1ef1dc: 0x24e70210  addiu       $a3, $a3, 0x210
    ctx->pc = 0x1ef1dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 528));
    // 0x1ef1e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ef1e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef1e4: 0xc0b2e5a  jal         func_2CB968
    ctx->pc = 0x1EF1E4u;
    SET_GPR_U32(ctx, 31, 0x1EF1ECu);
    ctx->pc = 0x1EF1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF1E4u;
    // 0x1ef1e8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB968u, 0x1EF1E4u, 0x1EF1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF1ECu;
label_1ef1ec:
    // 0x1ef1ec: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x1ef1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x1ef1f0: 0xc07cc2e  jal         func_1F30B8
    ctx->pc = 0x1EF1F0u;
    SET_GPR_U32(ctx, 31, 0x1EF1F8u);
    ctx->pc = 0x1EF1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF1F0u;
    // 0x1ef1f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F30B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F30B8u, 0x1EF1F0u, 0x1EF1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF1F8u;
label_1ef1f8:
    // 0x1ef1f8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1ef1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1ef1fc: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1ef1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1ef200: 0x1000012d  b           . + 4 + (0x12D << 2)
    ctx->pc = 0x1EF200u;
    {
        const bool branch_taken_0x1ef200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF200u;
        // 0x1ef204: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef200) {
            ctx->pc = 0x1EF6B8u;
            goto label_1ef6b8;
        }
    }
    ctx->pc = 0x1EF208u;
label_1ef208:
    // 0x1ef208: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1ef208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1ef20c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EF20Cu;
    {
        const bool branch_taken_0x1ef20c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF20Cu;
        // 0x1ef210: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef20c) {
            ctx->pc = 0x1EF220u;
            goto label_1ef220;
        }
    }
    ctx->pc = 0x1EF214u;
    // 0x1ef214: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1ef214u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef218: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1EF218u;
    {
        const bool branch_taken_0x1ef218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF218u;
        // 0x1ef21c: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef218) {
            ctx->pc = 0x1EF224u;
            goto label_1ef224;
        }
    }
    ctx->pc = 0x1EF220u;
label_1ef220:
    // 0x1ef220: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ef220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ef224:
    // 0x1ef224: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1ef224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ef228: 0x10400136  beqz        $v0, . + 4 + (0x136 << 2)
    ctx->pc = 0x1EF228u;
    {
        const bool branch_taken_0x1ef228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF228u;
        // 0x1ef22c: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef228) {
            ctx->pc = 0x1EF704u;
            goto label_1ef704;
        }
    }
    ctx->pc = 0x1EF230u;
    // 0x1ef230: 0x86250b60  lh          $a1, 0xB60($s1)
    ctx->pc = 0x1ef230u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2912)));
    // 0x1ef234: 0x24509b70  addiu       $s0, $v0, -0x6490
    ctx->pc = 0x1ef234u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x1ef238: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1ef238u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef23c: 0xc07f134  jal         func_1FC4D0
    ctx->pc = 0x1EF23Cu;
    SET_GPR_U32(ctx, 31, 0x1EF244u);
    ctx->pc = 0x1EF240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF23Cu;
    // 0x1ef240: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC4D0u, 0x1EF23Cu, 0x1EF244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF244u;
label_1ef244:
    // 0x1ef244: 0x54400037  bnel        $v0, $zero, . + 4 + (0x37 << 2)
    ctx->pc = 0x1EF244u;
    {
        const bool branch_taken_0x1ef244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ef244) {
            ctx->pc = 0x1EF248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EF244u;
            // 0x1ef248: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EF324u;
            goto label_1ef324;
        }
    }
    ctx->pc = 0x1EF24Cu;
    // 0x1ef24c: 0x86250b60  lh          $a1, 0xB60($s1)
    ctx->pc = 0x1ef24cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2912)));
    // 0x1ef250: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ef250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef254: 0xc07f11a  jal         func_1FC468
    ctx->pc = 0x1EF254u;
    SET_GPR_U32(ctx, 31, 0x1EF25Cu);
    ctx->pc = 0x1EF258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF254u;
    // 0x1ef258: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC468u, 0x1EF254u, 0x1EF25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF25Cu;
label_1ef25c:
    // 0x1ef25c: 0x8e629b70  lw          $v0, -0x6490($s3)
    ctx->pc = 0x1ef25cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294941552)));
    // 0x1ef260: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x1ef260u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
    // 0x1ef264: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x1ef264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1ef268: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1ef268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1ef26c: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1EF26Cu;
    {
        const bool branch_taken_0x1ef26c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF26Cu;
        // 0x1ef270: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef26c) {
            ctx->pc = 0x1EF2BCu;
            goto label_1ef2bc;
        }
    }
    ctx->pc = 0x1EF274u;
    // 0x1ef274: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1ef274u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ef278: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1ef278u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ef27c: 0x0  nop
    ctx->pc = 0x1ef27cu;
    // NOP
label_1ef280:
    // 0x1ef280: 0x2a020033  slti        $v0, $s0, 0x33
    ctx->pc = 0x1ef280u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)51) ? 1 : 0);
    // 0x1ef284: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EF284u;
    {
        const bool branch_taken_0x1ef284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF284u;
        // 0x1ef288: 0x26649b70  addiu       $a0, $s3, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef284) {
            ctx->pc = 0x1EF2A0u;
            goto label_1ef2a0;
        }
    }
    ctx->pc = 0x1EF28Cu;
    // 0x1ef28c: 0xc07f134  jal         func_1FC4D0
    ctx->pc = 0x1EF28Cu;
    SET_GPR_U32(ctx, 31, 0x1EF294u);
    ctx->pc = 0x1EF290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF28Cu;
    // 0x1ef290: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC4D0u, 0x1EF28Cu, 0x1EF294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF294u;
label_1ef294:
    // 0x1ef294: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1EF294u;
    {
        const bool branch_taken_0x1ef294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF294u;
        // 0x1ef298: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef294) {
            ctx->pc = 0x1EF280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ef280;
        }
    }
    ctx->pc = 0x1EF29Cu;
    // 0x1ef29c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ef29cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ef2a0:
    // 0x1ef2a0: 0x1240001b  beqz        $s2, . + 4 + (0x1B << 2)
    ctx->pc = 0x1EF2A0u;
    {
        const bool branch_taken_0x1ef2a0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF2A0u;
        // 0x1ef2a4: 0x3c030080  lui         $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef2a0) {
            ctx->pc = 0x1EF310u;
            goto label_1ef310;
        }
    }
    ctx->pc = 0x1EF2A8u;
    // 0x1ef2a8: 0x8e649b70  lw          $a0, -0x6490($s3)
    ctx->pc = 0x1ef2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294941552)));
    // 0x1ef2ac: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1ef2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1ef2b0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ef2b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1ef2b4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1EF2B4u;
    {
        const bool branch_taken_0x1ef2b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF2B4u;
        // 0x1ef2b8: 0xac820014  sw          $v0, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef2b4) {
            ctx->pc = 0x1EF310u;
            goto label_1ef310;
        }
    }
    ctx->pc = 0x1EF2BCu;
label_1ef2bc:
    // 0x1ef2bc: 0xc07f134  jal         func_1FC4D0
    ctx->pc = 0x1EF2BCu;
    SET_GPR_U32(ctx, 31, 0x1EF2C4u);
    ctx->pc = 0x1EF2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF2BCu;
    // 0x1ef2c0: 0x24050033  addiu       $a1, $zero, 0x33 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC4D0u, 0x1EF2BCu, 0x1EF2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF2C4u;
label_1ef2c4:
    // 0x1ef2c4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1EF2C4u;
    {
        const bool branch_taken_0x1ef2c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF2C4u;
        // 0x1ef2c8: 0x8e639b70  lw          $v1, -0x6490($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294941552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef2c4) {
            ctx->pc = 0x1EF310u;
            goto label_1ef310;
        }
    }
    ctx->pc = 0x1EF2CCu;
    // 0x1ef2cc: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x1ef2ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x1ef2d0: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1ef2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1ef2d4: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x1ef2d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x1ef2d8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EF2D8u;
    {
        const bool branch_taken_0x1ef2d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF2D8u;
        // 0x1ef2dc: 0x8e659b70  lw          $a1, -0x6490($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294941552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef2d8) {
            ctx->pc = 0x1EF2F0u;
            goto label_1ef2f0;
        }
    }
    ctx->pc = 0x1EF2E0u;
    // 0x1ef2e0: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x1ef2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x1ef2e4: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1ef2e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1ef2e8: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x1ef2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    // 0x1ef2ec: 0x8e659b70  lw          $a1, -0x6490($s3)
    ctx->pc = 0x1ef2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294941552)));
label_1ef2f0:
    // 0x1ef2f0: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x1ef2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x1ef2f4: 0x24847a24  addiu       $a0, $a0, 0x7A24
    ctx->pc = 0x1ef2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31268));
    // 0x1ef2f8: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x1ef2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1ef2fc: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x1ef2fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1ef300: 0xaca20014  sw          $v0, 0x14($a1)
    ctx->pc = 0x1ef300u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 2));
    // 0x1ef304: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1ef304u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A28u));
    // 0x1ef308: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1ef308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1ef30c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1ef30cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x747A28u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x747A28u, _value); } while (0);
label_1ef310:
    // 0x1ef310: 0x8e250b70  lw          $a1, 0xB70($s1)
    ctx->pc = 0x1ef310u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2928)));
    // 0x1ef314: 0x26649b70  addiu       $a0, $s3, -0x6490
    ctx->pc = 0x1ef314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941552));
    // 0x1ef318: 0xc07e9d4  jal         func_1FA750
    ctx->pc = 0x1EF318u;
    SET_GPR_U32(ctx, 31, 0x1EF320u);
    ctx->pc = 0x1EF31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF318u;
    // 0x1ef31c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA750u, 0x1EF318u, 0x1EF320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF320u;
label_1ef320:
    // 0x1ef320: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1ef320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1ef324:
    // 0x1ef324: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1ef324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1ef328: 0x100000e3  b           . + 4 + (0xE3 << 2)
    ctx->pc = 0x1EF328u;
    {
        const bool branch_taken_0x1ef328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF328u;
        // 0x1ef32c: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef328) {
            ctx->pc = 0x1EF6B8u;
            goto label_1ef6b8;
        }
    }
    ctx->pc = 0x1EF330u;
label_1ef330:
    // 0x1ef330: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1ef330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1ef334: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EF334u;
    {
        const bool branch_taken_0x1ef334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF334u;
        // 0x1ef338: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef334) {
            ctx->pc = 0x1EF348u;
            goto label_1ef348;
        }
    }
    ctx->pc = 0x1EF33Cu;
    // 0x1ef33c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1ef33cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef340: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1EF340u;
    {
        const bool branch_taken_0x1ef340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF340u;
        // 0x1ef344: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef340) {
            ctx->pc = 0x1EF34Cu;
            goto label_1ef34c;
        }
    }
    ctx->pc = 0x1EF348u;
label_1ef348:
    // 0x1ef348: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ef348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ef34c:
    // 0x1ef34c: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1ef34cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ef350: 0x104000ec  beqz        $v0, . + 4 + (0xEC << 2)
    ctx->pc = 0x1EF350u;
    {
        const bool branch_taken_0x1ef350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF350u;
        // 0x1ef354: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef350) {
            ctx->pc = 0x1EF704u;
            goto label_1ef704;
        }
    }
    ctx->pc = 0x1EF358u;
    // 0x1ef358: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ef358u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef35c: 0x24449b70  addiu       $a0, $v0, -0x6490
    ctx->pc = 0x1ef35cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x1ef360: 0xc07e9b0  jal         func_1FA6C0
    ctx->pc = 0x1EF360u;
    SET_GPR_U32(ctx, 31, 0x1EF368u);
    ctx->pc = 0x1EF364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF360u;
    // 0x1ef364: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA6C0u, 0x1EF360u, 0x1EF368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF368u;
label_1ef368:
    // 0x1ef368: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1EF368u;
    {
        const bool branch_taken_0x1ef368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF368u;
        // 0x1ef36c: 0x8e629b70  lw          $v0, -0x6490($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294941552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef368) {
            ctx->pc = 0x1EF3A8u;
            goto label_1ef3a8;
        }
    }
    ctx->pc = 0x1EF370u;
    // 0x1ef370: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x1ef370u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x1ef374: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x1ef374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1ef378: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1ef378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1ef37c: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1EF37Cu;
    {
        const bool branch_taken_0x1ef37c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF37Cu;
        // 0x1ef380: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef37c) {
            ctx->pc = 0x1EF3A8u;
            goto label_1ef3a8;
        }
    }
    ctx->pc = 0x1EF384u;
    // 0x1ef384: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1ef384u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ef388:
    // 0x1ef388: 0x2a020029  slti        $v0, $s0, 0x29
    ctx->pc = 0x1ef388u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x1ef38c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EF38Cu;
    {
        const bool branch_taken_0x1ef38c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF38Cu;
        // 0x1ef390: 0x26649b70  addiu       $a0, $s3, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef38c) {
            ctx->pc = 0x1EF3A8u;
            goto label_1ef3a8;
        }
    }
    ctx->pc = 0x1EF394u;
    // 0x1ef394: 0xc07f134  jal         func_1FC4D0
    ctx->pc = 0x1EF394u;
    SET_GPR_U32(ctx, 31, 0x1EF39Cu);
    ctx->pc = 0x1EF398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF394u;
    // 0x1ef398: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC4D0u, 0x1EF394u, 0x1EF39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF39Cu;
label_1ef39c:
    // 0x1ef39c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1EF39Cu;
    {
        const bool branch_taken_0x1ef39c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF39Cu;
        // 0x1ef3a0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef39c) {
            ctx->pc = 0x1EF388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ef388;
        }
    }
    ctx->pc = 0x1EF3A4u;
    // 0x1ef3a4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ef3a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ef3a8:
    // 0x1ef3a8: 0x1240000e  beqz        $s2, . + 4 + (0xE << 2)
    ctx->pc = 0x1EF3A8u;
    {
        const bool branch_taken_0x1ef3a8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF3A8u;
        // 0x1ef3ac: 0x3402c350  ori         $v0, $zero, 0xC350 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50000);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef3a8) {
            ctx->pc = 0x1EF3E4u;
            goto label_1ef3e4;
        }
    }
    ctx->pc = 0x1EF3B0u;
    // 0x1ef3b0: 0x3c060002  lui         $a2, 0x2
    ctx->pc = 0x1ef3b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2 << 16));
    // 0x1ef3b4: 0xae220ba4  sw          $v0, 0xBA4($s1)
    ctx->pc = 0x1ef3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2980), GPR_U32(ctx, 2));
    // 0x1ef3b8: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x1ef3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x1ef3bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ef3bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef3c0: 0x8e639b70  lw          $v1, -0x6490($s3)
    ctx->pc = 0x1ef3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294941552)));
    // 0x1ef3c4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1ef3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1ef3c8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x1ef3c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1ef3cc: 0xc07cc2e  jal         func_1F30B8
    ctx->pc = 0x1EF3CCu;
    SET_GPR_U32(ctx, 31, 0x1EF3D4u);
    ctx->pc = 0x1EF3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF3CCu;
    // 0x1ef3d0: 0xac620014  sw          $v0, 0x14($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F30B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F30B8u, 0x1EF3CCu, 0x1EF3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF3D4u;
label_1ef3d4:
    // 0x1ef3d4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1ef3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1ef3d8: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1ef3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1ef3dc: 0x100000b6  b           . + 4 + (0xB6 << 2)
    ctx->pc = 0x1EF3DCu;
    {
        const bool branch_taken_0x1ef3dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF3DCu;
        // 0x1ef3e0: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef3dc) {
            ctx->pc = 0x1EF6B8u;
            goto label_1ef6b8;
        }
    }
    ctx->pc = 0x1EF3E4u;
label_1ef3e4:
    // 0x1ef3e4: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1ef3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1ef3e8: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x1EF3E8u;
    {
        const bool branch_taken_0x1ef3e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF3E8u;
        // 0x1ef3ec: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef3e8) {
            ctx->pc = 0x1EF5C8u;
            goto label_1ef5c8;
        }
    }
    ctx->pc = 0x1EF3F0u;
label_1ef3f0:
    // 0x1ef3f0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1ef3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1ef3f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EF3F4u;
    {
        const bool branch_taken_0x1ef3f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF3F4u;
        // 0x1ef3f8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef3f4) {
            ctx->pc = 0x1EF408u;
            goto label_1ef408;
        }
    }
    ctx->pc = 0x1EF3FCu;
    // 0x1ef3fc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1ef3fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef400: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1EF400u;
    {
        const bool branch_taken_0x1ef400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF400u;
        // 0x1ef404: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef400) {
            ctx->pc = 0x1EF40Cu;
            goto label_1ef40c;
        }
    }
    ctx->pc = 0x1EF408u;
label_1ef408:
    // 0x1ef408: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ef408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ef40c:
    // 0x1ef40c: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1ef40cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ef410: 0x504000bd  beql        $v0, $zero, . + 4 + (0xBD << 2)
    ctx->pc = 0x1EF410u;
    {
        const bool branch_taken_0x1ef410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef410) {
            ctx->pc = 0x1EF414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EF410u;
            // 0x1ef414: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EF708u;
            goto label_1ef708;
        }
    }
    ctx->pc = 0x1EF418u;
    // 0x1ef418: 0x8e260ba4  lw          $a2, 0xBA4($s1)
    ctx->pc = 0x1ef418u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2980)));
    // 0x1ef41c: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x1ef41cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x1ef420: 0xc07ccfe  jal         func_1F33F8
    ctx->pc = 0x1EF420u;
    SET_GPR_U32(ctx, 31, 0x1EF428u);
    ctx->pc = 0x1EF424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF420u;
    // 0x1ef424: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F33F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F33F8u, 0x1EF420u, 0x1EF428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF428u;
label_1ef428:
    // 0x1ef428: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1ef428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1ef42c: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1ef42cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1ef430: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x1EF430u;
    {
        const bool branch_taken_0x1ef430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF430u;
        // 0x1ef434: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef430) {
            ctx->pc = 0x1EF6B8u;
            goto label_1ef6b8;
        }
    }
    ctx->pc = 0x1EF438u;
label_1ef438:
    // 0x1ef438: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1ef438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1ef43c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EF43Cu;
    {
        const bool branch_taken_0x1ef43c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF43Cu;
        // 0x1ef440: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef43c) {
            ctx->pc = 0x1EF450u;
            goto label_1ef450;
        }
    }
    ctx->pc = 0x1EF444u;
    // 0x1ef444: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1ef444u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef448: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1EF448u;
    {
        const bool branch_taken_0x1ef448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF448u;
        // 0x1ef44c: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef448) {
            ctx->pc = 0x1EF454u;
            goto label_1ef454;
        }
    }
    ctx->pc = 0x1EF450u;
label_1ef450:
    // 0x1ef450: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ef450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ef454:
    // 0x1ef454: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1ef454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ef458: 0x104000aa  beqz        $v0, . + 4 + (0xAA << 2)
    ctx->pc = 0x1EF458u;
    {
        const bool branch_taken_0x1ef458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF458u;
        // 0x1ef45c: 0x240203e8  addiu       $v0, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef458) {
            ctx->pc = 0x1EF704u;
            goto label_1ef704;
        }
    }
    ctx->pc = 0x1EF460u;
    // 0x1ef460: 0x8e240ba4  lw          $a0, 0xBA4($s1)
    ctx->pc = 0x1ef460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2980)));
    // 0x1ef464: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1EF464u;
    {
        const bool branch_taken_0x1ef464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef464) {
            ctx->pc = 0x1EF468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EF464u;
            // 0x1ef468: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EF46Cu;
            goto label_1ef46c;
        }
    }
    ctx->pc = 0x1EF46Cu;
label_1ef46c:
    // 0x1ef46c: 0x82001a  div         $zero, $a0, $v0
    ctx->pc = 0x1ef46cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1ef470: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1ef470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1ef474: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ef474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ef478: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1ef478u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1ef47c: 0x2012  mflo        $a0
    ctx->pc = 0x1ef47cu;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1ef480: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x1EF480u;
    {
        const bool branch_taken_0x1ef480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF480u;
        // 0x1ef484: 0xae240ba8  sw          $a0, 0xBA8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2984), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef480) {
            ctx->pc = 0x1EF704u;
            goto label_1ef704;
        }
    }
    ctx->pc = 0x1EF488u;
label_1ef488:
    // 0x1ef488: 0x8e220ba8  lw          $v0, 0xBA8($s1)
    ctx->pc = 0x1ef488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2984)));
    // 0x1ef48c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EF48Cu;
    {
        const bool branch_taken_0x1ef48c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF48Cu;
        // 0x1ef490: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef48c) {
            ctx->pc = 0x1EF4ACu;
            goto label_1ef4ac;
        }
    }
    ctx->pc = 0x1EF494u;
    // 0x1ef494: 0x3404f000  ori         $a0, $zero, 0xF000
    ctx->pc = 0x1ef494u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x1ef498: 0x42538  dsll        $a0, $a0, 20
    ctx->pc = 0x1ef498u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 20);
    // 0x1ef49c: 0xdc437640  ld          $v1, 0x7640($v0)
    ctx->pc = 0x1ef49cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 30272)));
    // 0x1ef4a0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1ef4a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1ef4a4: 0x50600012  beql        $v1, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x1EF4A4u;
    {
        const bool branch_taken_0x1ef4a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef4a4) {
            ctx->pc = 0x1EF4A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EF4A4u;
            // 0x1ef4a8: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EF4F0u;
            goto label_1ef4f0;
        }
    }
    ctx->pc = 0x1EF4ACu;
label_1ef4ac:
    // 0x1ef4ac: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x1ef4acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    // 0x1ef4b0: 0x26109b70  addiu       $s0, $s0, -0x6490
    ctx->pc = 0x1ef4b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
    // 0x1ef4b4: 0xc07e9c4  jal         func_1FA710
    ctx->pc = 0x1EF4B4u;
    SET_GPR_U32(ctx, 31, 0x1EF4BCu);
    ctx->pc = 0x1EF4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF4B4u;
    // 0x1ef4b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA710u, 0x1EF4B4u, 0x1EF4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF4BCu;
label_1ef4bc:
    // 0x1ef4bc: 0x8e250ba8  lw          $a1, 0xBA8($s1)
    ctx->pc = 0x1ef4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2984)));
    // 0x1ef4c0: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x1ef4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x1ef4c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ef4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef4c8: 0xa32818  mult        $a1, $a1, $v1
    ctx->pc = 0x1ef4c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1ef4cc: 0xc07e9be  jal         func_1FA6F8
    ctx->pc = 0x1EF4CCu;
    SET_GPR_U32(ctx, 31, 0x1EF4D4u);
    ctx->pc = 0x1EF4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF4CCu;
    // 0x1ef4d0: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA6F8u, 0x1EF4CCu, 0x1EF4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF4D4u;
label_1ef4d4:
    // 0x1ef4d4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1ef4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1ef4d8: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1ef4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1ef4dc: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x1ef4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x1ef4e0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ef4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ef4e4: 0xae200ba8  sw          $zero, 0xBA8($s1)
    ctx->pc = 0x1ef4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2984), GPR_U32(ctx, 0));
    // 0x1ef4e8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1EF4E8u;
    {
        const bool branch_taken_0x1ef4e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF4E8u;
        // 0x1ef4ec: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef4e8) {
            ctx->pc = 0x1EF538u;
            goto label_1ef538;
        }
    }
    ctx->pc = 0x1EF4F0u;
label_1ef4f0:
    // 0x1ef4f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ef4f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef4f4: 0x24060165  addiu       $a2, $zero, 0x165
    ctx->pc = 0x1ef4f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 357));
    // 0x1ef4f8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1ef4f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ef4fc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1ef4fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ef500: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ef500u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef504: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1ef504u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef508: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1EF508u;
    SET_GPR_U32(ctx, 31, 0x1EF510u);
    ctx->pc = 0x1EF50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF508u;
    // 0x1ef50c: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1EF508u, 0x1EF510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF510u;
label_1ef510:
    // 0x1ef510: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x1ef510u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    // 0x1ef514: 0x26109b70  addiu       $s0, $s0, -0x6490
    ctx->pc = 0x1ef514u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
    // 0x1ef518: 0xc07e9c4  jal         func_1FA710
    ctx->pc = 0x1EF518u;
    SET_GPR_U32(ctx, 31, 0x1EF520u);
    ctx->pc = 0x1EF51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF518u;
    // 0x1ef51c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA710u, 0x1EF518u, 0x1EF520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF520u;
label_1ef520:
    // 0x1ef520: 0x244503e8  addiu       $a1, $v0, 0x3E8
    ctx->pc = 0x1ef520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1000));
    // 0x1ef524: 0xc07e9be  jal         func_1FA6F8
    ctx->pc = 0x1EF524u;
    SET_GPR_U32(ctx, 31, 0x1EF52Cu);
    ctx->pc = 0x1EF528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF524u;
    // 0x1ef528: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA6F8u, 0x1EF524u, 0x1EF52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF52Cu;
label_1ef52c:
    // 0x1ef52c: 0x8e220ba8  lw          $v0, 0xBA8($s1)
    ctx->pc = 0x1ef52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2984)));
    // 0x1ef530: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ef530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ef534: 0xae220ba8  sw          $v0, 0xBA8($s1)
    ctx->pc = 0x1ef534u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2984), GPR_U32(ctx, 2));
label_1ef538:
    // 0x1ef538: 0x8e220ba8  lw          $v0, 0xBA8($s1)
    ctx->pc = 0x1ef538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2984)));
    // 0x1ef53c: 0x240603e8  addiu       $a2, $zero, 0x3E8
    ctx->pc = 0x1ef53cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x1ef540: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x1ef540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x1ef544: 0x460018  mult        $zero, $v0, $a2
    ctx->pc = 0x1ef544u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1ef548: 0x3012  mflo        $a2
    ctx->pc = 0x1ef548u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x1ef54c: 0xc07ccfe  jal         func_1F33F8
    ctx->pc = 0x1EF54Cu;
    SET_GPR_U32(ctx, 31, 0x1EF554u);
    ctx->pc = 0x1EF550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF54Cu;
    // 0x1ef550: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F33F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F33F8u, 0x1EF54Cu, 0x1EF554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF554u;
label_1ef554:
    // 0x1ef554: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x1EF554u;
    {
        const bool branch_taken_0x1ef554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF554u;
        // 0x1ef558: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef554) {
            ctx->pc = 0x1EF708u;
            goto label_1ef708;
        }
    }
    ctx->pc = 0x1EF55Cu;
label_1ef55c:
    // 0x1ef55c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1ef55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1ef560: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EF560u;
    {
        const bool branch_taken_0x1ef560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF560u;
        // 0x1ef564: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef560) {
            ctx->pc = 0x1EF574u;
            goto label_1ef574;
        }
    }
    ctx->pc = 0x1EF568u;
    // 0x1ef568: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1ef568u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef56c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1EF56Cu;
    {
        const bool branch_taken_0x1ef56c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF56Cu;
        // 0x1ef570: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef56c) {
            ctx->pc = 0x1EF578u;
            goto label_1ef578;
        }
    }
    ctx->pc = 0x1EF574u;
label_1ef574:
    // 0x1ef574: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ef574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ef578:
    // 0x1ef578: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1ef578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ef57c: 0x10400061  beqz        $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x1EF57Cu;
    {
        const bool branch_taken_0x1ef57c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF57Cu;
        // 0x1ef580: 0x26300060  addiu       $s0, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef57c) {
            ctx->pc = 0x1EF704u;
            goto label_1ef704;
        }
    }
    ctx->pc = 0x1EF584u;
    // 0x1ef584: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ef584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef588: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ef588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef58c: 0xc07ccfe  jal         func_1F33F8
    ctx->pc = 0x1EF58Cu;
    SET_GPR_U32(ctx, 31, 0x1EF594u);
    ctx->pc = 0x1EF590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF58Cu;
    // 0x1ef590: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F33F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F33F8u, 0x1EF58Cu, 0x1EF594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF594u;
label_1ef594:
    // 0x1ef594: 0x9e220054  lwu         $v0, 0x54($s1)
    ctx->pc = 0x1ef594u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x1ef598: 0x2113b  dsra        $v0, $v0, 4
    ctx->pc = 0x1ef598u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 4);
    // 0x1ef59c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ef59cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ef5a0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EF5A0u;
    {
        const bool branch_taken_0x1ef5a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF5A0u;
        // 0x1ef5a4: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef5a0) {
            ctx->pc = 0x1EF5C4u;
            goto label_1ef5c4;
        }
    }
    ctx->pc = 0x1EF5A8u;
    // 0x1ef5a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ef5a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef5ac: 0xc07cc2e  jal         func_1F30B8
    ctx->pc = 0x1EF5ACu;
    SET_GPR_U32(ctx, 31, 0x1EF5B4u);
    ctx->pc = 0x1EF5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF5ACu;
    // 0x1ef5b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F30B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F30B8u, 0x1EF5ACu, 0x1EF5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF5B4u;
label_1ef5b4:
    // 0x1ef5b4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1ef5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1ef5b8: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1ef5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1ef5bc: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x1EF5BCu;
    {
        const bool branch_taken_0x1ef5bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF5BCu;
        // 0x1ef5c0: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef5bc) {
            ctx->pc = 0x1EF6B8u;
            goto label_1ef6b8;
        }
    }
    ctx->pc = 0x1EF5C4u;
label_1ef5c4:
    // 0x1ef5c4: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1ef5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1ef5c8:
    // 0x1ef5c8: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x1ef5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x1ef5cc: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x1EF5CCu;
    {
        const bool branch_taken_0x1ef5cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF5CCu;
        // 0x1ef5d0: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef5cc) {
            ctx->pc = 0x1EF704u;
            goto label_1ef704;
        }
    }
    ctx->pc = 0x1EF5D4u;
label_1ef5d4:
    // 0x1ef5d4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1ef5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1ef5d8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EF5D8u;
    {
        const bool branch_taken_0x1ef5d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF5D8u;
        // 0x1ef5dc: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef5d8) {
            ctx->pc = 0x1EF5ECu;
            goto label_1ef5ec;
        }
    }
    ctx->pc = 0x1EF5E0u;
    // 0x1ef5e0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1ef5e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef5e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1EF5E4u;
    {
        const bool branch_taken_0x1ef5e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF5E4u;
        // 0x1ef5e8: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef5e4) {
            ctx->pc = 0x1EF5F0u;
            goto label_1ef5f0;
        }
    }
    ctx->pc = 0x1EF5ECu;
label_1ef5ec:
    // 0x1ef5ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ef5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ef5f0:
    // 0x1ef5f0: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1ef5f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ef5f4: 0x50400044  beql        $v0, $zero, . + 4 + (0x44 << 2)
    ctx->pc = 0x1EF5F4u;
    {
        const bool branch_taken_0x1ef5f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef5f4) {
            ctx->pc = 0x1EF5F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EF5F4u;
            // 0x1ef5f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EF708u;
            goto label_1ef708;
        }
    }
    ctx->pc = 0x1EF5FCu;
    // 0x1ef5fc: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x1ef5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x1ef600: 0xc07cd22  jal         func_1F3488
    ctx->pc = 0x1EF600u;
    SET_GPR_U32(ctx, 31, 0x1EF608u);
    ctx->pc = 0x1EF604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF600u;
    // 0x1ef604: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3488u, 0x1EF600u, 0x1EF608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF608u;
label_1ef608:
    // 0x1ef608: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1ef608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1ef60c: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x1ef60cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x1ef610: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1EF610u;
    {
        const bool branch_taken_0x1ef610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF610u;
        // 0x1ef614: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef610) {
            ctx->pc = 0x1EF6B8u;
            goto label_1ef6b8;
        }
    }
    ctx->pc = 0x1EF618u;
label_1ef618:
    // 0x1ef618: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1ef618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1ef61c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EF61Cu;
    {
        const bool branch_taken_0x1ef61c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF61Cu;
        // 0x1ef620: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef61c) {
            ctx->pc = 0x1EF630u;
            goto label_1ef630;
        }
    }
    ctx->pc = 0x1EF624u;
    // 0x1ef624: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1ef624u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef628: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1EF628u;
    {
        const bool branch_taken_0x1ef628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF628u;
        // 0x1ef62c: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef628) {
            ctx->pc = 0x1EF634u;
            goto label_1ef634;
        }
    }
    ctx->pc = 0x1EF630u;
label_1ef630:
    // 0x1ef630: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ef630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ef634:
    // 0x1ef634: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1ef634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ef638: 0x50400033  beql        $v0, $zero, . + 4 + (0x33 << 2)
    ctx->pc = 0x1EF638u;
    {
        const bool branch_taken_0x1ef638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef638) {
            ctx->pc = 0x1EF63Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EF638u;
            // 0x1ef63c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EF708u;
            goto label_1ef708;
        }
    }
    ctx->pc = 0x1EF640u;
    // 0x1ef640: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x1ef640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x1ef644: 0xc07cd22  jal         func_1F3488
    ctx->pc = 0x1EF644u;
    SET_GPR_U32(ctx, 31, 0x1EF64Cu);
    ctx->pc = 0x1EF648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF644u;
    // 0x1ef648: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3488u, 0x1EF644u, 0x1EF64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF64Cu;
label_1ef64c:
    // 0x1ef64c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1ef64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1ef650: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1ef650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1ef654: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1EF654u;
    {
        const bool branch_taken_0x1ef654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF654u;
        // 0x1ef658: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef654) {
            ctx->pc = 0x1EF6B8u;
            goto label_1ef6b8;
        }
    }
    ctx->pc = 0x1EF65Cu;
label_1ef65c:
    // 0x1ef65c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1ef65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1ef660: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EF660u;
    {
        const bool branch_taken_0x1ef660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF660u;
        // 0x1ef664: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef660) {
            ctx->pc = 0x1EF674u;
            goto label_1ef674;
        }
    }
    ctx->pc = 0x1EF668u;
    // 0x1ef668: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1ef668u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef66c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1EF66Cu;
    {
        const bool branch_taken_0x1ef66c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF66Cu;
        // 0x1ef670: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef66c) {
            ctx->pc = 0x1EF678u;
            goto label_1ef678;
        }
    }
    ctx->pc = 0x1EF674u;
label_1ef674:
    // 0x1ef674: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ef674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ef678:
    // 0x1ef678: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1ef678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ef67c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1EF67Cu;
    {
        const bool branch_taken_0x1ef67c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF67Cu;
        // 0x1ef680: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef67c) {
            ctx->pc = 0x1EF704u;
            goto label_1ef704;
        }
    }
    ctx->pc = 0x1EF684u;
    // 0x1ef684: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x1ef684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x1ef688: 0xc07ccfe  jal         func_1F33F8
    ctx->pc = 0x1EF688u;
    SET_GPR_U32(ctx, 31, 0x1EF690u);
    ctx->pc = 0x1EF68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF688u;
    // 0x1ef68c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F33F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F33F8u, 0x1EF688u, 0x1EF690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF690u;
label_1ef690:
    // 0x1ef690: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x1ef690u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x1ef694: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ef694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef698: 0x24847470  addiu       $a0, $a0, 0x7470
    ctx->pc = 0x1ef698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29808));
    // 0x1ef69c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1ef69cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ef6a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ef6a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef6a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ef6a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef6a8: 0x3c09ff00  lui         $t1, 0xFF00
    ctx->pc = 0x1ef6a8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65280 << 16));
    // 0x1ef6ac: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x1EF6ACu;
    SET_GPR_U32(ctx, 31, 0x1EF6B4u);
    ctx->pc = 0x1EF6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF6ACu;
    // 0x1ef6b0: 0x240a000f  addiu       $t2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x1EF6ACu, 0x1EF6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF6B4u;
label_1ef6b4:
    // 0x1ef6b4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1ef6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1ef6b8:
    // 0x1ef6b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ef6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ef6bc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1EF6BCu;
    {
        const bool branch_taken_0x1ef6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF6BCu;
        // 0x1ef6c0: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef6bc) {
            ctx->pc = 0x1EF704u;
            goto label_1ef704;
        }
    }
    ctx->pc = 0x1EF6C4u;
label_1ef6c4:
    // 0x1ef6c4: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x1ef6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x1ef6c8: 0x9062748c  lbu         $v0, 0x748C($v1)
    ctx->pc = 0x1ef6c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x74748Cu));
    // 0x1ef6cc: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x1ef6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x1ef6d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ef6d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ef6d4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1EF6D4u;
    {
        const bool branch_taken_0x1ef6d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF6D4u;
        // 0x1ef6d8: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef6d4) {
            ctx->pc = 0x1EF704u;
            goto label_1ef704;
        }
    }
    ctx->pc = 0x1EF6DCu;
    // 0x1ef6dc: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x1ef6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
    // 0x1ef6e0: 0x94850016  lhu         $a1, 0x16($a0)
    ctx->pc = 0x1ef6e0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 22)));
    // 0x1ef6e4: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1ef6e4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ef6e8: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1ef6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ef6ec: 0xc48c0010  lwc1        $f12, 0x10($a0)
    ctx->pc = 0x1ef6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ef6f0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1ef6f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef6f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ef6f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef6f8: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x1ef6f8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x1ef6fc: 0xc0b1152  jal         func_2C4548
    ctx->pc = 0x1EF6FCu;
    SET_GPR_U32(ctx, 31, 0x1EF704u);
    ctx->pc = 0x1EF700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF6FCu;
    // 0x1ef700: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4548u, 0x1EF6FCu, 0x1EF704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF704u;
label_1ef704:
    // 0x1ef704: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ef704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ef708:
    // 0x1ef708: 0xc07c124  jal         func_1F0490
    ctx->pc = 0x1EF708u;
    SET_GPR_U32(ctx, 31, 0x1EF710u);
    ctx->pc = 0x1EF70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF708u;
    // 0x1ef70c: 0x26300060  addiu       $s0, $s1, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0490u, 0x1EF708u, 0x1EF710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF710u;
label_1ef710:
    // 0x1ef710: 0xc07ca3c  jal         func_1F28F0
    ctx->pc = 0x1EF710u;
    SET_GPR_U32(ctx, 31, 0x1EF718u);
    ctx->pc = 0x1EF714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF710u;
    // 0x1ef714: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F28F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F28F0u, 0x1EF710u, 0x1EF718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF718u;
label_1ef718:
    // 0x1ef718: 0xc07ca64  jal         func_1F2990
    ctx->pc = 0x1EF718u;
    SET_GPR_U32(ctx, 31, 0x1EF720u);
    ctx->pc = 0x1EF71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF718u;
    // 0x1ef71c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2990u, 0x1EF718u, 0x1EF720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF720u;
label_1ef720:
    // 0x1ef720: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1ef720u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ef724: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1ef724u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ef728: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1ef728u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ef72c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1ef72cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ef730: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ef730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ef734: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF734u;
        // 0x1ef738: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EF73Cu;
    // 0x1ef73c: 0x0  nop
    ctx->pc = 0x1ef73cu;
    // NOP
    ctx->pc = 0x1ef740u;
}
