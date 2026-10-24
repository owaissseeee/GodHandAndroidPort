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

// Function: func_00338478
// Address: 0x338478 - 0x338638
void func_00338478_0x338478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00338478_0x338478");
#endif

    switch (ctx->pc) {
        case 0x338478u: goto label_338478;
        case 0x33847cu: goto label_33847c;
        case 0x338480u: goto label_338480;
        case 0x338484u: goto label_338484;
        case 0x338488u: goto label_338488;
        case 0x33848cu: goto label_33848c;
        case 0x338490u: goto label_338490;
        case 0x338494u: goto label_338494;
        case 0x338498u: goto label_338498;
        case 0x33849cu: goto label_33849c;
        case 0x3384a0u: goto label_3384a0;
        case 0x3384a4u: goto label_3384a4;
        case 0x3384a8u: goto label_3384a8;
        case 0x3384acu: goto label_3384ac;
        case 0x3384b0u: goto label_3384b0;
        case 0x3384b4u: goto label_3384b4;
        case 0x3384b8u: goto label_3384b8;
        case 0x3384bcu: goto label_3384bc;
        case 0x3384c0u: goto label_3384c0;
        case 0x3384c4u: goto label_3384c4;
        case 0x3384c8u: goto label_3384c8;
        case 0x3384ccu: goto label_3384cc;
        case 0x3384d0u: goto label_3384d0;
        case 0x3384d4u: goto label_3384d4;
        case 0x3384d8u: goto label_3384d8;
        case 0x3384dcu: goto label_3384dc;
        case 0x3384e0u: goto label_3384e0;
        case 0x3384e4u: goto label_3384e4;
        case 0x3384e8u: goto label_3384e8;
        case 0x3384ecu: goto label_3384ec;
        case 0x3384f0u: goto label_3384f0;
        case 0x3384f4u: goto label_3384f4;
        case 0x3384f8u: goto label_3384f8;
        case 0x3384fcu: goto label_3384fc;
        case 0x338500u: goto label_338500;
        case 0x338504u: goto label_338504;
        case 0x338508u: goto label_338508;
        case 0x33850cu: goto label_33850c;
        case 0x338510u: goto label_338510;
        case 0x338514u: goto label_338514;
        case 0x338518u: goto label_338518;
        case 0x33851cu: goto label_33851c;
        case 0x338520u: goto label_338520;
        case 0x338524u: goto label_338524;
        case 0x338528u: goto label_338528;
        case 0x33852cu: goto label_33852c;
        case 0x338530u: goto label_338530;
        case 0x338534u: goto label_338534;
        case 0x338538u: goto label_338538;
        case 0x33853cu: goto label_33853c;
        case 0x338540u: goto label_338540;
        case 0x338544u: goto label_338544;
        case 0x338548u: goto label_338548;
        case 0x33854cu: goto label_33854c;
        case 0x338550u: goto label_338550;
        case 0x338554u: goto label_338554;
        case 0x338558u: goto label_338558;
        case 0x33855cu: goto label_33855c;
        case 0x338560u: goto label_338560;
        case 0x338564u: goto label_338564;
        case 0x338568u: goto label_338568;
        case 0x33856cu: goto label_33856c;
        case 0x338570u: goto label_338570;
        case 0x338574u: goto label_338574;
        case 0x338578u: goto label_338578;
        case 0x33857cu: goto label_33857c;
        case 0x338580u: goto label_338580;
        case 0x338584u: goto label_338584;
        case 0x338588u: goto label_338588;
        case 0x33858cu: goto label_33858c;
        case 0x338590u: goto label_338590;
        case 0x338594u: goto label_338594;
        case 0x338598u: goto label_338598;
        case 0x33859cu: goto label_33859c;
        case 0x3385a0u: goto label_3385a0;
        case 0x3385a4u: goto label_3385a4;
        case 0x3385a8u: goto label_3385a8;
        case 0x3385acu: goto label_3385ac;
        case 0x3385b0u: goto label_3385b0;
        case 0x3385b4u: goto label_3385b4;
        case 0x3385b8u: goto label_3385b8;
        case 0x3385bcu: goto label_3385bc;
        case 0x3385c0u: goto label_3385c0;
        case 0x3385c4u: goto label_3385c4;
        case 0x3385c8u: goto label_3385c8;
        case 0x3385ccu: goto label_3385cc;
        case 0x3385d0u: goto label_3385d0;
        case 0x3385d4u: goto label_3385d4;
        case 0x3385d8u: goto label_3385d8;
        case 0x3385dcu: goto label_3385dc;
        case 0x3385e0u: goto label_3385e0;
        case 0x3385e4u: goto label_3385e4;
        case 0x3385e8u: goto label_3385e8;
        case 0x3385ecu: goto label_3385ec;
        case 0x3385f0u: goto label_3385f0;
        case 0x3385f4u: goto label_3385f4;
        case 0x3385f8u: goto label_3385f8;
        case 0x3385fcu: goto label_3385fc;
        case 0x338600u: goto label_338600;
        case 0x338604u: goto label_338604;
        case 0x338608u: goto label_338608;
        case 0x33860cu: goto label_33860c;
        case 0x338610u: goto label_338610;
        case 0x338614u: goto label_338614;
        case 0x338618u: goto label_338618;
        case 0x33861cu: goto label_33861c;
        case 0x338620u: goto label_338620;
        case 0x338624u: goto label_338624;
        case 0x338628u: goto label_338628;
        case 0x33862cu: goto label_33862c;
        case 0x338630u: goto label_338630;
        case 0x338634u: goto label_338634;
        default: break;
    }

    ctx->pc = 0x338478u;

