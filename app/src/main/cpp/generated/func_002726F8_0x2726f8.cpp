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

// Function: func_002726F8
// Address: 0x2726f8 - 0x272dd8
void func_002726F8_0x2726f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002726F8_0x2726f8");
#endif

    switch (ctx->pc) {
        case 0x2727ecu: goto label_2727ec;
        case 0x272830u: goto label_272830;
        case 0x272924u: goto label_272924;
        case 0x272948u: goto label_272948;
        case 0x27297cu: goto label_27297c;
        case 0x2729a0u: goto label_2729a0;
        case 0x2729f0u: goto label_2729f0;
        case 0x272a14u: goto label_272a14;
        case 0x272a48u: goto label_272a48;
        case 0x272a6cu: goto label_272a6c;
        case 0x272a94u: goto label_272a94;
        case 0x272ac8u: goto label_272ac8;
        case 0x272afcu: goto label_272afc;
        case 0x272b30u: goto label_272b30;
        case 0x272b54u: goto label_272b54;
        case 0x272b78u: goto label_272b78;
        case 0x272ba4u: goto label_272ba4;
        case 0x272bd0u: goto label_272bd0;
        case 0x272c08u: goto label_272c08;
        case 0x272c34u: goto label_272c34;
        case 0x272c58u: goto label_272c58;
        case 0x272c7cu: goto label_272c7c;
        case 0x272ca0u: goto label_272ca0;
        case 0x272cc4u: goto label_272cc4;
        case 0x272ce8u: goto label_272ce8;
        case 0x272d0cu: goto label_272d0c;
        case 0x272d30u: goto label_272d30;
        case 0x272d54u: goto label_272d54;
        case 0x272d78u: goto label_272d78;
        default: break;
    }

    ctx->pc = 0x2726f8u;

    // 0x2726f8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2726f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2726fc: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x2726fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x272700: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x272700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x272704: 0x8c627a0c  lw          $v0, 0x7A0C($v1)
    ctx->pc = 0x272704u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A0Cu));
    // 0x272708: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x272708u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27270c: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x27270cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x272710: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x272710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x272714: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x272714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x272718: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x272718u;
    {
        const bool branch_taken_0x272718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27271Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272718u;
        // 0x27271c: 0xffbf0080  sd          $ra, 0x80($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272718) {
            ctx->pc = 0x272730u;
            goto label_272730;
        }
    }
    ctx->pc = 0x272720u;
    // 0x272720: 0x8e620564  lw          $v0, 0x564($s3)
    ctx->pc = 0x272720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1380)));
    // 0x272724: 0x38420244  xori        $v0, $v0, 0x244
    ctx->pc = 0x272724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)580);
    // 0x272728: 0x144001a4  bnez        $v0, . + 4 + (0x1A4 << 2)
    ctx->pc = 0x272728u;
    {
        const bool branch_taken_0x272728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27272Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272728u;
        // 0x27272c: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272728) {
            ctx->pc = 0x272DBCu;
            goto label_272dbc;
        }
    }
    ctx->pc = 0x272730u;
label_272730:
    // 0x272730: 0x8e6216d4  lw          $v0, 0x16D4($s3)
    ctx->pc = 0x272730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 5844)));
    // 0x272734: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x272734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x272738: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x272738u;
    {
        const bool branch_taken_0x272738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27273Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272738u;
        // 0x27273c: 0x8e630564  lw          $v1, 0x564($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272738) {
            ctx->pc = 0x27274Cu;
            goto label_27274c;
        }
    }
    ctx->pc = 0x272740u;
    // 0x272740: 0x38620244  xori        $v0, $v1, 0x244
    ctx->pc = 0x272740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)580);
    // 0x272744: 0x1440019d  bnez        $v0, . + 4 + (0x19D << 2)
    ctx->pc = 0x272744u;
    {
        const bool branch_taken_0x272744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x272748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272744u;
        // 0x272748: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272744) {
            ctx->pc = 0x272DBCu;
            goto label_272dbc;
        }
    }
    ctx->pc = 0x27274Cu;
label_27274c:
    // 0x27274c: 0x2463fe00  addiu       $v1, $v1, -0x200
    ctx->pc = 0x27274cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966784));
    // 0x272750: 0x2c62004c  sltiu       $v0, $v1, 0x4C
    ctx->pc = 0x272750u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)76) ? 1 : 0);
    // 0x272754: 0x10400198  beqz        $v0, . + 4 + (0x198 << 2)
    ctx->pc = 0x272754u;
    {
        const bool branch_taken_0x272754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x272758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272754u;
        // 0x272758: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272754) {
            ctx->pc = 0x272DB8u;
            goto label_272db8;
        }
    }
    ctx->pc = 0x27275Cu;
    // 0x27275c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x27275cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x272760: 0x24426690  addiu       $v0, $v0, 0x6690
    ctx->pc = 0x272760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26256));
    // 0x272764: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x272764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x272768: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x272768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27276c: 0x800008  jr          $a0
    ctx->pc = 0x27276Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x272774u: goto label_272774;
            case 0x27277Cu: goto label_27277c;
            case 0x272784u: goto label_272784;
            case 0x272DB8u: goto label_272db8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27276Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x272774u;
label_272774:
    // 0x272774: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x272774u;
    {
        const bool branch_taken_0x272774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272774u;
        // 0x272778: 0x2404001d  addiu       $a0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272774) {
            ctx->pc = 0x272788u;
            goto label_272788;
        }
    }
    ctx->pc = 0x27277Cu;
label_27277c:
    // 0x27277c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27277Cu;
    {
        const bool branch_taken_0x27277c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27277Cu;
        // 0x272780: 0x2404001e  addiu       $a0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27277c) {
            ctx->pc = 0x272788u;
            goto label_272788;
        }
    }
    ctx->pc = 0x272784u;
