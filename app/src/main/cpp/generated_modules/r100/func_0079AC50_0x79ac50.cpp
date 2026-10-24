#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r100_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r100
{
// Function: func_0079AC50
// Address: 0x79ac50 - 0x79b218
void func_0079AC50_0x79ac50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079AC50_0x79ac50");
#endif

    switch (ctx->pc) {
        case 0x79acd0u: goto label_79acd0;
        case 0x79acfcu: goto label_79acfc;
        case 0x79ad1cu: goto label_79ad1c;
        case 0x79ad30u: goto label_79ad30;
        case 0x79ad50u: goto label_79ad50;
        case 0x79ad8cu: goto label_79ad8c;
        case 0x79ade8u: goto label_79ade8;
        case 0x79ae04u: goto label_79ae04;
        case 0x79ae20u: goto label_79ae20;
        case 0x79ae3cu: goto label_79ae3c;
        case 0x79ae58u: goto label_79ae58;
        case 0x79ae74u: goto label_79ae74;
        case 0x79ae90u: goto label_79ae90;
        case 0x79aeacu: goto label_79aeac;
        case 0x79aed8u: goto label_79aed8;
        case 0x79af08u: goto label_79af08;
        case 0x79af1cu: goto label_79af1c;
        case 0x79af2cu: goto label_79af2c;
        case 0x79af38u: goto label_79af38;
        case 0x79af40u: goto label_79af40;
        case 0x79af68u: goto label_79af68;
        case 0x79af98u: goto label_79af98;
        case 0x79afb0u: goto label_79afb0;
        case 0x79afc0u: goto label_79afc0;
        case 0x79afccu: goto label_79afcc;
        case 0x79afd4u: goto label_79afd4;
        case 0x79aff8u: goto label_79aff8;
        case 0x79b010u: goto label_79b010;
        case 0x79b01cu: goto label_79b01c;
        case 0x79b034u: goto label_79b034;
        case 0x79b04cu: goto label_79b04c;
        case 0x79b054u: goto label_79b054;
        case 0x79b06cu: goto label_79b06c;
        case 0x79b078u: goto label_79b078;
        case 0x79b080u: goto label_79b080;
        case 0x79b098u: goto label_79b098;
        case 0x79b0a4u: goto label_79b0a4;
        case 0x79b0acu: goto label_79b0ac;
        case 0x79b0c4u: goto label_79b0c4;
        case 0x79b0d4u: goto label_79b0d4;
        case 0x79b0dcu: goto label_79b0dc;
        case 0x79b0e4u: goto label_79b0e4;
        case 0x79b110u: goto label_79b110;
        case 0x79b140u: goto label_79b140;
        case 0x79b154u: goto label_79b154;
        case 0x79b180u: goto label_79b180;
        case 0x79b1b0u: goto label_79b1b0;
        case 0x79b1c0u: goto label_79b1c0;
        case 0x79b1d4u: goto label_79b1d4;
        case 0x79b1e0u: goto label_79b1e0;
        default: break;
    }

    ctx->pc = 0x79ac50u;

    // 0x79ac50: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x79ac50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x79ac54: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x79ac54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x79ac58: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x79ac58u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x79ac5c: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x79ac5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x79ac60: 0x7fb30100  sq          $s3, 0x100($sp)
    ctx->pc = 0x79ac60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 19));
    // 0x79ac64: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x79ac64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x79ac68: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x79ac68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x79ac6c: 0x2413000c  addiu       $s3, $zero, 0xC
    ctx->pc = 0x79ac6cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x79ac70: 0x83980b  movn        $s3, $a0, $v1
    ctx->pc = 0x79ac70u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 4));
    // 0x79ac74: 0x7fb400f0  sq          $s4, 0xF0($sp)
    ctx->pc = 0x79ac74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 20));
    // 0x79ac78: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x79ac78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79ac7c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x79ac7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x79ac80: 0x7fb10120  sq          $s1, 0x120($sp)
    ctx->pc = 0x79ac80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 17));
    // 0x79ac84: 0x3c14005f  lui         $s4, 0x5F
    ctx->pc = 0x79ac84u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)95 << 16));
    // 0x79ac88: 0x7fb20110  sq          $s2, 0x110($sp)
    ctx->pc = 0x79ac88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 18));
    // 0x79ac8c: 0x3c11007a  lui         $s1, 0x7A
    ctx->pc = 0x79ac8cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)122 << 16));
    // 0x79ac90: 0x7fb500e0  sq          $s5, 0xE0($sp)
    ctx->pc = 0x79ac90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 21));
    // 0x79ac94: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x79ac94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ac98: 0x7fb600d0  sq          $s6, 0xD0($sp)
    ctx->pc = 0x79ac98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 22));
    // 0x79ac9c: 0x3c15003c  lui         $s5, 0x3C
    ctx->pc = 0x79ac9cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)60 << 16));
    // 0x79aca0: 0x7fb700c0  sq          $s7, 0xC0($sp)
    ctx->pc = 0x79aca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 23));
    // 0x79aca4: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x79aca4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79aca8: 0x7fbe00b0  sq          $fp, 0xB0($sp)
    ctx->pc = 0x79aca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 30));
    // 0x79acac: 0x3c170200  lui         $s7, 0x200
    ctx->pc = 0x79acacu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)512 << 16));
    // 0x79acb0: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x79acb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
    // 0x79acb4: 0x3c1e8000  lui         $fp, 0x8000
    ctx->pc = 0x79acb4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)32768 << 16));
    // 0x79acb8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x79acb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x79acbc: 0xe7b40140  swc1        $f20, 0x140($sp)
    ctx->pc = 0x79acbcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x79acc0: 0xafa20098  sw          $v0, 0x98($sp)
    ctx->pc = 0x79acc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 2));
    // 0x79acc4: 0xafa30090  sw          $v1, 0x90($sp)
    ctx->pc = 0x79acc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
    // 0x79acc8: 0xafa40094  sw          $a0, 0x94($sp)
    ctx->pc = 0x79acc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 4));
    // 0x79accc: 0x8e428658  lw          $v0, -0x79A8($s2)
    ctx->pc = 0x79acccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5E8658u));
