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

// Function: func_00327568
// Address: 0x327568 - 0x3276a8
void func_00327568_0x327568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00327568_0x327568");
#endif

    switch (ctx->pc) {
        case 0x327568u: goto label_327568;
        case 0x32756cu: goto label_32756c;
        case 0x327570u: goto label_327570;
        case 0x327574u: goto label_327574;
        case 0x327578u: goto label_327578;
        case 0x32757cu: goto label_32757c;
        case 0x327580u: goto label_327580;
        case 0x327584u: goto label_327584;
        case 0x327588u: goto label_327588;
        case 0x32758cu: goto label_32758c;
        case 0x327590u: goto label_327590;
        case 0x327594u: goto label_327594;
        case 0x327598u: goto label_327598;
        case 0x32759cu: goto label_32759c;
        case 0x3275a0u: goto label_3275a0;
        case 0x3275a4u: goto label_3275a4;
        case 0x3275a8u: goto label_3275a8;
        case 0x3275acu: goto label_3275ac;
        case 0x3275b0u: goto label_3275b0;
        case 0x3275b4u: goto label_3275b4;
        case 0x3275b8u: goto label_3275b8;
        case 0x3275bcu: goto label_3275bc;
        case 0x3275c0u: goto label_3275c0;
        case 0x3275c4u: goto label_3275c4;
        case 0x3275c8u: goto label_3275c8;
        case 0x3275ccu: goto label_3275cc;
        case 0x3275d0u: goto label_3275d0;
        case 0x3275d4u: goto label_3275d4;
        case 0x3275d8u: goto label_3275d8;
        case 0x3275dcu: goto label_3275dc;
        case 0x3275e0u: goto label_3275e0;
        case 0x3275e4u: goto label_3275e4;
        case 0x3275e8u: goto label_3275e8;
        case 0x3275ecu: goto label_3275ec;
        case 0x3275f0u: goto label_3275f0;
        case 0x3275f4u: goto label_3275f4;
        case 0x3275f8u: goto label_3275f8;
        case 0x3275fcu: goto label_3275fc;
        case 0x327600u: goto label_327600;
        case 0x327604u: goto label_327604;
        case 0x327608u: goto label_327608;
        case 0x32760cu: goto label_32760c;
        case 0x327610u: goto label_327610;
        case 0x327614u: goto label_327614;
        case 0x327618u: goto label_327618;
        case 0x32761cu: goto label_32761c;
        case 0x327620u: goto label_327620;
        case 0x327624u: goto label_327624;
        case 0x327628u: goto label_327628;
        case 0x32762cu: goto label_32762c;
        case 0x327630u: goto label_327630;
        case 0x327634u: goto label_327634;
        case 0x327638u: goto label_327638;
        case 0x32763cu: goto label_32763c;
        case 0x327640u: goto label_327640;
        case 0x327644u: goto label_327644;
        case 0x327648u: goto label_327648;
        case 0x32764cu: goto label_32764c;
        case 0x327650u: goto label_327650;
        case 0x327654u: goto label_327654;
        case 0x327658u: goto label_327658;
        case 0x32765cu: goto label_32765c;
        case 0x327660u: goto label_327660;
        case 0x327664u: goto label_327664;
        case 0x327668u: goto label_327668;
        case 0x32766cu: goto label_32766c;
        case 0x327670u: goto label_327670;
        case 0x327674u: goto label_327674;
        case 0x327678u: goto label_327678;
        case 0x32767cu: goto label_32767c;
        case 0x327680u: goto label_327680;
        case 0x327684u: goto label_327684;
        case 0x327688u: goto label_327688;
        case 0x32768cu: goto label_32768c;
        case 0x327690u: goto label_327690;
        case 0x327694u: goto label_327694;
        case 0x327698u: goto label_327698;
        case 0x32769cu: goto label_32769c;
        case 0x3276a0u: goto label_3276a0;
        case 0x3276a4u: goto label_3276a4;
        default: break;
    }

    ctx->pc = 0x327568u;

label_327568:
    // 0x327568: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x327568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_32756c:
    // 0x32756c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x32756cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_327570:
    // 0x327570: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x327570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_327574:
    // 0x327574: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x327574u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_327578:
    // 0x327578: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x327578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_32757c:
    // 0x32757c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x32757cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_327580:
    // 0x327580: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x327580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_327584:
    // 0x327584: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x327584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_327588:
    // 0x327588: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x327588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_32758c:
    // 0x32758c: 0x8e4200a4  lw          $v0, 0xA4($s2)
    ctx->pc = 0x32758cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