label_272784:
    // 0x272784: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x272784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_272788:
    // 0x272788: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x272788u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x27278c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27278cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272790: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x272790u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x272794: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x272794u;
    {
        const bool branch_taken_0x272794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x272798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272794u;
        // 0x272798: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272794) {
            ctx->pc = 0x2727A4u;
            goto label_2727a4;
        }
    }
    ctx->pc = 0x27279Cu;
    // 0x27279c: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x27279cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2727a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2727a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2727a4:
    // 0x2727a4: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x2727a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2727a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2727A8u;
    {
        const bool branch_taken_0x2727a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2727ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2727A8u;
        // 0x2727ac: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2727a8) {
            ctx->pc = 0x2727C0u;
            goto label_2727c0;
        }
    }
    ctx->pc = 0x2727B0u;
    // 0x2727b0: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x2727b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x2727b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2727b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2727b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2727B8u;
    {
        const bool branch_taken_0x2727b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2727BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2727B8u;
        // 0x2727bc: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2727b8) {
            ctx->pc = 0x2727C4u;
            goto label_2727c4;
        }
    }
    ctx->pc = 0x2727C0u;
label_2727c0:
    // 0x2727c0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2727c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2727c4:
    // 0x2727c4: 0x1240017d  beqz        $s2, . + 4 + (0x17D << 2)
    ctx->pc = 0x2727C4u;
    {
        const bool branch_taken_0x2727c4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2727C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2727C4u;
        // 0x2727c8: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2727c4) {
            ctx->pc = 0x272DBCu;
            goto label_272dbc;
        }
    }
    ctx->pc = 0x2727CCu;
    // 0x2727cc: 0x8e420154  lw          $v0, 0x154($s2)
    ctx->pc = 0x2727ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 340)));
    // 0x2727d0: 0x34420218  ori         $v0, $v0, 0x218
    ctx->pc = 0x2727d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)536);
    // 0x2727d4: 0xae420154  sw          $v0, 0x154($s2)
    ctx->pc = 0x2727d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 340), GPR_U32(ctx, 2));
    // 0x2727d8: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x2727d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2727dc: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x2727dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2727e0: 0xc66c0104  lwc1        $f12, 0x104($s3)
    ctx->pc = 0x2727e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2727e4: 0xc051e62  jal         func_147988
    ctx->pc = 0x2727E4u;
    SET_GPR_U32(ctx, 31, 0x2727ECu);
    ctx->pc = 0x2727E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2727E4u;
    // 0x2727e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x2727E4u, 0x2727ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2727ECu;
label_2727ec:
    // 0x2727ec: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x2727ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x2727f0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2727f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2727f4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2727f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2727f8: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x2727f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2727fc: 0x3c01bdcc  lui         $at, 0xBDCC
    ctx->pc = 0x2727fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48588 << 16));
    // 0x272800: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x272800u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x272804: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x272804u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x272808: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x272808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x27280c: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x27280cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x272810: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x272810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x272814: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x272814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x272818: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x272818u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27281c: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x27281cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x272820: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x272820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272824: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x272824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272828: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x272828u;
    SET_GPR_U32(ctx, 31, 0x272830u);
    ctx->pc = 0x27282Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272828u;
    // 0x27282c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x272828u, 0x272830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272830u;
label_272830:
    // 0x272830: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x272830u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x272834: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x272834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x272838: 0x8e4300d0  lw          $v1, 0xD0($s2)
    ctx->pc = 0x272838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
    // 0x27283c: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x27283cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x272840: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x272840u;
    {
        const bool branch_taken_0x272840 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x272844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272840u;
        // 0x272844: 0xc7a00060  lwc1        $f0, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x272840) {
            ctx->pc = 0x27285Cu;
            goto label_27285c;
        }
    }
    ctx->pc = 0x272848u;
    // 0x272848: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x272848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x27284c: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x27284cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x272850: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x272850u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x272854: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x272854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x272858: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x272858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_27285c:
    // 0x27285c: 0x26430100  addiu       $v1, $s2, 0x100
    ctx->pc = 0x27285cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
    // 0x272860: 0x26620100  addiu       $v0, $s3, 0x100
    ctx->pc = 0x272860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
    // 0x272864: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x272864u;
    {
        const bool branch_taken_0x272864 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x272864) {
            ctx->pc = 0x272884u;
            goto label_272884;
        }
    }
    ctx->pc = 0x27286Cu;
    // 0x27286c: 0xc6600100  lwc1        $f0, 0x100($s3)
    ctx->pc = 0x27286cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x272870: 0xe6400100  swc1        $f0, 0x100($s2)
    ctx->pc = 0x272870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 256), bits); }
    // 0x272874: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x272874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x272878: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x272878u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x27287c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x27287cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x272880: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x272880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_272884:
    // 0x272884: 0x3c01bf06  lui         $at, 0xBF06
    ctx->pc = 0x272884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48902 << 16));
    // 0x272888: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x272888u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x27288c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27288cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x272890: 0x8e63178c  lw          $v1, 0x178C($s3)
    ctx->pc = 0x272890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6028)));
    // 0x272894: 0xe6600130  swc1        $f0, 0x130($s3)
    ctx->pc = 0x272894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 304), bits); }
    // 0x272898: 0xae600134  sw          $zero, 0x134($s3)
    ctx->pc = 0x272898u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 308), GPR_U32(ctx, 0));
    // 0x27289c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x27289Cu;
    {
        const bool branch_taken_0x27289c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2728A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27289Cu;
        // 0x2728a0: 0xae600138  sw          $zero, 0x138($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 312), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27289c) {
            ctx->pc = 0x2728B0u;
            goto label_2728b0;
        }
    }
    ctx->pc = 0x2728A4u;
    // 0x2728a4: 0x8c620380  lw          $v0, 0x380($v1)
    ctx->pc = 0x2728a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 896)));
    // 0x2728a8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2728a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2728ac: 0xac620380  sw          $v0, 0x380($v1)
    ctx->pc = 0x2728acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 896), GPR_U32(ctx, 2));