label_79acd0:
    // 0x79acd0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x79acd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x79acd4: 0x5e1824  and         $v1, $v0, $fp
    ctx->pc = 0x79acd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 30));
    // 0x79acd8: 0x1460001f  bnez        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x79ACD8u;
    {
        const bool branch_taken_0x79acd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79ACDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ACD8u;
        // 0x79acdc: 0x571024  and         $v0, $v0, $s7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79acd8) {
            ctx->pc = 0x79AD58u;
            goto label_79ad58;
        }
    }
    ctx->pc = 0x79ACE0u;
    // 0x79ace0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x79ACE0u;
    {
        const bool branch_taken_0x79ace0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79ACE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ACE0u;
        // 0x79ace4: 0x8e22c500  lw          $v0, -0x3B00($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ace0) {
            ctx->pc = 0x79AD40u;
            goto label_79ad40;
        }
    }
    ctx->pc = 0x79ACE8u;
    // 0x79ace8: 0x90430005  lbu         $v1, 0x5($v0)
    ctx->pc = 0x79ace8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
    // 0x79acec: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x79ACECu;
    {
        const bool branch_taken_0x79acec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79ACF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ACECu;
        // 0x79acf0: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79acec) {
            ctx->pc = 0x79AD44u;
            goto label_79ad44;
        }
    }
    ctx->pc = 0x79ACF4u;
    // 0x79acf4: 0xc0b0f90  jal         func_2C3E40
    ctx->pc = 0x79ACF4u;
    SET_GPR_U32(ctx, 31, 0x79ACFCu);
    ctx->pc = 0x79ACF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ACF4u;
    // 0x79acf8: 0x8ea42f84  lw          $a0, 0x2F84($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E40u, 0x79ACF4u, 0x79ACFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ACFCu;
label_79acfc:
    // 0x79acfc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x79acfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ad00: 0x16160010  bne         $s0, $s6, . + 4 + (0x10 << 2)
    ctx->pc = 0x79AD00u;
    {
        const bool branch_taken_0x79ad00 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 22));
        ctx->pc = 0x79AD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD00u;
        // 0x79ad04: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ad00) {
            ctx->pc = 0x79AD44u;
            goto label_79ad44;
        }
    }
    ctx->pc = 0x79AD08u;
    // 0x79ad08: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x79ad08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x79ad0c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x79ad0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x79ad10: 0x2444ea60  addiu       $a0, $v0, -0x15A0
    ctx->pc = 0x79ad10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961760));
    // 0x79ad14: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x79AD14u;
    SET_GPR_U32(ctx, 31, 0x79AD1Cu);
    ctx->pc = 0x79AD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AD14u;
    // 0x79ad18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x79AD14u, 0x79AD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AD1Cu;
label_79ad1c:
    // 0x79ad1c: 0x14500009  bne         $v0, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x79AD1Cu;
    {
        const bool branch_taken_0x79ad1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x79AD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD1Cu;
        // 0x79ad20: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ad1c) {
            ctx->pc = 0x79AD44u;
            goto label_79ad44;
        }
    }
    ctx->pc = 0x79AD24u;
    // 0x79ad24: 0x26448658  addiu       $a0, $s2, -0x79A8
    ctx->pc = 0x79ad24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936152));
    // 0x79ad28: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x79AD28u;
    SET_GPR_U32(ctx, 31, 0x79AD30u);
    ctx->pc = 0x79AD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AD28u;
    // 0x79ad2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x79AD28u, 0x79AD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AD30u;
label_79ad30:
    // 0x79ad30: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79ad30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79ad34: 0x73182b  sltu        $v1, $v1, $s3
    ctx->pc = 0x79ad34u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x79ad38: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x79AD38u;
    {
        const bool branch_taken_0x79ad38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD38u;
        // 0x79ad3c: 0x8e848658  lw          $a0, -0x79A8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ad38) {
            ctx->pc = 0x79AD5Cu;
            goto label_79ad5c;
        }
    }
    ctx->pc = 0x79AD40u;