label_327590:
    // 0x327590: 0x82430002  lb          $v1, 0x2($s2)
    ctx->pc = 0x327590u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_327594:
    // 0x327594: 0x28840  sll         $s1, $v0, 1
    ctx->pc = 0x327594u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_327598:
    // 0x327598: 0x1860001a  blez        $v1, . + 4 + (0x1A << 2)
label_32759c:
    if (ctx->pc == 0x32759Cu) {
        ctx->pc = 0x32759Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327598u;
        // 0x32759c: 0x92440002  lbu         $a0, 0x2($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3275A0u;
        goto label_3275a0;
    }
    ctx->pc = 0x327598u;
    {
        const bool branch_taken_0x327598 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x32759Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327598u;
        // 0x32759c: 0x92440002  lbu         $a0, 0x2($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327598) {
            ctx->pc = 0x327604u;
            goto label_327604;
        }
    }
    ctx->pc = 0x3275A0u;
label_3275a0:
    // 0x3275a0: 0x2650000c  addiu       $s0, $s2, 0xC
    ctx->pc = 0x3275a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_3275a4:
    // 0x3275a4: 0x0  nop
    ctx->pc = 0x3275a4u;
    // NOP
label_3275a8:
    // 0x3275a8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3275a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3275ac:
    // 0x3275ac: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x3275acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_3275b0:
    // 0x3275b0: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x3275b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3275b4:
    // 0x3275b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3275b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3275b8:
    // 0x3275b8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3275b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3275bc:
    // 0x3275bc: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x3275bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_3275c0:
    // 0x3275c0: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x3275c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_3275c4:
    // 0x3275c4: 0x40f809  jalr        $v0
label_3275c8:
    if (ctx->pc == 0x3275C8u) {
        ctx->pc = 0x3275C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3275C4u;
        // 0x3275c8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3275CCu;
        goto label_3275cc;
    }
    ctx->pc = 0x3275C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3275CCu);
        ctx->pc = 0x3275C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3275C4u;
        // 0x3275c8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3275C4u, 0x3275CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3275CCu;
label_3275cc:
    // 0x3275cc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3275ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3275d0:
    // 0x3275d0: 0x8fa80004  lw          $t0, 0x4($sp)
    ctx->pc = 0x3275d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3275d4:
    // 0x3275d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3275d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3275d8:
    // 0x3275d8: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x3275d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3275dc:
    // 0x3275dc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3275dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3275e0:
    // 0x3275e0: 0x228102a  slt         $v0, $s1, $t0
    ctx->pc = 0x3275e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_3275e4:
    // 0x3275e4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x3275e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_3275e8:
    // 0x3275e8: 0x8ce3001c  lw          $v1, 0x1C($a3)
    ctx->pc = 0x3275e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
label_3275ec:
    // 0x3275ec: 0x60f809  jalr        $v1
label_3275f0:
    if (ctx->pc == 0x3275F0u) {
        ctx->pc = 0x3275F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3275ECu;
        // 0x3275f0: 0x102880a  movz        $s1, $t0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3275F4u;
        goto label_3275f4;
    }
    ctx->pc = 0x3275ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3275F4u);
        ctx->pc = 0x3275F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3275ECu;
        // 0x3275f0: 0x102880a  movz        $s1, $t0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3275ECu, 0x3275F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3275F4u;
label_3275f4:
    // 0x3275f4: 0x82420002  lb          $v0, 0x2($s2)
    ctx->pc = 0x3275f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_3275f8:
    // 0x3275f8: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x3275f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3275fc:
    // 0x3275fc: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_327600:
    if (ctx->pc == 0x327600u) {
        ctx->pc = 0x327600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3275FCu;
        // 0x327600: 0x92440002  lbu         $a0, 0x2($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327604u;
        goto label_327604;
    }
    ctx->pc = 0x3275FCu;
    {
        const bool branch_taken_0x3275fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x327600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3275FCu;
        // 0x327600: 0x92440002  lbu         $a0, 0x2($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3275fc) {
            ctx->pc = 0x3275A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3275a8;
        }
    }
    ctx->pc = 0x327604u;
label_327604:
    // 0x327604: 0x1117c2  srl         $v0, $s1, 31
    ctx->pc = 0x327604u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 31));
label_327608:
    // 0x327608: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x327608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_32760c:
    // 0x32760c: 0x2a043  sra         $s4, $v0, 1
    ctx->pc = 0x32760cu;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 2), 1));
label_327610:
    // 0x327610: 0x148840  sll         $s1, $s4, 1
    ctx->pc = 0x327610u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