label_2728b0:
    // 0x2728b0: 0x8e631790  lw          $v1, 0x1790($s3)
    ctx->pc = 0x2728b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6032)));
    // 0x2728b4: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2728B4u;
    {
        const bool branch_taken_0x2728b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2728b4) {
            ctx->pc = 0x2728B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2728B4u;
            // 0x2728b8: 0x8e641794  lw          $a0, 0x1794($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6036)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2728CCu;
            goto label_2728cc;
        }
    }
    ctx->pc = 0x2728BCu;
    // 0x2728bc: 0x8c620380  lw          $v0, 0x380($v1)
    ctx->pc = 0x2728bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 896)));
    // 0x2728c0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2728c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2728c4: 0xac620380  sw          $v0, 0x380($v1)
    ctx->pc = 0x2728c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 896), GPR_U32(ctx, 2));
    // 0x2728c8: 0x8e641794  lw          $a0, 0x1794($s3)
    ctx->pc = 0x2728c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6036)));
label_2728cc:
    // 0x2728cc: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2728CCu;
    {
        const bool branch_taken_0x2728cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2728cc) {
            ctx->pc = 0x2728D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2728CCu;
            // 0x2728d0: 0x8e620564  lw          $v0, 0x564($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2728ECu;
            goto label_2728ec;
        }
    }
    ctx->pc = 0x2728D4u;
    // 0x2728d4: 0x8c830380  lw          $v1, 0x380($a0)
    ctx->pc = 0x2728d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x2728d8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2728d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2728dc: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x2728dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x2728e0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2728e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2728e4: 0xac830380  sw          $v1, 0x380($a0)
    ctx->pc = 0x2728e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 3));
    // 0x2728e8: 0x8e620564  lw          $v0, 0x564($s3)
    ctx->pc = 0x2728e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1380)));
label_2728ec:
    // 0x2728ec: 0x2444fdff  addiu       $a0, $v0, -0x201
    ctx->pc = 0x2728ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966783));
    // 0x2728f0: 0x2c830047  sltiu       $v1, $a0, 0x47
    ctx->pc = 0x2728f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)71) ? 1 : 0);
    // 0x2728f4: 0x1060012c  beqz        $v1, . + 4 + (0x12C << 2)
    ctx->pc = 0x2728F4u;
    {
        const bool branch_taken_0x2728f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2728F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2728F4u;
        // 0x2728f8: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2728f4) {
            ctx->pc = 0x272DA8u;
            goto label_272da8;
        }
    }
    ctx->pc = 0x2728FCu;
    // 0x2728fc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2728fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x272900: 0x244267c0  addiu       $v0, $v0, 0x67C0
    ctx->pc = 0x272900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26560));
    // 0x272904: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x272904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x272908: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x272908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27290c: 0x800008  jr          $a0
    ctx->pc = 0x27290Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x272914u: goto label_272914;
            case 0x27296Cu: goto label_27296c;
            case 0x2729E0u: goto label_2729e0;
            case 0x272A38u: goto label_272a38;
            case 0x272AB8u: goto label_272ab8;
            case 0x272AECu: goto label_272aec;
            case 0x272B20u: goto label_272b20;
            case 0x272BF4u: goto label_272bf4;
            case 0x272C24u: goto label_272c24;
            case 0x272DA8u: goto label_272da8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27290Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x272914u;
label_272914:
    // 0x272914: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x272914u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x272918: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x272918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27291c: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x27291Cu;
    SET_GPR_U32(ctx, 31, 0x272924u);
    ctx->pc = 0x272920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27291Cu;
    // 0x272920: 0x24a5ca40  addiu       $a1, $a1, -0x35C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x27291Cu, 0x272924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272924u;
label_272924:
    // 0x272924: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x272924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272928: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x272928u;
    {
        const bool branch_taken_0x272928 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x27292Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272928u;
        // 0x27292c: 0x3c050043  lui         $a1, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272928) {
            ctx->pc = 0x27293Cu;
            goto label_27293c;
        }
    }
    ctx->pc = 0x272930u;
    // 0x272930: 0x8c820380  lw          $v0, 0x380($a0)
    ctx->pc = 0x272930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x272934: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x272934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x272938: 0xac820380  sw          $v0, 0x380($a0)
    ctx->pc = 0x272938u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 2));
label_27293c:
    // 0x27293c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27293cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272940: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x272940u;
    SET_GPR_U32(ctx, 31, 0x272948u);
    ctx->pc = 0x272944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272940u;
    // 0x272944: 0x24a5ca48  addiu       $a1, $a1, -0x35B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x272940u, 0x272948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272948u;
label_272948:
    // 0x272948: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x272948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27294c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27294Cu;
    {
        const bool branch_taken_0x27294c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x272950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27294Cu;
        // 0x272950: 0x3c050043  lui         $a1, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27294c) {
            ctx->pc = 0x272960u;
            goto label_272960;
        }
    }
    ctx->pc = 0x272954u;
    // 0x272954: 0x8c820380  lw          $v0, 0x380($a0)
    ctx->pc = 0x272954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x272958: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x272958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x27295c: 0xac820380  sw          $v0, 0x380($a0)
    ctx->pc = 0x27295cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 2));
label_272960:
    // 0x272960: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x272960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272964: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x272964u;
    {
        const bool branch_taken_0x272964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272964u;
        // 0x272968: 0x24a5ca58  addiu       $a1, $a1, -0x35A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272964) {
            ctx->pc = 0x272A8Cu;
            goto label_272a8c;
        }
    }
    ctx->pc = 0x27296Cu;
label_27296c:
    // 0x27296c: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x27296cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x272970: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x272970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272974: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x272974u;
    SET_GPR_U32(ctx, 31, 0x27297Cu);
    ctx->pc = 0x272978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272974u;
    // 0x272978: 0x24a565a8  addiu       $a1, $a1, 0x65A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x272974u, 0x27297Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27297Cu;