label_79ad40:
    // 0x79ad40: 0x8ea22f84  lw          $v0, 0x2F84($s5)
    ctx->pc = 0x79ad40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
label_79ad44:
    // 0x79ad44: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79ad44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79ad48: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79AD48u;
    SET_GPR_U32(ctx, 31, 0x79AD50u);
    ctx->pc = 0x79AD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AD48u;
    // 0x79ad4c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79AD48u, 0x79AD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AD50u;
label_79ad50:
    // 0x79ad50: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x79AD50u;
    {
        const bool branch_taken_0x79ad50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD50u;
        // 0x79ad54: 0x8e428658  lw          $v0, -0x79A8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ad50) {
            ctx->pc = 0x79ACD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79acd0;
        }
    }
    ctx->pc = 0x79AD58u;
label_79ad58:
    // 0x79ad58: 0x8e848658  lw          $a0, -0x79A8($s4)
    ctx->pc = 0x79ad58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936152)));
label_79ad5c:
    // 0x79ad5c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x79ad5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x79ad60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79ad60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ad64: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79ad64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ad68: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x79ad68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x79ad6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79ad6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ad70: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x79ad70u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x79ad74: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x79ad74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x79ad78: 0x26106ab0  addiu       $s0, $s0, 0x6AB0
    ctx->pc = 0x79ad78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27312));
    // 0x79ad7c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x79ad7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x79ad80: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79ad80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x79ad84: 0xc0b016c  jal         func_2C05B0
    ctx->pc = 0x79AD84u;
    SET_GPR_U32(ctx, 31, 0x79AD8Cu);
    ctx->pc = 0x79AD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AD84u;
    // 0x79ad88: 0x8c44264c  lw          $a0, 0x264C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9804)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C05B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C05B0u, 0x79AD84u, 0x79AD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AD8Cu;
label_79ad8c:
    // 0x79ad8c: 0x8e838658  lw          $v1, -0x79A8($s4)
    ctx->pc = 0x79ad8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936152)));
    // 0x79ad90: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x79ad90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x79ad94: 0x2407001b  addiu       $a3, $zero, 0x1B
    ctx->pc = 0x79ad94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x79ad98: 0x2408001c  addiu       $t0, $zero, 0x1C
    ctx->pc = 0x79ad98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x79ad9c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79ad9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x79ada0: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x79ada0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79ada4: 0x240b000d  addiu       $t3, $zero, 0xD
    ctx->pc = 0x79ada4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x79ada8: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x79ada8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x79adac: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x79adacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x79adb0: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x79adb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x79adb4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x79adb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x79adb8: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x79adb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x79adbc: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x79adbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x79adc0: 0xa3a50000  sb          $a1, 0x0($sp)
    ctx->pc = 0x79adc0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x79adc4: 0xa3a70010  sb          $a3, 0x10($sp)
    ctx->pc = 0x79adc4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 7));
    // 0x79adc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79adc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79adcc: 0xa3a80020  sb          $t0, 0x20($sp)
    ctx->pc = 0x79adccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 8));
    // 0x79add0: 0xa3aa0030  sb          $t2, 0x30($sp)
    ctx->pc = 0x79add0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 10));
    // 0x79add4: 0xa3ab0040  sb          $t3, 0x40($sp)
    ctx->pc = 0x79add4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 11));
    // 0x79add8: 0xa3a90050  sb          $t1, 0x50($sp)
    ctx->pc = 0x79add8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 9));
    // 0x79addc: 0xa3a60060  sb          $a2, 0x60($sp)
    ctx->pc = 0x79addcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 6));
    // 0x79ade0: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x79ADE0u;
    SET_GPR_U32(ctx, 31, 0x79ADE8u);
    ctx->pc = 0x79ADE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ADE0u;
    // 0x79ade4: 0xa3a20070  sb          $v0, 0x70($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 112), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79ADE0u, 0x79ADE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ADE8u;
label_79ade8:
    // 0x79ade8: 0x8e23c500  lw          $v1, -0x3B00($s1)
    ctx->pc = 0x79ade8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952192)));
    // 0x79adec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79adecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79adf0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x79adf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79adf4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79adf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79adf8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x79adf8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x79adfc: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x79ADFCu;
    SET_GPR_U32(ctx, 31, 0x79AE04u);
    ctx->pc = 0x79AE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ADFCu;
    // 0x79ae00: 0x93a50010  lbu         $a1, 0x10($sp) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79ADFCu, 0x79AE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AE04u;
label_79ae04:
    // 0x79ae04: 0x8e23c500  lw          $v1, -0x3B00($s1)
    ctx->pc = 0x79ae04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952192)));
    // 0x79ae08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79ae08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ae0c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x79ae0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79ae10: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79ae10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79ae14: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x79ae14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x79ae18: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x79AE18u;
    SET_GPR_U32(ctx, 31, 0x79AE20u);
    ctx->pc = 0x79AE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AE18u;
    // 0x79ae1c: 0x93a50020  lbu         $a1, 0x20($sp) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79AE18u, 0x79AE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AE20u;
