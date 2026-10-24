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

// Function: func_00332398
// Address: 0x332398 - 0x332508
void func_00332398_0x332398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00332398_0x332398");
#endif

    switch (ctx->pc) {
        case 0x332398u: goto label_332398;
        case 0x33239cu: goto label_33239c;
        case 0x3323a0u: goto label_3323a0;
        case 0x3323a4u: goto label_3323a4;
        case 0x3323a8u: goto label_3323a8;
        case 0x3323acu: goto label_3323ac;
        case 0x3323b0u: goto label_3323b0;
        case 0x3323b4u: goto label_3323b4;
        case 0x3323b8u: goto label_3323b8;
        case 0x3323bcu: goto label_3323bc;
        case 0x3323c0u: goto label_3323c0;
        case 0x3323c4u: goto label_3323c4;
        case 0x3323c8u: goto label_3323c8;
        case 0x3323ccu: goto label_3323cc;
        case 0x3323d0u: goto label_3323d0;
        case 0x3323d4u: goto label_3323d4;
        case 0x3323d8u: goto label_3323d8;
        case 0x3323dcu: goto label_3323dc;
        case 0x3323e0u: goto label_3323e0;
        case 0x3323e4u: goto label_3323e4;
        case 0x3323e8u: goto label_3323e8;
        case 0x3323ecu: goto label_3323ec;
        case 0x3323f0u: goto label_3323f0;
        case 0x3323f4u: goto label_3323f4;
        case 0x3323f8u: goto label_3323f8;
        case 0x3323fcu: goto label_3323fc;
        case 0x332400u: goto label_332400;
        case 0x332404u: goto label_332404;
        case 0x332408u: goto label_332408;
        case 0x33240cu: goto label_33240c;
        case 0x332410u: goto label_332410;
        case 0x332414u: goto label_332414;
        case 0x332418u: goto label_332418;
        case 0x33241cu: goto label_33241c;
        case 0x332420u: goto label_332420;
        case 0x332424u: goto label_332424;
        case 0x332428u: goto label_332428;
        case 0x33242cu: goto label_33242c;
        case 0x332430u: goto label_332430;
        case 0x332434u: goto label_332434;
        case 0x332438u: goto label_332438;
        case 0x33243cu: goto label_33243c;
        case 0x332440u: goto label_332440;
        case 0x332444u: goto label_332444;
        case 0x332448u: goto label_332448;
        case 0x33244cu: goto label_33244c;
        case 0x332450u: goto label_332450;
        case 0x332454u: goto label_332454;
        case 0x332458u: goto label_332458;
        case 0x33245cu: goto label_33245c;
        case 0x332460u: goto label_332460;
        case 0x332464u: goto label_332464;
        case 0x332468u: goto label_332468;
        case 0x33246cu: goto label_33246c;
        case 0x332470u: goto label_332470;
        case 0x332474u: goto label_332474;
        case 0x332478u: goto label_332478;
        case 0x33247cu: goto label_33247c;
        case 0x332480u: goto label_332480;
        case 0x332484u: goto label_332484;
        case 0x332488u: goto label_332488;
        case 0x33248cu: goto label_33248c;
        case 0x332490u: goto label_332490;
        case 0x332494u: goto label_332494;
        case 0x332498u: goto label_332498;
        case 0x33249cu: goto label_33249c;
        case 0x3324a0u: goto label_3324a0;
        case 0x3324a4u: goto label_3324a4;
        case 0x3324a8u: goto label_3324a8;
        case 0x3324acu: goto label_3324ac;
        case 0x3324b0u: goto label_3324b0;
        case 0x3324b4u: goto label_3324b4;
        case 0x3324b8u: goto label_3324b8;
        case 0x3324bcu: goto label_3324bc;
        case 0x3324c0u: goto label_3324c0;
        case 0x3324c4u: goto label_3324c4;
        case 0x3324c8u: goto label_3324c8;
        case 0x3324ccu: goto label_3324cc;
        case 0x3324d0u: goto label_3324d0;
        case 0x3324d4u: goto label_3324d4;
        case 0x3324d8u: goto label_3324d8;
        case 0x3324dcu: goto label_3324dc;
        case 0x3324e0u: goto label_3324e0;
        case 0x3324e4u: goto label_3324e4;
        case 0x3324e8u: goto label_3324e8;
        case 0x3324ecu: goto label_3324ec;
        case 0x3324f0u: goto label_3324f0;
        case 0x3324f4u: goto label_3324f4;
        case 0x3324f8u: goto label_3324f8;
        case 0x3324fcu: goto label_3324fc;
        case 0x332500u: goto label_332500;
        case 0x332504u: goto label_332504;
        default: break;
    }

    ctx->pc = 0x332398u;