label_327614:
    // 0x327614: 0x1a20001c  blez        $s1, . + 4 + (0x1C << 2)
label_327618:
    if (ctx->pc == 0x327618u) {
        ctx->pc = 0x327618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327614u;
        // 0x327618: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32761Cu;
        goto label_32761c;
    }
    ctx->pc = 0x327614u;
    {
        const bool branch_taken_0x327614 = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x327618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327614u;
        // 0x327618: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327614) {
            ctx->pc = 0x327688u;
            goto label_327688;
        }
    }
    ctx->pc = 0x32761Cu;
label_32761c:
    // 0x32761c: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x32761cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_327620:
    // 0x327620: 0x18400015  blez        $v0, . + 4 + (0x15 << 2)
label_327624:
    if (ctx->pc == 0x327624u) {
        ctx->pc = 0x327624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327620u;
        // 0x327624: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327628u;
        goto label_327628;
    }
    ctx->pc = 0x327620u;
    {
        const bool branch_taken_0x327620 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x327624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327620u;
        // 0x327624: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327620) {
            ctx->pc = 0x327678u;
            goto label_327678;
        }
    }
    ctx->pc = 0x327628u;
label_327628:
    // 0x327628: 0x2650000c  addiu       $s0, $s2, 0xC
    ctx->pc = 0x327628u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_32762c:
    // 0x32762c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x32762cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_327630:
    // 0x327630: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x327630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_327634:
    // 0x327634: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x327634u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_327638:
    // 0x327638: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x327638u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_32763c:
    // 0x32763c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x32763cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_327640:
    // 0x327640: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x327640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_327644:
    // 0x327644: 0x40f809  jalr        $v0
label_327648:
    if (ctx->pc == 0x327648u) {
        ctx->pc = 0x327648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327644u;
        // 0x327648: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32764Cu;
        goto label_32764c;
    }
    ctx->pc = 0x327644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32764Cu);
        ctx->pc = 0x327648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327644u;
        // 0x327648: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327644u, 0x32764Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32764Cu;
label_32764c:
    // 0x32764c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x32764cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_327650:
    // 0x327650: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x327650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_327654:
    // 0x327654: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x327654u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_327658:
    // 0x327658: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x327658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_32765c:
    // 0x32765c: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x32765cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_327660:
    // 0x327660: 0x60f809  jalr        $v1
label_327664:
    if (ctx->pc == 0x327664u) {
        ctx->pc = 0x327664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327660u;
        // 0x327664: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327668u;
        goto label_327668;
    }
    ctx->pc = 0x327660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x327668u);
        ctx->pc = 0x327664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327660u;
        // 0x327664: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327660u, 0x327668u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x327668u;
label_327668:
    // 0x327668: 0x82420002  lb          $v0, 0x2($s2)
    ctx->pc = 0x327668u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_32766c:
    // 0x32766c: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x32766cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_327670:
    // 0x327670: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
label_327674:
    if (ctx->pc == 0x327674u) {
        ctx->pc = 0x327674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327670u;
        // 0x327674: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327678u;
        goto label_327678;
    }
    ctx->pc = 0x327670u;
    {
        const bool branch_taken_0x327670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x327670) {
            ctx->pc = 0x327674u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x327670u;
            // 0x327674: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x327630u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_327630;
        }
    }
    ctx->pc = 0x327678u;
label_327678:
    // 0x327678: 0x8e4200a4  lw          $v0, 0xA4($s2)
    ctx->pc = 0x327678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
label_32767c:
    // 0x32767c: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x32767cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_327680:
    // 0x327680: 0xae4200a4  sw          $v0, 0xA4($s2)
    ctx->pc = 0x327680u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 164), GPR_U32(ctx, 2));
label_327684:
    // 0x327684: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x327684u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_327688:
    // 0x327688: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x327688u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_32768c:
    // 0x32768c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x32768cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_327690:
    // 0x327690: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x327690u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_327694:
    // 0x327694: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x327694u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_327698:
    // 0x327698: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x327698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_32769c:
    // 0x32769c: 0x3e00008  jr          $ra
label_3276a0:
    if (ctx->pc == 0x3276A0u) {
        ctx->pc = 0x3276A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32769Cu;
        // 0x3276a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3276A4u;
        goto label_3276a4;
    }
    ctx->pc = 0x32769Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3276A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32769Cu;
        // 0x3276a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32769Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3276A4u;
label_3276a4:
    // 0x3276a4: 0x0  nop
    ctx->pc = 0x3276a4u;
    // NOP
    ctx->pc = 0x3276a8u;
}