label_79ae20:
    // 0x79ae20: 0x8e23c500  lw          $v1, -0x3B00($s1)
    ctx->pc = 0x79ae20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952192)));
    // 0x79ae24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79ae24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ae28: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x79ae28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79ae2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79ae2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79ae30: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x79ae30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x79ae34: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x79AE34u;
    SET_GPR_U32(ctx, 31, 0x79AE3Cu);
    ctx->pc = 0x79AE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AE34u;
    // 0x79ae38: 0x93a50030  lbu         $a1, 0x30($sp) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79AE34u, 0x79AE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AE3Cu;
label_79ae3c:
    // 0x79ae3c: 0x8e23c500  lw          $v1, -0x3B00($s1)
    ctx->pc = 0x79ae3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952192)));
    // 0x79ae40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79ae40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ae44: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x79ae44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79ae48: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79ae48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79ae4c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x79ae4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x79ae50: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x79AE50u;
    SET_GPR_U32(ctx, 31, 0x79AE58u);
    ctx->pc = 0x79AE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AE50u;
    // 0x79ae54: 0x93a50040  lbu         $a1, 0x40($sp) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79AE50u, 0x79AE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AE58u;
label_79ae58:
    // 0x79ae58: 0x8e23c500  lw          $v1, -0x3B00($s1)
    ctx->pc = 0x79ae58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952192)));
    // 0x79ae5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79ae5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ae60: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x79ae60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79ae64: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79ae64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79ae68: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x79ae68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x79ae6c: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x79AE6Cu;
    SET_GPR_U32(ctx, 31, 0x79AE74u);
    ctx->pc = 0x79AE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AE6Cu;
    // 0x79ae70: 0x93a50050  lbu         $a1, 0x50($sp) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79AE6Cu, 0x79AE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AE74u;
label_79ae74:
    // 0x79ae74: 0x8e23c500  lw          $v1, -0x3B00($s1)
    ctx->pc = 0x79ae74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952192)));
    // 0x79ae78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79ae78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ae7c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x79ae7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79ae80: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79ae80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79ae84: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x79ae84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x79ae88: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x79AE88u;
    SET_GPR_U32(ctx, 31, 0x79AE90u);
    ctx->pc = 0x79AE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AE88u;
    // 0x79ae8c: 0x93a50060  lbu         $a1, 0x60($sp) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79AE88u, 0x79AE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AE90u;
label_79ae90:
    // 0x79ae90: 0x8e23c500  lw          $v1, -0x3B00($s1)
    ctx->pc = 0x79ae90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952192)));
    // 0x79ae94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79ae94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ae98: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x79ae98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79ae9c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79ae9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79aea0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x79aea0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x79aea4: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x79AEA4u;
    SET_GPR_U32(ctx, 31, 0x79AEACu);
    ctx->pc = 0x79AEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AEA4u;
    // 0x79aea8: 0x93a50070  lbu         $a1, 0x70($sp) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79AEA4u, 0x79AEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AEACu;
label_79aeac:
    // 0x79aeac: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x79aeacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x79aeb0: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x79aeb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
    // 0x79aeb4: 0x24684c58  addiu       $t0, $v1, 0x4C58
    ctx->pc = 0x79aeb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 19544));
    // 0x79aeb8: 0x8082c3f8  lb          $v0, -0x3C08($a0)
    ctx->pc = 0x79aeb8u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x79C3F8u));
    // 0x79aebc: 0x2483c3f8  addiu       $v1, $a0, -0x3C08
    ctx->pc = 0x79aebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951928));
    // 0x79aec0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79aec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aec4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x79AEC4u;
    {
        const bool branch_taken_0x79aec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AEC4u;
        // 0x79aec8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aec4) {
            ctx->pc = 0x79AF00u;
            goto label_79af00;
        }
    }
    ctx->pc = 0x79AECCu;
    // 0x79aecc: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79aeccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aed0: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79aed0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79aed4: 0x0  nop
    ctx->pc = 0x79aed4u;
    // NOP
label_79aed8:
    // 0x79aed8: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79aed8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79aedc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79aedcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79aee0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79aee0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79aee4: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79aee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79aee8: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79aee8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79aeec: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79AEECu;
    {
        const bool branch_taken_0x79aeec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AEECu;
        // 0x79aef0: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aeec) {
            ctx->pc = 0x79AF00u;
            goto label_79af00;
        }
    }
    ctx->pc = 0x79AEF4u;
    // 0x79aef4: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79aef4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79aef8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79AEF8u;
    {
        const bool branch_taken_0x79aef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79aef8) {
            ctx->pc = 0x79AEFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AEF8u;
            // 0x79aefc: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79aed8;
        }
    }
    ctx->pc = 0x79AF00u;
label_79af00:
    // 0x79af00: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x79AF00u;
    SET_GPR_U32(ctx, 31, 0x79AF08u);
    ctx->pc = 0x79AF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AF00u;
    // 0x79af04: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79AF00u, 0x79AF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AF08u;