label_332398:
    // 0x332398: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x332398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_33239c:
    // 0x33239c: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x33239cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
label_3323a0:
    // 0x3323a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3323a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3323a4:
    // 0x3323a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3323a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3323a8:
    // 0x3323a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3323a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3323ac:
    // 0x3323ac: 0x246384b8  addiu       $v1, $v1, -0x7B48
    ctx->pc = 0x3323acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935736));
label_3323b0:
    // 0x3323b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3323b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3323b4:
    // 0x3323b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3323b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3323b8:
    // 0x3323b8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3323b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3323bc:
    // 0x3323bc: 0x82050001  lb          $a1, 0x1($s0)
    ctx->pc = 0x3323bcu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_3323c0:
    // 0x3323c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3323c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3323c4:
    // 0x3323c4: 0x14a40016  bne         $a1, $a0, . + 4 + (0x16 << 2)
label_3323c8:
    if (ctx->pc == 0x3323C8u) {
        ctx->pc = 0x3323C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3323C4u;
        // 0x3323c8: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3323CCu;
        goto label_3323cc;
    }
    ctx->pc = 0x3323C4u;
    {
        const bool branch_taken_0x3323c4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x3323C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3323C4u;
        // 0x3323c8: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3323c4) {
            ctx->pc = 0x332420u;
            goto label_332420;
        }
    }
    ctx->pc = 0x3323CCu;
label_3323cc:
    // 0x3323cc: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x3323ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3323d0:
    // 0x3323d0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3323d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3323d4:
    // 0x3323d4: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x3323d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_3323d8:
    // 0x3323d8: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3323d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_3323dc:
    // 0x3323dc: 0x50600011  beql        $v1, $zero, . + 4 + (0x11 << 2)
label_3323e0:
    if (ctx->pc == 0x3323E0u) {
        ctx->pc = 0x3323E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3323DCu;
        // 0x3323e0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3323E4u;
        goto label_3323e4;
    }
    ctx->pc = 0x3323DCu;
    {
        const bool branch_taken_0x3323dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3323dc) {
            ctx->pc = 0x3323E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3323DCu;
            // 0x3323e0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x332424u;
            goto label_332424;
        }
    }
    ctx->pc = 0x3323E4u;
label_3323e4:
    // 0x3323e4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3323e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3323e8:
    // 0x3323e8: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x3323e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3323ec:
    // 0x3323ec: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3323ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3323f0:
    // 0x3323f0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x3323f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_3323f4:
    // 0x3323f4: 0xc0ec190  jal         func_3B0640
label_3323f8:
    if (ctx->pc == 0x3323F8u) {
        ctx->pc = 0x3323F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3323F4u;
        // 0x3323f8: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3323FCu;
        goto label_3323fc;
    }
    ctx->pc = 0x3323F4u;
    SET_GPR_U32(ctx, 31, 0x3323FCu);
    ctx->pc = 0x3323F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3323F4u;
    // 0x3323f8: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0640u, 0x3323F4u, 0x3323FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3323FCu;