label_27297c:
    // 0x27297c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27297cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272980: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x272980u;
    {
        const bool branch_taken_0x272980 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x272984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272980u;
        // 0x272984: 0x3c050043  lui         $a1, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272980) {
            ctx->pc = 0x272994u;
            goto label_272994;
        }
    }
    ctx->pc = 0x272988u;
    // 0x272988: 0x8c820380  lw          $v0, 0x380($a0)
    ctx->pc = 0x272988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x27298c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x27298cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x272990: 0xac820380  sw          $v0, 0x380($a0)
    ctx->pc = 0x272990u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 2));
label_272994:
    // 0x272994: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x272994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272998: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x272998u;
    SET_GPR_U32(ctx, 31, 0x2729A0u);
    ctx->pc = 0x27299Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272998u;
    // 0x27299c: 0x24a565b0  addiu       $a1, $a1, 0x65B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x272998u, 0x2729A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2729A0u;
label_2729a0:
    // 0x2729a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2729a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2729a4: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2729A4u;
    {
        const bool branch_taken_0x2729a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2729a4) {
            ctx->pc = 0x2729A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2729A4u;
            // 0x2729a8: 0x8e6216d4  lw          $v0, 0x16D4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 5844)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2729BCu;
            goto label_2729bc;
        }
    }
    ctx->pc = 0x2729ACu;
    // 0x2729ac: 0x8c820380  lw          $v0, 0x380($a0)
    ctx->pc = 0x2729acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x2729b0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2729b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2729b4: 0xac820380  sw          $v0, 0x380($a0)
    ctx->pc = 0x2729b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 2));
    // 0x2729b8: 0x8e6216d4  lw          $v0, 0x16D4($s3)
    ctx->pc = 0x2729b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 5844)));
label_2729bc:
    // 0x2729bc: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2729bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x2729c0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2729C0u;
    {
        const bool branch_taken_0x2729c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2729C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2729C0u;
        // 0x2729c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2729c0) {
            ctx->pc = 0x2729D4u;
            goto label_2729d4;
        }
    }
    ctx->pc = 0x2729C8u;
    // 0x2729c8: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x2729c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x2729cc: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x2729CCu;
    {
        const bool branch_taken_0x2729cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2729D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2729CCu;
        // 0x2729d0: 0x24a5ca88  addiu       $a1, $a1, -0x3578 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2729cc) {
            ctx->pc = 0x272C00u;
            goto label_272c00;
        }
    }
    ctx->pc = 0x2729D4u;
label_2729d4:
    // 0x2729d4: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x2729d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x2729d8: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2729D8u;
    {
        const bool branch_taken_0x2729d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2729DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2729D8u;
        // 0x2729dc: 0x24a5ca88  addiu       $a1, $a1, -0x3578 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2729d8) {
            ctx->pc = 0x272A8Cu;
            goto label_272a8c;
        }
    }
    ctx->pc = 0x2729E0u;
label_2729e0:
    // 0x2729e0: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x2729e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x2729e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2729e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2729e8: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x2729E8u;
    SET_GPR_U32(ctx, 31, 0x2729F0u);
    ctx->pc = 0x2729ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2729E8u;
    // 0x2729ec: 0x24a5ca60  addiu       $a1, $a1, -0x35A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x2729E8u, 0x2729F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2729F0u;
label_2729f0:
    // 0x2729f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2729f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2729f4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2729F4u;
    {
        const bool branch_taken_0x2729f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2729F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2729F4u;
        // 0x2729f8: 0x3c050043  lui         $a1, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2729f4) {
            ctx->pc = 0x272A08u;
            goto label_272a08;
        }
    }
    ctx->pc = 0x2729FCu;
    // 0x2729fc: 0x8c820380  lw          $v0, 0x380($a0)
    ctx->pc = 0x2729fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x272a00: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x272a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x272a04: 0xac820380  sw          $v0, 0x380($a0)
    ctx->pc = 0x272a04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 2));
label_272a08:
    // 0x272a08: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x272a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272a0c: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x272A0Cu;
    SET_GPR_U32(ctx, 31, 0x272A14u);
    ctx->pc = 0x272A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272A0Cu;
    // 0x272a10: 0x24a5ca68  addiu       $a1, $a1, -0x3598 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x272A0Cu, 0x272A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272A14u;
label_272a14:
    // 0x272a14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x272a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272a18: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x272A18u;
    {
        const bool branch_taken_0x272a18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x272A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272A18u;
        // 0x272a1c: 0x3c050043  lui         $a1, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272a18) {
            ctx->pc = 0x272A2Cu;
            goto label_272a2c;
        }
    }
    ctx->pc = 0x272A20u;
    // 0x272a20: 0x8c820380  lw          $v0, 0x380($a0)
    ctx->pc = 0x272a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x272a24: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x272a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x272a28: 0xac820380  sw          $v0, 0x380($a0)
    ctx->pc = 0x272a28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 2));
label_272a2c:
    // 0x272a2c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x272a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272a30: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x272A30u;
    {
        const bool branch_taken_0x272a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272A30u;
        // 0x272a34: 0x24a5ca78  addiu       $a1, $a1, -0x3588 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272a30) {
            ctx->pc = 0x272A8Cu;
            goto label_272a8c;
        }
    }
    ctx->pc = 0x272A38u;
label_272a38:
    // 0x272a38: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x272a38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x272a3c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x272a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272a40: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x272A40u;
    SET_GPR_U32(ctx, 31, 0x272A48u);
    ctx->pc = 0x272A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272A40u;
    // 0x272a44: 0x24a5ca98  addiu       $a1, $a1, -0x3568 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x272A40u, 0x272A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272A48u;