label_79af08:
    // 0x79af08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x79af08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79af0c: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x79AF0Cu;
    {
        const bool branch_taken_0x79af0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF0Cu;
        // 0x79af10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79af0c) {
            ctx->pc = 0x79AF40u;
            goto label_79af40;
        }
    }
    ctx->pc = 0x79AF14u;
    // 0x79af14: 0xc06f45e  jal         func_1BD178
    ctx->pc = 0x79AF14u;
    SET_GPR_U32(ctx, 31, 0x79AF1Cu);
    ctx->pc = 0x79AF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AF14u;
    // 0x79af18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD178u, 0x79AF14u, 0x79AF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AF1Cu;
label_79af1c:
    // 0x79af1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79af1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79af20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79af20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79af24: 0xc06f3ec  jal         func_1BCFB0
    ctx->pc = 0x79AF24u;
    SET_GPR_U32(ctx, 31, 0x79AF2Cu);
    ctx->pc = 0x79AF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AF24u;
    // 0x79af28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BCFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BCFB0u, 0x79AF24u, 0x79AF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AF2Cu;
label_79af2c:
    // 0x79af2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79af2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79af30: 0xc06f45e  jal         func_1BD178
    ctx->pc = 0x79AF30u;
    SET_GPR_U32(ctx, 31, 0x79AF38u);
    ctx->pc = 0x79AF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AF30u;
    // 0x79af34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD178u, 0x79AF30u, 0x79AF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AF38u;
label_79af38:
    // 0x79af38: 0xc06f48a  jal         func_1BD228
    ctx->pc = 0x79AF38u;
    SET_GPR_U32(ctx, 31, 0x79AF40u);
    ctx->pc = 0x79AF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AF38u;
    // 0x79af3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD228u, 0x79AF38u, 0x79AF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AF40u;
label_79af40:
    // 0x79af40: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79af40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x79af44: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x79af44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x79af48: 0x8062c400  lb          $v0, -0x3C00($v1)
    ctx->pc = 0x79af48u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x79C400u));
    // 0x79af4c: 0x24884c58  addiu       $t0, $a0, 0x4C58
    ctx->pc = 0x79af4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 19544));
    // 0x79af50: 0x2463c400  addiu       $v1, $v1, -0x3C00
    ctx->pc = 0x79af50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951936));
    // 0x79af54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79af54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79af58: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x79AF58u;
    {
        const bool branch_taken_0x79af58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF58u;
        // 0x79af5c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79af58) {
            ctx->pc = 0x79AF90u;
            goto label_79af90;
        }
    }
    ctx->pc = 0x79AF60u;
    // 0x79af60: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79af60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79af64: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79af64u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_79af68:
    // 0x79af68: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79af68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79af6c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79af6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79af70: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79af70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79af74: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79af74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79af78: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79af78u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79af7c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79AF7Cu;
    {
        const bool branch_taken_0x79af7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF7Cu;
        // 0x79af80: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79af7c) {
            ctx->pc = 0x79AF90u;
            goto label_79af90;
        }
    }
    ctx->pc = 0x79AF84u;
    // 0x79af84: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79af84u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79af88: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79AF88u;
    {
        const bool branch_taken_0x79af88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79af88) {
            ctx->pc = 0x79AF8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AF88u;
            // 0x79af8c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AF68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79af68;
        }
    }
    ctx->pc = 0x79AF90u;
label_79af90:
    // 0x79af90: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x79AF90u;
    SET_GPR_U32(ctx, 31, 0x79AF98u);
    ctx->pc = 0x79AF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AF90u;
    // 0x79af94: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79AF90u, 0x79AF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AF98u;
label_79af98:
    // 0x79af98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x79af98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79af9c: 0x5200000e  beql        $s0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x79AF9Cu;
    {
        const bool branch_taken_0x79af9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x79af9c) {
            ctx->pc = 0x79AFA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AF9Cu;
            // 0x79afa0: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AFD8u;
            goto label_79afd8;
        }
    }
    ctx->pc = 0x79AFA4u;
    // 0x79afa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79afa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79afa8: 0xc06f45e  jal         func_1BD178
    ctx->pc = 0x79AFA8u;
    SET_GPR_U32(ctx, 31, 0x79AFB0u);
    ctx->pc = 0x79AFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AFA8u;
    // 0x79afac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD178u, 0x79AFA8u, 0x79AFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AFB0u;
label_79afb0:
    // 0x79afb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79afb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79afb4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79afb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79afb8: 0xc06f3ec  jal         func_1BCFB0
    ctx->pc = 0x79AFB8u;
    SET_GPR_U32(ctx, 31, 0x79AFC0u);
    ctx->pc = 0x79AFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AFB8u;
    // 0x79afbc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BCFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BCFB0u, 0x79AFB8u, 0x79AFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AFC0u;
label_79afc0:
    // 0x79afc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79afc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79afc4: 0xc06f45e  jal         func_1BD178
    ctx->pc = 0x79AFC4u;
    SET_GPR_U32(ctx, 31, 0x79AFCCu);
    ctx->pc = 0x79AFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AFC4u;
    // 0x79afc8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD178u, 0x79AFC4u, 0x79AFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AFCCu;