label_3323fc:
    // 0x3323fc: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x3323fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_332400:
    // 0x332400: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x332400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_332404:
    // 0x332404: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x332404u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_332408:
    // 0x332408: 0x60f809  jalr        $v1
label_33240c:
    if (ctx->pc == 0x33240Cu) {
        ctx->pc = 0x33240Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332408u;
        // 0x33240c: 0x8e060010  lw          $a2, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x332410u;
        goto label_332410;
    }
    ctx->pc = 0x332408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x332410u);
        ctx->pc = 0x33240Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332408u;
        // 0x33240c: 0x8e060010  lw          $a2, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x332408u, 0x332410u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x332410u;
label_332410:
    // 0x332410: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x332410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_332414:
    // 0x332414: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x332414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_332418:
    // 0x332418: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x332418u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
label_33241c:
    // 0x33241c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x33241cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_332420:
    // 0x332420: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x332420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_332424:
    // 0x332424: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x332424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
label_332428:
    // 0x332428: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x332428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
label_33242c:
    // 0x33242c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x33242cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_332430:
    // 0x332430: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x332430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_332434:
    // 0x332434: 0x54440030  bnel        $v0, $a0, . + 4 + (0x30 << 2)
label_332438:
    if (ctx->pc == 0x332438u) {
        ctx->pc = 0x332438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332434u;
        // 0x332438: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33243Cu;
        goto label_33243c;
    }
    ctx->pc = 0x332434u;
    {
        const bool branch_taken_0x332434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x332434) {
            ctx->pc = 0x332438u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x332434u;
            // 0x332438: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3324F8u;
            goto label_3324f8;
        }
    }
    ctx->pc = 0x33243Cu;
label_33243c:
    // 0x33243c: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x33243cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
label_332440:
    // 0x332440: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x332440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_332444:
    // 0x332444: 0x8c4384ac  lw          $v1, -0x7B54($v0)
    ctx->pc = 0x332444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935724)));
label_332448:
    // 0x332448: 0x5464002b  bnel        $v1, $a0, . + 4 + (0x2B << 2)
label_33244c:
    if (ctx->pc == 0x33244Cu) {
        ctx->pc = 0x33244Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332448u;
        // 0x33244c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x332450u;
        goto label_332450;
    }
    ctx->pc = 0x332448u;
    {
        const bool branch_taken_0x332448 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x332448) {
            ctx->pc = 0x33244Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x332448u;
            // 0x33244c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3324F8u;
            goto label_3324f8;
        }
    }
    ctx->pc = 0x332450u;
label_332450:
    // 0x332450: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x332450u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_332454:
    // 0x332454: 0x26110030  addiu       $s1, $s0, 0x30
    ctx->pc = 0x332454u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_332458:
    // 0x332458: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x332458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_33245c:
    // 0x33245c: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x33245cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_332460:
    // 0x332460: 0x40f809  jalr        $v0
label_332464:
    if (ctx->pc == 0x332464u) {
        ctx->pc = 0x332464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332460u;
        // 0x332464: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x332468u;
        goto label_332468;
    }
    ctx->pc = 0x332460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x332468u);
        ctx->pc = 0x332464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332460u;
        // 0x332464: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x332460u, 0x332468u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x332468u;
label_332468:
    // 0x332468: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x332468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_33246c:
    // 0x33246c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x33246cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_332470:
    // 0x332470: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x332470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_332474:
    // 0x332474: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x332474u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_332478:
    // 0x332478: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x332478u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_33247c:
    // 0x33247c: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x33247cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
label_332480:
    // 0x332480: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x332480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_332484:
    // 0x332484: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x332484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_332488:
    // 0x332488: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x332488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_33248c:
    // 0x33248c: 0xc0ec144  jal         func_3B0510
label_332490:
    if (ctx->pc == 0x332490u) {
        ctx->pc = 0x332490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33248Cu;
        // 0x332490: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x332494u;
        goto label_332494;
    }
    ctx->pc = 0x33248Cu;
    SET_GPR_U32(ctx, 31, 0x332494u);
    ctx->pc = 0x332490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33248Cu;
    // 0x332490: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0510u, 0x33248Cu, 0x332494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332494u;