label_272a48:
    // 0x272a48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x272a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272a4c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x272A4Cu;
    {
        const bool branch_taken_0x272a4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x272A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272A4Cu;
        // 0x272a50: 0x3c050043  lui         $a1, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272a4c) {
            ctx->pc = 0x272A60u;
            goto label_272a60;
        }
    }
    ctx->pc = 0x272A54u;
    // 0x272a54: 0x8c820380  lw          $v0, 0x380($a0)
    ctx->pc = 0x272a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x272a58: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x272a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x272a5c: 0xac820380  sw          $v0, 0x380($a0)
    ctx->pc = 0x272a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 2));
label_272a60:
    // 0x272a60: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x272a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272a64: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x272A64u;
    SET_GPR_U32(ctx, 31, 0x272A6Cu);
    ctx->pc = 0x272A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272A64u;
    // 0x272a68: 0x24a5caa0  addiu       $a1, $a1, -0x3560 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x272A64u, 0x272A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272A6Cu;
label_272a6c:
    // 0x272a6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x272a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272a70: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x272A70u;
    {
        const bool branch_taken_0x272a70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x272A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272A70u;
        // 0x272a74: 0x3c050043  lui         $a1, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272a70) {
            ctx->pc = 0x272A84u;
            goto label_272a84;
        }
    }
    ctx->pc = 0x272A78u;
    // 0x272a78: 0x8c820380  lw          $v0, 0x380($a0)
    ctx->pc = 0x272a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x272a7c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x272a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x272a80: 0xac820380  sw          $v0, 0x380($a0)
    ctx->pc = 0x272a80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 2));
label_272a84:
    // 0x272a84: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x272a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272a88: 0x24a5ca90  addiu       $a1, $a1, -0x3570
    ctx->pc = 0x272a88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953616));
label_272a8c:
    // 0x272a8c: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x272A8Cu;
    SET_GPR_U32(ctx, 31, 0x272A94u);
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x272A8Cu, 0x272A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272A94u;
label_272a94:
    // 0x272a94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x272a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272a98: 0x508000c4  beql        $a0, $zero, . + 4 + (0xC4 << 2)
    ctx->pc = 0x272A98u;
    {
        const bool branch_taken_0x272a98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x272a98) {
            ctx->pc = 0x272A9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272A98u;
            // 0x272a9c: 0x8e6216d0  lw          $v0, 0x16D0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 5840)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x272DACu;
            goto label_272dac;
        }
    }
    ctx->pc = 0x272AA0u;
    // 0x272aa0: 0x8c830380  lw          $v1, 0x380($a0)
    ctx->pc = 0x272aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x272aa4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x272aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x272aa8: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x272aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x272aac: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x272aacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x272ab0: 0x100000bd  b           . + 4 + (0xBD << 2)
    ctx->pc = 0x272AB0u;
    {
        const bool branch_taken_0x272ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272AB0u;
        // 0x272ab4: 0xac830380  sw          $v1, 0x380($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272ab0) {
            ctx->pc = 0x272DA8u;
            goto label_272da8;
        }
    }
    ctx->pc = 0x272AB8u;
label_272ab8:
    // 0x272ab8: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x272ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x272abc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x272abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272ac0: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x272AC0u;
    SET_GPR_U32(ctx, 31, 0x272AC8u);
    ctx->pc = 0x272AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272AC0u;
    // 0x272ac4: 0x24a565a8  addiu       $a1, $a1, 0x65A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x272AC0u, 0x272AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272AC8u;
label_272ac8:
    // 0x272ac8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x272ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272acc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x272ACCu;
    {
        const bool branch_taken_0x272acc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x272AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272ACCu;
        // 0x272ad0: 0x3c050043  lui         $a1, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272acc) {
            ctx->pc = 0x272AE0u;
            goto label_272ae0;
        }
    }
    ctx->pc = 0x272AD4u;
    // 0x272ad4: 0x8c820380  lw          $v0, 0x380($a0)
    ctx->pc = 0x272ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x272ad8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x272ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x272adc: 0xac820380  sw          $v0, 0x380($a0)
    ctx->pc = 0x272adcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 2));
label_272ae0:
    // 0x272ae0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x272ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272ae4: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x272AE4u;
    {
        const bool branch_taken_0x272ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272AE4u;
        // 0x272ae8: 0x24a565b0  addiu       $a1, $a1, 0x65B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26032));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272ae4) {
            ctx->pc = 0x272C00u;
            goto label_272c00;
        }
    }
    ctx->pc = 0x272AECu;
label_272aec:
    // 0x272aec: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x272aecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x272af0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x272af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272af4: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x272AF4u;
    SET_GPR_U32(ctx, 31, 0x272AFCu);
    ctx->pc = 0x272AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272AF4u;
    // 0x272af8: 0x24a5ca60  addiu       $a1, $a1, -0x35A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x272AF4u, 0x272AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272AFCu;
label_272afc:
    // 0x272afc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x272afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272b00: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x272B00u;
    {
        const bool branch_taken_0x272b00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x272B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272B00u;
        // 0x272b04: 0x3c050043  lui         $a1, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272b00) {
            ctx->pc = 0x272B14u;
            goto label_272b14;
        }
    }
    ctx->pc = 0x272B08u;
    // 0x272b08: 0x8c820380  lw          $v0, 0x380($a0)
    ctx->pc = 0x272b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x272b0c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x272b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x272b10: 0xac820380  sw          $v0, 0x380($a0)
    ctx->pc = 0x272b10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 2));
label_272b14:
    // 0x272b14: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x272b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272b18: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x272B18u;
    {
        const bool branch_taken_0x272b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272B18u;
        // 0x272b1c: 0x24a5ca68  addiu       $a1, $a1, -0x3598 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272b18) {
            ctx->pc = 0x272C00u;
            goto label_272c00;
        }
    }
    ctx->pc = 0x272B20u;
label_272b20:
    // 0x272b20: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x272b20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x272b24: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x272b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272b28: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x272B28u;
    SET_GPR_U32(ctx, 31, 0x272B30u);
    ctx->pc = 0x272B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272B28u;
    // 0x272b2c: 0x24a5ca98  addiu       $a1, $a1, -0x3568 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x272B28u, 0x272B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272B30u;