label_79afcc:
    // 0x79afcc: 0xc06f48a  jal         func_1BD228
    ctx->pc = 0x79AFCCu;
    SET_GPR_U32(ctx, 31, 0x79AFD4u);
    ctx->pc = 0x79AFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AFCCu;
    // 0x79afd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD228u, 0x79AFCCu, 0x79AFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AFD4u;
label_79afd4:
    // 0x79afd4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79afd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_79afd8:
    // 0x79afd8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79afd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79afdc: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79afdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x79afe0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79afe0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79afe4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79afe4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79afe8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x79afe8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79afec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79afecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79aff0: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x79AFF0u;
    SET_GPR_U32(ctx, 31, 0x79AFF8u);
    ctx->pc = 0x79AFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AFF0u;
    // 0x79aff4: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79AFF0u, 0x79AFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AFF8u;
label_79aff8:
    // 0x79aff8: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x79aff8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x79affc: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79affcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79b000: 0x2484ae50  addiu       $a0, $a0, -0x51B0
    ctx->pc = 0x79b000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
    // 0x79b004: 0x24a5c408  addiu       $a1, $a1, -0x3BF8
    ctx->pc = 0x79b004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951944));
    // 0x79b008: 0xc04ccb4  jal         func_1332D0
    ctx->pc = 0x79B008u;
    SET_GPR_U32(ctx, 31, 0x79B010u);
    ctx->pc = 0x79B00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B008u;
    // 0x79b00c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x79B008u, 0x79B010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B010u;
label_79b010:
    // 0x79b010: 0x8ea42f84  lw          $a0, 0x2F84($s5)
    ctx->pc = 0x79b010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    // 0x79b014: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x79B014u;
    SET_GPR_U32(ctx, 31, 0x79B01Cu);
    ctx->pc = 0x79B018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B014u;
    // 0x79b018: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x79B014u, 0x79B01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B01Cu;
label_79b01c:
    // 0x79b01c: 0xfba00080  sqc2        $vf0, 0x80($sp)
    ctx->pc = 0x79b01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79b020: 0x8fa60098  lw          $a2, 0x98($sp)
    ctx->pc = 0x79b020u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x79b024: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x79b024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x79b028: 0x2444ea60  addiu       $a0, $v0, -0x15A0
    ctx->pc = 0x79b028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961760));
    // 0x79b02c: 0xc0b0a92  jal         func_2C2A48
    ctx->pc = 0x79B02Cu;
    SET_GPR_U32(ctx, 31, 0x79B034u);
    ctx->pc = 0x79B030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B02Cu;
    // 0x79b030: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A48u, 0x79B02Cu, 0x79B034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B034u;
label_79b034:
    // 0x79b034: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x79b034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
    // 0x79b038: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x79b038u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
    // 0x79b03c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x79b03cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x79b040: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79b040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b044: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x79B044u;
    SET_GPR_U32(ctx, 31, 0x79B04Cu);
    ctx->pc = 0x79B048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B044u;
    // 0x79b048: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x79B044u, 0x79B04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B04Cu;
label_79b04c:
    // 0x79b04c: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x79B04Cu;
    SET_GPR_U32(ctx, 31, 0x79B054u);
    ctx->pc = 0x79B050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B04Cu;
    // 0x79b050: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x79B04Cu, 0x79B054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B054u;
label_79b054:
    // 0x79b054: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x79b054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x79b058: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79b058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b05c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79b05cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b060: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79b060u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b064: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x79B064u;
    SET_GPR_U32(ctx, 31, 0x79B06Cu);
    ctx->pc = 0x79B068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B064u;
    // 0x79b068: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79B064u, 0x79B06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B06Cu;
label_79b06c:
    // 0x79b06c: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x79b06cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x79b070: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x79B070u;
    SET_GPR_U32(ctx, 31, 0x79B078u);
    ctx->pc = 0x79B074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B070u;
    // 0x79b074: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x79B070u, 0x79B078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B078u;
label_79b078:
    // 0x79b078: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x79B078u;
    SET_GPR_U32(ctx, 31, 0x79B080u);
    ctx->pc = 0x79B07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B078u;
    // 0x79b07c: 0x8fa40090  lw          $a0, 0x90($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x79B078u, 0x79B080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B080u;
label_79b080:
    // 0x79b080: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x79b080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x79b084: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79b084u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b088: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x79b088u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x79b08c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79b08cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b090: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x79B090u;
    SET_GPR_U32(ctx, 31, 0x79B098u);
    ctx->pc = 0x79B094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B090u;
    // 0x79b094: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79B090u, 0x79B098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B098u;
label_79b098:
    // 0x79b098: 0x8fa40094  lw          $a0, 0x94($sp)
    ctx->pc = 0x79b098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x79b09c: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x79B09Cu;
    SET_GPR_U32(ctx, 31, 0x79B0A4u);
    ctx->pc = 0x79B0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B09Cu;
    // 0x79b0a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x79B09Cu, 0x79B0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B0A4u;