label_338478:
    // 0x338478: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x338478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_33847c:
    // 0x33847c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33847cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_338480:
    // 0x338480: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x338480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_338484:
    // 0x338484: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x338484u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_338488:
    // 0x338488: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x338488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_33848c:
    // 0x33848c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x33848cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_338490:
    // 0x338490: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x338490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_338494:
    // 0x338494: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x338494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_338498:
    // 0x338498: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x338498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_33849c:
    // 0x33849c: 0x82220058  lb          $v0, 0x58($s1)
    ctx->pc = 0x33849cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 88)));
label_3384a0:
    // 0x3384a0: 0x1443005d  bne         $v0, $v1, . + 4 + (0x5D << 2)
label_3384a4:
    if (ctx->pc == 0x3384A4u) {
        ctx->pc = 0x3384A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3384A0u;
        // 0x3384a4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3384A8u;
        goto label_3384a8;
    }
    ctx->pc = 0x3384A0u;
    {
        const bool branch_taken_0x3384a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3384A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3384A0u;
        // 0x3384a4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3384a0) {
            ctx->pc = 0x338618u;
            goto label_338618;
        }
    }
    ctx->pc = 0x3384A8u;
label_3384a8:
    // 0x3384a8: 0x82220052  lb          $v0, 0x52($s1)
    ctx->pc = 0x3384a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 82)));
label_3384ac:
    // 0x3384ac: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3384acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3384b0:
    // 0x3384b0: 0x92230052  lbu         $v1, 0x52($s1)
    ctx->pc = 0x3384b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 82)));
label_3384b4:
    // 0x3384b4: 0x18400018  blez        $v0, . + 4 + (0x18 << 2)
label_3384b8:
    if (ctx->pc == 0x3384B8u) {
        ctx->pc = 0x3384B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3384B4u;
        // 0x3384b8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3384BCu;
        goto label_3384bc;
    }
    ctx->pc = 0x3384B4u;
    {
        const bool branch_taken_0x3384b4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x3384B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3384B4u;
        // 0x3384b8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3384b4) {
            ctx->pc = 0x338518u;
            goto label_338518;
        }
    }
    ctx->pc = 0x3384BCu;
label_3384bc:
    // 0x3384bc: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x3384bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3384c0:
    // 0x3384c0: 0x26300008  addiu       $s0, $s1, 0x8
    ctx->pc = 0x3384c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_3384c4:
    // 0x3384c4: 0x0  nop
    ctx->pc = 0x3384c4u;
    // NOP