label_272b30:
    // 0x272b30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x272b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272b34: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x272B34u;
    {
        const bool branch_taken_0x272b34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x272B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272B34u;
        // 0x272b38: 0x3c050043  lui         $a1, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272b34) {
            ctx->pc = 0x272B48u;
            goto label_272b48;
        }
    }
    ctx->pc = 0x272B3Cu;
    // 0x272b3c: 0x8c820380  lw          $v0, 0x380($a0)
    ctx->pc = 0x272b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x272b40: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x272b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x272b44: 0xac820380  sw          $v0, 0x380($a0)
    ctx->pc = 0x272b44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 2));
label_272b48:
    // 0x272b48: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x272b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272b4c: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x272B4Cu;
    SET_GPR_U32(ctx, 31, 0x272B54u);
    ctx->pc = 0x272B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272B4Cu;
    // 0x272b50: 0x24a5caa0  addiu       $a1, $a1, -0x3560 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x272B4Cu, 0x272B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272B54u;
label_272b54:
    // 0x272b54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x272b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272b58: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x272B58u;
    {
        const bool branch_taken_0x272b58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x272B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272B58u;
        // 0x272b5c: 0x3c050043  lui         $a1, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272b58) {
            ctx->pc = 0x272B6Cu;
            goto label_272b6c;
        }
    }
    ctx->pc = 0x272B60u;
    // 0x272b60: 0x8c820380  lw          $v0, 0x380($a0)
    ctx->pc = 0x272b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x272b64: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x272b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x272b68: 0xac820380  sw          $v0, 0x380($a0)
    ctx->pc = 0x272b68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 2));
label_272b6c:
    // 0x272b6c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x272b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272b70: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x272B70u;
    SET_GPR_U32(ctx, 31, 0x272B78u);
    ctx->pc = 0x272B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272B70u;
    // 0x272b74: 0x24a5ca90  addiu       $a1, $a1, -0x3570 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x272B70u, 0x272B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272B78u;
label_272b78:
    // 0x272b78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x272b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272b7c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x272B7Cu;
    {
        const bool branch_taken_0x272b7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x272B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272B7Cu;
        // 0x272b80: 0x3c050043  lui         $a1, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272b7c) {
            ctx->pc = 0x272B98u;
            goto label_272b98;
        }
    }
    ctx->pc = 0x272B84u;
    // 0x272b84: 0x8c830380  lw          $v1, 0x380($a0)
    ctx->pc = 0x272b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x272b88: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x272b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x272b8c: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x272b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x272b90: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x272b90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x272b94: 0xac830380  sw          $v1, 0x380($a0)
    ctx->pc = 0x272b94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 3));
label_272b98:
    // 0x272b98: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x272b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272b9c: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x272B9Cu;
    SET_GPR_U32(ctx, 31, 0x272BA4u);
    ctx->pc = 0x272BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272B9Cu;
    // 0x272ba0: 0x24a5caa8  addiu       $a1, $a1, -0x3558 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x272B9Cu, 0x272BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272BA4u;
label_272ba4:
    // 0x272ba4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x272ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272ba8: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x272BA8u;
    {
        const bool branch_taken_0x272ba8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x272BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272BA8u;
        // 0x272bac: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272ba8) {
            ctx->pc = 0x272BC4u;
            goto label_272bc4;
        }
    }
    ctx->pc = 0x272BB0u;
    // 0x272bb0: 0x8c830380  lw          $v1, 0x380($a0)
    ctx->pc = 0x272bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x272bb4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x272bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x272bb8: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x272bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x272bbc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x272bbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x272bc0: 0xac830380  sw          $v1, 0x380($a0)
    ctx->pc = 0x272bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 3));
label_272bc4:
    // 0x272bc4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x272bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272bc8: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x272BC8u;
    SET_GPR_U32(ctx, 31, 0x272BD0u);
    ctx->pc = 0x272BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272BC8u;
    // 0x272bcc: 0x24a56600  addiu       $a1, $a1, 0x6600 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x272BC8u, 0x272BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272BD0u;
label_272bd0:
    // 0x272bd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x272bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272bd4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x272BD4u;
    {
        const bool branch_taken_0x272bd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x272BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272BD4u;
        // 0x272bd8: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272bd4) {
            ctx->pc = 0x272BE8u;
            goto label_272be8;
        }
    }
    ctx->pc = 0x272BDCu;
    // 0x272bdc: 0x8c820380  lw          $v0, 0x380($a0)
    ctx->pc = 0x272bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x272be0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x272be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x272be4: 0xac820380  sw          $v0, 0x380($a0)
    ctx->pc = 0x272be4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 2));
label_272be8:
    // 0x272be8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x272be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272bec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x272BECu;
    {
        const bool branch_taken_0x272bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272BECu;
        // 0x272bf0: 0x24a56610  addiu       $a1, $a1, 0x6610 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272bec) {
            ctx->pc = 0x272C00u;
            goto label_272c00;
        }
    }
    ctx->pc = 0x272BF4u;
label_272bf4:
    // 0x272bf4: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x272bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x272bf8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x272bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272bfc: 0x24a56620  addiu       $a1, $a1, 0x6620
    ctx->pc = 0x272bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26144));