label_79b0a4:
    // 0x79b0a4: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x79B0A4u;
    SET_GPR_U32(ctx, 31, 0x79B0ACu);
    ctx->pc = 0x79B0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B0A4u;
    // 0x79b0a8: 0x8fa40094  lw          $a0, 0x94($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x79B0A4u, 0x79B0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B0ACu;
label_79b0ac:
    // 0x79b0ac: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x79b0acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x79b0b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79b0b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b0b4: 0x8fa40094  lw          $a0, 0x94($sp)
    ctx->pc = 0x79b0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x79b0b8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x79b0b8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x79b0bc: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x79B0BCu;
    SET_GPR_U32(ctx, 31, 0x79B0C4u);
    ctx->pc = 0x79B0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B0BCu;
    // 0x79b0c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79B0BCu, 0x79B0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B0C4u;
label_79b0c4:
    // 0x79b0c4: 0x8ea42f84  lw          $a0, 0x2F84($s5)
    ctx->pc = 0x79b0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    // 0x79b0c8: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79b0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79b0cc: 0xc0b0fb6  jal         func_2C3ED8
    ctx->pc = 0x79B0CCu;
    SET_GPR_U32(ctx, 31, 0x79B0D4u);
    ctx->pc = 0x79B0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B0CCu;
    // 0x79b0d0: 0x24a5c430  addiu       $a1, $a1, -0x3BD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x79B0CCu, 0x79B0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B0D4u;
label_79b0d4:
    // 0x79b0d4: 0xc0b101e  jal         func_2C4078
    ctx->pc = 0x79B0D4u;
    SET_GPR_U32(ctx, 31, 0x79B0DCu);
    ctx->pc = 0x79B0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B0D4u;
    // 0x79b0d8: 0x8ea42f84  lw          $a0, 0x2F84($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x79B0D4u, 0x79B0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B0DCu;
label_79b0dc:
    // 0x79b0dc: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x79B0DCu;
    SET_GPR_U32(ctx, 31, 0x79B0E4u);
    ctx->pc = 0x79B0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B0DCu;
    // 0x79b0e0: 0x8ea42f84  lw          $a0, 0x2F84($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x79B0DCu, 0x79B0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B0E4u;
label_79b0e4:
    // 0x79b0e4: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x79b0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x79b0e8: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x79b0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
    // 0x79b0ec: 0x24684c58  addiu       $t0, $v1, 0x4C58
    ctx->pc = 0x79b0ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 19544));
    // 0x79b0f0: 0x8082c3f8  lb          $v0, -0x3C08($a0)
    ctx->pc = 0x79b0f0u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x79C3F8u));
    // 0x79b0f4: 0x2483c3f8  addiu       $v1, $a0, -0x3C08
    ctx->pc = 0x79b0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951928));
    // 0x79b0f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79b0f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b0fc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x79B0FCu;
    {
        const bool branch_taken_0x79b0fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B0FCu;
        // 0x79b100: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b0fc) {
            ctx->pc = 0x79B138u;
            goto label_79b138;
        }
    }
    ctx->pc = 0x79B104u;
    // 0x79b104: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79b104u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b108: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79b108u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79b10c: 0x0  nop
    ctx->pc = 0x79b10cu;
    // NOP
label_79b110:
    // 0x79b110: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79b110u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79b114: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79b114u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79b118: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79b118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79b11c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79b11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79b120: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79b120u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79b124: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79B124u;
    {
        const bool branch_taken_0x79b124 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B124u;
        // 0x79b128: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b124) {
            ctx->pc = 0x79B138u;
            goto label_79b138;
        }
    }
    ctx->pc = 0x79B12Cu;
    // 0x79b12c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79b12cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79b130: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79B130u;
    {
        const bool branch_taken_0x79b130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79b130) {
            ctx->pc = 0x79B134u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B130u;
            // 0x79b134: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b110;
        }
    }
    ctx->pc = 0x79B138u;
label_79b138:
    // 0x79b138: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x79B138u;
    SET_GPR_U32(ctx, 31, 0x79B140u);
    ctx->pc = 0x79B13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B138u;
    // 0x79b13c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79B138u, 0x79B140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B140u;
label_79b140:
    // 0x79b140: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x79b140u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b144: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79B144u;
    {
        const bool branch_taken_0x79b144 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B144u;
        // 0x79b148: 0x3c03007a  lui         $v1, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b144) {
            ctx->pc = 0x79B158u;
            goto label_79b158;
        }
    }
    ctx->pc = 0x79B14Cu;
    // 0x79b14c: 0xc06f4fc  jal         func_1BD3F0
    ctx->pc = 0x79B14Cu;
    SET_GPR_U32(ctx, 31, 0x79B154u);
    ctx->pc = 0x79B150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B14Cu;
    // 0x79b150: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD3F0u, 0x79B14Cu, 0x79B154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B154u;
label_79b154:
    // 0x79b154: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79b154u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