label_3384c8:
    // 0x3384c8: 0xc0d004a  jal         func_340128
label_3384cc:
    if (ctx->pc == 0x3384CCu) {
        ctx->pc = 0x3384CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3384C8u;
        // 0x3384cc: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3384D0u;
        goto label_3384d0;
    }
    ctx->pc = 0x3384C8u;
    SET_GPR_U32(ctx, 31, 0x3384D0u);
    ctx->pc = 0x3384CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3384C8u;
    // 0x3384cc: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340128u, 0x3384C8u, 0x3384D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3384D0u;
label_3384d0:
    // 0x3384d0: 0x1054000b  beq         $v0, $s4, . + 4 + (0xB << 2)
label_3384d4:
    if (ctx->pc == 0x3384D4u) {
        ctx->pc = 0x3384D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3384D0u;
        // 0x3384d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3384D8u;
        goto label_3384d8;
    }
    ctx->pc = 0x3384D0u;
    {
        const bool branch_taken_0x3384d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x3384D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3384D0u;
        // 0x3384d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3384d0) {
            ctx->pc = 0x338500u;
            goto label_338500;
        }
    }
    ctx->pc = 0x3384D8u;
label_3384d8:
    // 0x3384d8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3384d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3384dc:
    // 0x3384dc: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x3384dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3384e0:
    // 0x3384e0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3384e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3384e4:
    // 0x3384e4: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x3384e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_3384e8:
    // 0x3384e8: 0x40f809  jalr        $v0
label_3384ec:
    if (ctx->pc == 0x3384ECu) {
        ctx->pc = 0x3384F0u;
        goto label_3384f0;
    }
    ctx->pc = 0x3384E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3384F0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3384E8u, 0x3384F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3384F0u;
label_3384f0:
    // 0x3384f0: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x3384f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_3384f4:
    // 0x3384f4: 0x26440001  addiu       $a0, $s2, 0x1
    ctx->pc = 0x3384f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3384f8:
    // 0x3384f8: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x3384f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_3384fc:
    // 0x3384fc: 0x82900a  movz        $s2, $a0, $v0
    ctx->pc = 0x3384fcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 4));
label_338500:
    // 0x338500: 0x82220052  lb          $v0, 0x52($s1)
    ctx->pc = 0x338500u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 82)));
label_338504:
    // 0x338504: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x338504u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_338508:
    // 0x338508: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x338508u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_33850c:
    // 0x33850c: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x33850cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_338510:
    // 0x338510: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
label_338514:
    if (ctx->pc == 0x338514u) {
        ctx->pc = 0x338514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338510u;
        // 0x338514: 0x92230052  lbu         $v1, 0x52($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 82)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x338518u;
        goto label_338518;
    }
    ctx->pc = 0x338510u;
    {
        const bool branch_taken_0x338510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x338514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338510u;
        // 0x338514: 0x92230052  lbu         $v1, 0x52($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 82)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338510) {
            ctx->pc = 0x3384C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3384c8;
        }
    }
    ctx->pc = 0x338518u;
label_338518:
    // 0x338518: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x338518u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_33851c:
    // 0x33851c: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x33851cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_338520:
    // 0x338520: 0x1642003d  bne         $s2, $v0, . + 4 + (0x3D << 2)
label_338524:
    if (ctx->pc == 0x338524u) {
        ctx->pc = 0x338524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338520u;
        // 0x338524: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x338528u;
        goto label_338528;
    }
    ctx->pc = 0x338520u;
    {
        const bool branch_taken_0x338520 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x338524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338520u;
        // 0x338524: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338520) {
            ctx->pc = 0x338618u;
            goto label_338618;
        }
    }
    ctx->pc = 0x338528u;
label_338528:
    // 0x338528: 0x1a40003b  blez        $s2, . + 4 + (0x3B << 2)