label_272c00:
    // 0x272c00: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x272C00u;
    SET_GPR_U32(ctx, 31, 0x272C08u);
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x272C00u, 0x272C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272C08u;
label_272c08:
    // 0x272c08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x272c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272c0c: 0x50800067  beql        $a0, $zero, . + 4 + (0x67 << 2)
    ctx->pc = 0x272C0Cu;
    {
        const bool branch_taken_0x272c0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x272c0c) {
            ctx->pc = 0x272C10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272C0Cu;
            // 0x272c10: 0x8e6216d0  lw          $v0, 0x16D0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 5840)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x272DACu;
            goto label_272dac;
        }
    }
    ctx->pc = 0x272C14u;
    // 0x272c14: 0x8c820380  lw          $v0, 0x380($a0)
    ctx->pc = 0x272c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x272c18: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x272c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x272c1c: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x272C1Cu;
    {
        const bool branch_taken_0x272c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272C1Cu;
        // 0x272c20: 0xac820380  sw          $v0, 0x380($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272c1c) {
            ctx->pc = 0x272DA8u;
            goto label_272da8;
        }
    }
    ctx->pc = 0x272C24u;
label_272c24:
    // 0x272c24: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x272c24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x272c28: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x272c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272c2c: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x272C2Cu;
    SET_GPR_U32(ctx, 31, 0x272C34u);
    ctx->pc = 0x272C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272C2Cu;
    // 0x272c30: 0x24a56628  addiu       $a1, $a1, 0x6628 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x272C2Cu, 0x272C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272C34u;
label_272c34:
    // 0x272c34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x272c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272c38: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x272C38u;
    {
        const bool branch_taken_0x272c38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x272C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272C38u;
        // 0x272c3c: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272c38) {
            ctx->pc = 0x272C4Cu;
            goto label_272c4c;
        }
    }
    ctx->pc = 0x272C40u;
    // 0x272c40: 0x8c820380  lw          $v0, 0x380($a0)
    ctx->pc = 0x272c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x272c44: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x272c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x272c48: 0xac820380  sw          $v0, 0x380($a0)
    ctx->pc = 0x272c48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 2));
label_272c4c:
    // 0x272c4c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x272c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272c50: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x272C50u;
    SET_GPR_U32(ctx, 31, 0x272C58u);
    ctx->pc = 0x272C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272C50u;
    // 0x272c54: 0x24a56638  addiu       $a1, $a1, 0x6638 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x272C50u, 0x272C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272C58u;
label_272c58:
    // 0x272c58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x272c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272c5c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x272C5Cu;
    {
        const bool branch_taken_0x272c5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x272C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272C5Cu;
        // 0x272c60: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272c5c) {
            ctx->pc = 0x272C70u;
            goto label_272c70;
        }
    }
    ctx->pc = 0x272C64u;
    // 0x272c64: 0x8c820380  lw          $v0, 0x380($a0)
    ctx->pc = 0x272c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x272c68: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x272c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x272c6c: 0xac820380  sw          $v0, 0x380($a0)
    ctx->pc = 0x272c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 2));
label_272c70:
    // 0x272c70: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x272c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272c74: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x272C74u;
    SET_GPR_U32(ctx, 31, 0x272C7Cu);
    ctx->pc = 0x272C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272C74u;
    // 0x272c78: 0x24a56648  addiu       $a1, $a1, 0x6648 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x272C74u, 0x272C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272C7Cu;
label_272c7c:
    // 0x272c7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x272c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272c80: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x272C80u;
    {
        const bool branch_taken_0x272c80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x272C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272C80u;
        // 0x272c84: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272c80) {
            ctx->pc = 0x272C94u;
            goto label_272c94;
        }
    }
    ctx->pc = 0x272C88u;
    // 0x272c88: 0x8c820380  lw          $v0, 0x380($a0)
    ctx->pc = 0x272c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x272c8c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x272c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x272c90: 0xac820380  sw          $v0, 0x380($a0)
    ctx->pc = 0x272c90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 2));
label_272c94:
    // 0x272c94: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x272c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272c98: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x272C98u;
    SET_GPR_U32(ctx, 31, 0x272CA0u);
    ctx->pc = 0x272C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272C98u;
    // 0x272c9c: 0x24a56650  addiu       $a1, $a1, 0x6650 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x272C98u, 0x272CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272CA0u;
label_272ca0:
    // 0x272ca0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x272ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272ca4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x272CA4u;
    {
        const bool branch_taken_0x272ca4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x272CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272CA4u;
        // 0x272ca8: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272ca4) {
            ctx->pc = 0x272CB8u;
            goto label_272cb8;
        }
    }
    ctx->pc = 0x272CACu;
    // 0x272cac: 0x8c820380  lw          $v0, 0x380($a0)
    ctx->pc = 0x272cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x272cb0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x272cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x272cb4: 0xac820380  sw          $v0, 0x380($a0)
    ctx->pc = 0x272cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 2));
label_272cb8:
    // 0x272cb8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x272cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272cbc: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x272CBCu;
    SET_GPR_U32(ctx, 31, 0x272CC4u);
    ctx->pc = 0x272CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272CBCu;
    // 0x272cc0: 0x24a56658  addiu       $a1, $a1, 0x6658 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x272CBCu, 0x272CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272CC4u;
label_272cc4:
    // 0x272cc4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x272cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272cc8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x272CC8u;
    {
        const bool branch_taken_0x272cc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x272CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272CC8u;
        // 0x272ccc: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272cc8) {
            ctx->pc = 0x272CDCu;
            goto label_272cdc;
        }
    }
    ctx->pc = 0x272CD0u;
    // 0x272cd0: 0x8c820380  lw          $v0, 0x380($a0)
    ctx->pc = 0x272cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x272cd4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x272cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x272cd8: 0xac820380  sw          $v0, 0x380($a0)
    ctx->pc = 0x272cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 2));
label_272cdc:
    // 0x272cdc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x272cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272ce0: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x272CE0u;
    SET_GPR_U32(ctx, 31, 0x272CE8u);
    ctx->pc = 0x272CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272CE0u;
    // 0x272ce4: 0x24a56660  addiu       $a1, $a1, 0x6660 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x272CE0u, 0x272CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272CE8u;