label_332494:
    // 0x332494: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x332494u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_332498:
    // 0x332498: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x332498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_33249c:
    // 0x33249c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x33249cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3324a0:
    // 0x3324a0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x3324a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_3324a4:
    // 0x3324a4: 0xc0ec190  jal         func_3B0640
label_3324a8:
    if (ctx->pc == 0x3324A8u) {
        ctx->pc = 0x3324A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3324A4u;
        // 0x3324a8: 0x24a5003f  addiu       $a1, $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3324ACu;
        goto label_3324ac;
    }
    ctx->pc = 0x3324A4u;
    SET_GPR_U32(ctx, 31, 0x3324ACu);
    ctx->pc = 0x3324A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3324A4u;
    // 0x3324a8: 0x24a5003f  addiu       $a1, $a1, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0640u, 0x3324A4u, 0x3324ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3324ACu;
label_3324ac:
    // 0x3324ac: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x3324acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3324b0:
    // 0x3324b0: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x3324b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
label_3324b4:
    // 0x3324b4: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x3324b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_3324b8:
    // 0x3324b8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3324b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3324bc:
    // 0x3324bc: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x3324bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_3324c0:
    // 0x3324c0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3324c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3324c4:
    // 0x3324c4: 0xae040034  sw          $a0, 0x34($s0)
    ctx->pc = 0x3324c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 4));
label_3324c8:
    // 0x3324c8: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x3324c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
label_3324cc:
    // 0x3324cc: 0xae050038  sw          $a1, 0x38($s0)
    ctx->pc = 0x3324ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 5));
label_3324d0:
    // 0x3324d0: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x3324d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
label_3324d4:
    // 0x3324d4: 0x0  nop
    ctx->pc = 0x3324d4u;
    // NOP
label_3324d8:
    // 0x3324d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3324d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3324dc:
    // 0x3324dc: 0xc0ec852  jal         func_3B2148
label_3324e0:
    if (ctx->pc == 0x3324E0u) {
        ctx->pc = 0x3324E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3324DCu;
        // 0x3324e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3324E4u;
        goto label_3324e4;
    }
    ctx->pc = 0x3324DCu;
    SET_GPR_U32(ctx, 31, 0x3324E4u);
    ctx->pc = 0x3324E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3324DCu;
    // 0x3324e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2148u, 0x3324DCu, 0x3324E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3324E4u;
label_3324e4:
    // 0x3324e4: 0x1040fffc  beqz        $v0, . + 4 + (-0x4 << 2)
label_3324e8:
    if (ctx->pc == 0x3324E8u) {
        ctx->pc = 0x3324E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3324E4u;
        // 0x3324e8: 0xae020040  sw          $v0, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3324ECu;
        goto label_3324ec;
    }
    ctx->pc = 0x3324E4u;
    {
        const bool branch_taken_0x3324e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3324E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3324E4u;
        // 0x3324e8: 0xae020040  sw          $v0, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3324e4) {
            ctx->pc = 0x3324D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3324d8;
        }
    }
    ctx->pc = 0x3324ECu;
label_3324ec:
    // 0x3324ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3324ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3324f0:
    // 0x3324f0: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x3324f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_3324f4:
    // 0x3324f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3324f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3324f8:
    // 0x3324f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3324f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3324fc:
    // 0x3324fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3324fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_332500:
    // 0x332500: 0x3e00008  jr          $ra
label_332504:
    if (ctx->pc == 0x332504u) {
        ctx->pc = 0x332504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332500u;
        // 0x332504: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x332508u;
        goto label_fallthrough_0x332500;
    }
    ctx->pc = 0x332500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x332504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332500u;
        // 0x332504: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x332500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x332500:
    ctx->pc = 0x332508u;
}