label_33852c:
    if (ctx->pc == 0x33852Cu) {
        ctx->pc = 0x33852Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338528u;
        // 0x33852c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x338530u;
        goto label_338530;
    }
    ctx->pc = 0x338528u;
    {
        const bool branch_taken_0x338528 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x33852Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338528u;
        // 0x33852c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338528) {
            ctx->pc = 0x338618u;
            goto label_338618;
        }
    }
    ctx->pc = 0x338530u;
label_338530:
    // 0x338530: 0x26320010  addiu       $s2, $s1, 0x10
    ctx->pc = 0x338530u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_338534:
    // 0x338534: 0x26300008  addiu       $s0, $s1, 0x8
    ctx->pc = 0x338534u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_338538:
    // 0x338538: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x338538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_33853c:
    // 0x33853c: 0x0  nop
    ctx->pc = 0x33853cu;
    // NOP
label_338540:
    // 0x338540: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x338540u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_338544:
    // 0x338544: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x338544u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_338548:
    // 0x338548: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x338548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33854c:
    // 0x33854c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x33854cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_338550:
    // 0x338550: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x338550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_338554:
    // 0x338554: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x338554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_338558:
    // 0x338558: 0x40f809  jalr        $v0
label_33855c:
    if (ctx->pc == 0x33855Cu) {
        ctx->pc = 0x33855Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338558u;
        // 0x33855c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x338560u;
        goto label_338560;
    }
    ctx->pc = 0x338558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x338560u);
        ctx->pc = 0x33855Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338558u;
        // 0x33855c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338558u, 0x338560u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x338560u;
label_338560:
    // 0x338560: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x338560u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_338564:
    // 0x338564: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x338564u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_338568:
    // 0x338568: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x338568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_33856c:
    // 0x33856c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x33856cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_338570:
    // 0x338570: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x338570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_338574:
    // 0x338574: 0x40f809  jalr        $v0
label_338578:
    if (ctx->pc == 0x338578u) {
        ctx->pc = 0x338578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338574u;
        // 0x338578: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33857Cu;
        goto label_33857c;
    }
    ctx->pc = 0x338574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33857Cu);
        ctx->pc = 0x338578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338574u;
        // 0x338578: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338574u, 0x33857Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33857Cu;
label_33857c:
    // 0x33857c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x33857cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_338580:
    // 0x338580: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x338580u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_338584:
    // 0x338584: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x338584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_338588:
    // 0x338588: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x338588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_33858c:
    // 0x33858c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x33858cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_338590:
    // 0x338590: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x338590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_338594:
    // 0x338594: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x338594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_338598:
    // 0x338598: 0x40f809  jalr        $v0
label_33859c:
    if (ctx->pc == 0x33859Cu) {
        ctx->pc = 0x33859Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338598u;
        // 0x33859c: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3385A0u;
        goto label_3385a0;
    }
    ctx->pc = 0x338598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3385A0u);
        ctx->pc = 0x33859Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338598u;
        // 0x33859c: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338598u, 0x3385A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3385A0u;
label_3385a0:
    // 0x3385a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3385a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3385a4:
    // 0x3385a4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x3385a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3385a8:
    // 0x3385a8: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x3385a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_3385ac:
    // 0x3385ac: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
label_3385b0:
    if (ctx->pc == 0x3385B0u) {
        ctx->pc = 0x3385B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3385ACu;
        // 0x3385b0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3385B4u;
        goto label_3385b4;
    }
    ctx->pc = 0x3385ACu;
    {
        const bool branch_taken_0x3385ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3385B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3385ACu;
        // 0x3385b0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3385ac) {
            ctx->pc = 0x3385D8u;
            goto label_3385d8;
        }
    }
    ctx->pc = 0x3385B4u;
label_3385b4:
    // 0x3385b4: 0x0  nop
    ctx->pc = 0x3385b4u;
    // NOP
label_3385b8:
    // 0x3385b8: 0x0  nop
    ctx->pc = 0x3385b8u;
    // NOP
label_3385bc:
    // 0x3385bc: 0x0  nop
    ctx->pc = 0x3385bcu;
    // NOP