label_272ce8:
    // 0x272ce8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x272ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272cec: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x272CECu;
    {
        const bool branch_taken_0x272cec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x272CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272CECu;
        // 0x272cf0: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272cec) {
            ctx->pc = 0x272D00u;
            goto label_272d00;
        }
    }
    ctx->pc = 0x272CF4u;
    // 0x272cf4: 0x8c820380  lw          $v0, 0x380($a0)
    ctx->pc = 0x272cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x272cf8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x272cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x272cfc: 0xac820380  sw          $v0, 0x380($a0)
    ctx->pc = 0x272cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 2));
label_272d00:
    // 0x272d00: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x272d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272d04: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x272D04u;
    SET_GPR_U32(ctx, 31, 0x272D0Cu);
    ctx->pc = 0x272D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272D04u;
    // 0x272d08: 0x24a56668  addiu       $a1, $a1, 0x6668 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x272D04u, 0x272D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272D0Cu;
label_272d0c:
    // 0x272d0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x272d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272d10: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x272D10u;
    {
        const bool branch_taken_0x272d10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x272D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272D10u;
        // 0x272d14: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272d10) {
            ctx->pc = 0x272D24u;
            goto label_272d24;
        }
    }
    ctx->pc = 0x272D18u;
    // 0x272d18: 0x8c820380  lw          $v0, 0x380($a0)
    ctx->pc = 0x272d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x272d1c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x272d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x272d20: 0xac820380  sw          $v0, 0x380($a0)
    ctx->pc = 0x272d20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 2));
label_272d24:
    // 0x272d24: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x272d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272d28: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x272D28u;
    SET_GPR_U32(ctx, 31, 0x272D30u);
    ctx->pc = 0x272D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272D28u;
    // 0x272d2c: 0x24a56670  addiu       $a1, $a1, 0x6670 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x272D28u, 0x272D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272D30u;
label_272d30:
    // 0x272d30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x272d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272d34: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x272D34u;
    {
        const bool branch_taken_0x272d34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x272D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272D34u;
        // 0x272d38: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272d34) {
            ctx->pc = 0x272D48u;
            goto label_272d48;
        }
    }
    ctx->pc = 0x272D3Cu;
    // 0x272d3c: 0x8c820380  lw          $v0, 0x380($a0)
    ctx->pc = 0x272d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x272d40: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x272d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x272d44: 0xac820380  sw          $v0, 0x380($a0)
    ctx->pc = 0x272d44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 2));
label_272d48:
    // 0x272d48: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x272d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272d4c: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x272D4Cu;
    SET_GPR_U32(ctx, 31, 0x272D54u);
    ctx->pc = 0x272D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272D4Cu;
    // 0x272d50: 0x24a56678  addiu       $a1, $a1, 0x6678 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x272D4Cu, 0x272D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272D54u;
label_272d54:
    // 0x272d54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x272d54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272d58: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x272D58u;
    {
        const bool branch_taken_0x272d58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x272D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272D58u;
        // 0x272d5c: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272d58) {
            ctx->pc = 0x272D6Cu;
            goto label_272d6c;
        }
    }
    ctx->pc = 0x272D60u;
    // 0x272d60: 0x8c820380  lw          $v0, 0x380($a0)
    ctx->pc = 0x272d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x272d64: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x272d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x272d68: 0xac820380  sw          $v0, 0x380($a0)
    ctx->pc = 0x272d68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 2));
label_272d6c:
    // 0x272d6c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x272d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272d70: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x272D70u;
    SET_GPR_U32(ctx, 31, 0x272D78u);
    ctx->pc = 0x272D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272D70u;
    // 0x272d74: 0x24a56680  addiu       $a1, $a1, 0x6680 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x272D70u, 0x272D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272D78u;
label_272d78:
    // 0x272d78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x272d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272d7c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x272D7Cu;
    {
        const bool branch_taken_0x272d7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x272d7c) {
            ctx->pc = 0x272D80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272D7Cu;
            // 0x272d80: 0x8e631794  lw          $v1, 0x1794($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6036)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x272D94u;
            goto label_272d94;
        }
    }
    ctx->pc = 0x272D84u;
    // 0x272d84: 0x8c820380  lw          $v0, 0x380($a0)
    ctx->pc = 0x272d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x272d88: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x272d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x272d8c: 0xac820380  sw          $v0, 0x380($a0)
    ctx->pc = 0x272d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 2));
    // 0x272d90: 0x8e631794  lw          $v1, 0x1794($s3)
    ctx->pc = 0x272d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6036)));
label_272d94:
    // 0x272d94: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x272D94u;
    {
        const bool branch_taken_0x272d94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x272d94) {
            ctx->pc = 0x272D98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272D94u;
            // 0x272d98: 0x8e6216d0  lw          $v0, 0x16D0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 5840)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x272DACu;
            goto label_272dac;
        }
    }
    ctx->pc = 0x272D9Cu;
    // 0x272d9c: 0x8c620380  lw          $v0, 0x380($v1)
    ctx->pc = 0x272d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 896)));
    // 0x272da0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x272da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x272da4: 0xac620380  sw          $v0, 0x380($v1)
    ctx->pc = 0x272da4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 896), GPR_U32(ctx, 2));
label_272da8:
    // 0x272da8: 0x8e6216d0  lw          $v0, 0x16D0($s3)
    ctx->pc = 0x272da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 5840)));
label_272dac:
    // 0x272dac: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x272dacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x272db0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x272db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x272db4: 0xae6216d0  sw          $v0, 0x16D0($s3)
    ctx->pc = 0x272db4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 5840), GPR_U32(ctx, 2));
label_272db8:
    // 0x272db8: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x272db8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_272dbc:
    // 0x272dbc: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x272dbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x272dc0: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x272dc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x272dc4: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x272dc4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x272dc8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x272dc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x272dcc: 0x3e00008  jr          $ra
    ctx->pc = 0x272DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272DCCu;
        // 0x272dd0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272DCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x272DD4u;
    // 0x272dd4: 0x0  nop
    ctx->pc = 0x272dd4u;
    // NOP
    ctx->pc = 0x272dd8u;
}