label_79b158:
    // 0x79b158: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x79b158u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x79b15c: 0x8062c400  lb          $v0, -0x3C00($v1)
    ctx->pc = 0x79b15cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294951936)));
    // 0x79b160: 0x24884c58  addiu       $t0, $a0, 0x4C58
    ctx->pc = 0x79b160u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 19544));
    // 0x79b164: 0x2463c400  addiu       $v1, $v1, -0x3C00
    ctx->pc = 0x79b164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951936));
    // 0x79b168: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79b168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b16c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x79B16Cu;
    {
        const bool branch_taken_0x79b16c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B16Cu;
        // 0x79b170: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b16c) {
            ctx->pc = 0x79B1A8u;
            goto label_79b1a8;
        }
    }
    ctx->pc = 0x79B174u;
    // 0x79b174: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79b174u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b178: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79b178u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79b17c: 0x0  nop
    ctx->pc = 0x79b17cu;
    // NOP
label_79b180:
    // 0x79b180: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79b180u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79b184: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79b184u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79b188: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79b188u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79b18c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79b18cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79b190: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79b190u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79b194: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79B194u;
    {
        const bool branch_taken_0x79b194 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B194u;
        // 0x79b198: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b194) {
            ctx->pc = 0x79B1A8u;
            goto label_79b1a8;
        }
    }
    ctx->pc = 0x79B19Cu;
    // 0x79b19c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79b19cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79b1a0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79B1A0u;
    {
        const bool branch_taken_0x79b1a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79b1a0) {
            ctx->pc = 0x79B1A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B1A0u;
            // 0x79b1a4: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b180;
        }
    }
    ctx->pc = 0x79B1A8u;
label_79b1a8:
    // 0x79b1a8: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x79B1A8u;
    SET_GPR_U32(ctx, 31, 0x79B1B0u);
    ctx->pc = 0x79B1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B1A8u;
    // 0x79b1ac: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79B1A8u, 0x79B1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B1B0u;
label_79b1b0:
    // 0x79b1b0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x79B1B0u;
    {
        const bool branch_taken_0x79b1b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79b1b0) {
            ctx->pc = 0x79B1B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B1B0u;
            // 0x79b1b4: 0x8ea42f84  lw          $a0, 0x2F84($s5) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B1C4u;
            goto label_79b1c4;
        }
    }
    ctx->pc = 0x79B1B8u;
    // 0x79b1b8: 0xc06f4fc  jal         func_1BD3F0
    ctx->pc = 0x79B1B8u;
    SET_GPR_U32(ctx, 31, 0x79B1C0u);
    ctx->pc = 0x79B1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B1B8u;
    // 0x79b1bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD3F0u, 0x79B1B8u, 0x79B1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B1C0u;
label_79b1c0:
    // 0x79b1c0: 0x8ea42f84  lw          $a0, 0x2F84($s5)
    ctx->pc = 0x79b1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
label_79b1c4:
    // 0x79b1c4: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79b1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79b1c8: 0x24a5a800  addiu       $a1, $a1, -0x5800
    ctx->pc = 0x79b1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944768));
    // 0x79b1cc: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x79B1CCu;
    SET_GPR_U32(ctx, 31, 0x79B1D4u);
    ctx->pc = 0x79B1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B1CCu;
    // 0x79b1d0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x79B1CCu, 0x79B1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B1D4u;
label_79b1d4:
    // 0x79b1d4: 0x8ea32f84  lw          $v1, 0x2F84($s5)
    ctx->pc = 0x79b1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    // 0x79b1d8: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79B1D8u;
    SET_GPR_U32(ctx, 31, 0x79B1E0u);
    ctx->pc = 0x79B1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B1D8u;
    // 0x79b1dc: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79B1D8u, 0x79B1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B1E0u;
label_79b1e0:
    // 0x79b1e0: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x79b1e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x79b1e4: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x79b1e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x79b1e8: 0x7bb20110  lq          $s2, 0x110($sp)
    ctx->pc = 0x79b1e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x79b1ec: 0x7bb30100  lq          $s3, 0x100($sp)
    ctx->pc = 0x79b1ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x79b1f0: 0x7bb400f0  lq          $s4, 0xF0($sp)
    ctx->pc = 0x79b1f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x79b1f4: 0x7bb500e0  lq          $s5, 0xE0($sp)
    ctx->pc = 0x79b1f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x79b1f8: 0x7bb600d0  lq          $s6, 0xD0($sp)
    ctx->pc = 0x79b1f8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x79b1fc: 0x7bb700c0  lq          $s7, 0xC0($sp)
    ctx->pc = 0x79b1fcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x79b200: 0x7bbe00b0  lq          $fp, 0xB0($sp)
    ctx->pc = 0x79b200u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x79b204: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x79b204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x79b208: 0xc7b40140  lwc1        $f20, 0x140($sp)
    ctx->pc = 0x79b208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x79b20c: 0x3e00008  jr          $ra
    ctx->pc = 0x79B20Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B20Cu;
        // 0x79b210: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B20Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B214u;
    // 0x79b214: 0x0  nop
    ctx->pc = 0x79b214u;
    // NOP
    ctx->pc = 0x79b218u;
}
} // namespace gh_r100