label_3385c0:
    // 0x3385c0: 0x0  nop
    ctx->pc = 0x3385c0u;
    // NOP
label_3385c4:
    // 0x3385c4: 0x0  nop
    ctx->pc = 0x3385c4u;
    // NOP
label_3385c8:
    // 0x3385c8: 0x0  nop
    ctx->pc = 0x3385c8u;
    // NOP
label_3385cc:
    // 0x3385cc: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_3385d0:
    if (ctx->pc == 0x3385D0u) {
        ctx->pc = 0x3385D4u;
        goto label_3385d4;
    }
    ctx->pc = 0x3385CCu;
    {
        const bool branch_taken_0x3385cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3385cc) {
            ctx->pc = 0x3385B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3385b8;
        }
    }
    ctx->pc = 0x3385D4u;
label_3385d4:
    // 0x3385d4: 0x0  nop
    ctx->pc = 0x3385d4u;
    // NOP
label_3385d8:
    // 0x3385d8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3385d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3385dc:
    // 0x3385dc: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x3385dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_3385e0:
    // 0x3385e0: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x3385e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3385e4:
    // 0x3385e4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3385e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3385e8:
    // 0x3385e8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x3385e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_3385ec:
    // 0x3385ec: 0x40f809  jalr        $v0
label_3385f0:
    if (ctx->pc == 0x3385F0u) {
        ctx->pc = 0x3385F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3385ECu;
        // 0x3385f0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3385F4u;
        goto label_3385f4;
    }
    ctx->pc = 0x3385ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3385F4u);
        ctx->pc = 0x3385F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3385ECu;
        // 0x3385f0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3385ECu, 0x3385F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3385F4u;
label_3385f4:
    // 0x3385f4: 0xa220005b  sb          $zero, 0x5B($s1)
    ctx->pc = 0x3385f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 91), (uint8_t)GPR_U32(ctx, 0));
label_3385f8:
    // 0x3385f8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x3385f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3385fc:
    // 0x3385fc: 0xc0d00c2  jal         func_340308
label_338600:
    if (ctx->pc == 0x338600u) {
        ctx->pc = 0x338600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3385FCu;
        // 0x338600: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x338604u;
        goto label_338604;
    }
    ctx->pc = 0x3385FCu;
    SET_GPR_U32(ctx, 31, 0x338604u);
    ctx->pc = 0x338600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3385FCu;
    // 0x338600: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340308u, 0x3385FCu, 0x338604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338604u;
label_338604:
    // 0x338604: 0x82220052  lb          $v0, 0x52($s1)
    ctx->pc = 0x338604u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 82)));
label_338608:
    // 0x338608: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x338608u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_33860c:
    // 0x33860c: 0x5440ffcc  bnel        $v0, $zero, . + 4 + (-0x34 << 2)
label_338610:
    if (ctx->pc == 0x338610u) {
        ctx->pc = 0x338610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33860Cu;
        // 0x338610: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x338614u;
        goto label_338614;
    }
    ctx->pc = 0x33860Cu;
    {
        const bool branch_taken_0x33860c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33860c) {
            ctx->pc = 0x338610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33860Cu;
            // 0x338610: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x338540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_338540;
        }
    }
    ctx->pc = 0x338614u;
label_338614:
    // 0x338614: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x338614u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_338618:
    // 0x338618: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x338618u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_33861c:
    // 0x33861c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x33861cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_338620:
    // 0x338620: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x338620u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_338624:
    // 0x338624: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x338624u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_338628:
    // 0x338628: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x338628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_33862c:
    // 0x33862c: 0x3e00008  jr          $ra
label_338630:
    if (ctx->pc == 0x338630u) {
        ctx->pc = 0x338630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33862Cu;
        // 0x338630: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x338634u;
        goto label_338634;
    }
    ctx->pc = 0x33862Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33862Cu;
        // 0x338630: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33862Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338634u;
label_338634:
    // 0x338634: 0x0  nop
    ctx->pc = 0x338634u;
    // NOP
    ctx->pc = 0x338638u;
}
