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

// Function: _cpr8
// Address: 0x39aea0 - 0x39b130
void _cpr8_0x39aea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_cpr8_0x39aea0");
#endif

    switch (ctx->pc) {
        case 0x39af88u: goto label_39af88;
        case 0x39af98u: goto label_39af98;
        case 0x39afa0u: goto label_39afa0;
        case 0x39afe4u: goto label_39afe4;
        case 0x39aff8u: goto label_39aff8;
        case 0x39b01cu: goto label_39b01c;
        case 0x39b060u: goto label_39b060;
        case 0x39b070u: goto label_39b070;
        case 0x39b098u: goto label_39b098;
        default: break;
    }

    ctx->pc = 0x39aea0u;

    // 0x39aea0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x39aea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x39aea4: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x39aea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x39aea8: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x39aea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x39aeac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x39aeacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x39aeb0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x39aeb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x39aeb4: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x39aeb4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39aeb8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x39aeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x39aebc: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x39aebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x39aec0: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x39aec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x39aec4: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x39aec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x39aec8: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x39aec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x39aecc: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x39aeccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x39aed0: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x39aed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x39aed4: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x39aed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x39aed8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x39aed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x39aedc: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x39aedcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39aee0: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x39aee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x39aee4: 0x8c8400ec  lw          $a0, 0xEC($a0)
    ctx->pc = 0x39aee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 236)));
    // 0x39aee8: 0x8cc50184  lw          $a1, 0x184($a2)
    ctx->pc = 0x39aee8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 388)));
    // 0x39aeec: 0x629024  and         $s2, $v1, $v0
    ctx->pc = 0x39aeecu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x39aef0: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x39aef0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x39aef4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x39aef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x39aef8: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x39AEF8u;
    {
        const bool branch_taken_0x39aef8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x39AEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AEF8u;
        // 0x39aefc: 0xafa40008  sw          $a0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39aef8) {
            ctx->pc = 0x39AF14u;
            goto label_39af14;
        }
    }
    ctx->pc = 0x39AF00u;
    // 0x39af00: 0x8cc400f4  lw          $a0, 0xF4($a2)
    ctx->pc = 0x39af00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 244)));
    // 0x39af04: 0x14800011  bnez        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x39AF04u;
    {
        const bool branch_taken_0x39af04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x39AF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AF04u;
        // 0x39af08: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39af04) {
            ctx->pc = 0x39AF4Cu;
            goto label_39af4c;
        }
    }
    ctx->pc = 0x39AF0Cu;
    // 0x39af0c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x39AF0Cu;
    {
        const bool branch_taken_0x39af0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39AF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AF0Cu;
        // 0x39af10: 0x8ec20010  lw          $v0, 0x10($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39af0c) {
            ctx->pc = 0x39AF20u;
            goto label_39af20;
        }
    }
    ctx->pc = 0x39AF14u;
label_39af14:
    // 0x39af14: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x39af14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39af18: 0x8ce300f4  lw          $v1, 0xF4($a3)
    ctx->pc = 0x39af18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 244)));
    // 0x39af1c: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x39af1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_39af20:
    // 0x39af20: 0x24040180  addiu       $a0, $zero, 0x180
    ctx->pc = 0x39af20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x39af24: 0x44a818  mult        $s5, $v0, $a0
    ctx->pc = 0x39af24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
    // 0x39af28: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x39AF28u;
    {
        const bool branch_taken_0x39af28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39AF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AF28u;
        // 0x39af2c: 0x15a103  sra         $s4, $s5, 4 (Delay Slot)
        SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39af28) {
            ctx->pc = 0x39AF3Cu;
            goto label_39af3c;
        }
    }
    ctx->pc = 0x39AF30u;
    // 0x39af30: 0x31103  sra         $v0, $v1, 4
    ctx->pc = 0x39af30u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
    // 0x39af34: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x39AF34u;
    {
        const bool branch_taken_0x39af34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39AF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AF34u;
        // 0x39af38: 0x44f018  mult        $fp, $v0, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x39af34) {
            ctx->pc = 0x39AF40u;
            goto label_39af40;
        }
    }
    ctx->pc = 0x39AF3Cu;
label_39af3c:
    // 0x39af3c: 0x2a0f02d  daddu       $fp, $s5, $zero
    ctx->pc = 0x39af3cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_39af40:
    // 0x39af40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39af40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39af44: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x39AF44u;
    {
        const bool branch_taken_0x39af44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39AF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AF44u;
        // 0x39af48: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39af44) {
            ctx->pc = 0x39AF74u;
            goto label_39af74;
        }
    }
    ctx->pc = 0x39AF4Cu;
label_39af4c:
    // 0x39af4c: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x39af4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x39af50: 0x24050180  addiu       $a1, $zero, 0x180
    ctx->pc = 0x39af50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x39af54: 0x240300c0  addiu       $v1, $zero, 0xC0
    ctx->pc = 0x39af54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x39af58: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x39af58u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x39af5c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x39af5cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x39af60: 0x83f018  mult        $fp, $a0, $v1
    ctx->pc = 0x39af60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)result); }
    // 0x39af64: 0x7045a818  mult1       $s5, $v0, $a1
    ctx->pc = 0x39af64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
    // 0x39af68: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x39af68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x39af6c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x39af6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x39af70: 0x15a103  sra         $s4, $s5, 4
    ctx->pc = 0x39af70u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 21), 4));
label_39af74:
    // 0x39af74: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x39af74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x39af78: 0x10c00061  beqz        $a2, . + 4 + (0x61 << 2)
    ctx->pc = 0x39AF78u;
    {
        const bool branch_taken_0x39af78 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x39AF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AF78u;
        // 0x39af7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39af78) {
            ctx->pc = 0x39B100u;
            goto label_39b100;
        }
    }
    ctx->pc = 0x39AF80u;
    // 0x39af80: 0x8ec6000c  lw          $a2, 0xC($s6)
    ctx->pc = 0x39af80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x39af84: 0x0  nop
    ctx->pc = 0x39af84u;
    // NOP
label_39af88:
    // 0x39af88: 0x8fb10008  lw          $s1, 0x8($sp)
    ctx->pc = 0x39af88u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39af8c: 0x18c0004f  blez        $a2, . + 4 + (0x4F << 2)
    ctx->pc = 0x39AF8Cu;
    {
        const bool branch_taken_0x39af8c = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x39AF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AF8Cu;
        // 0x39af90: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39af8c) {
            ctx->pc = 0x39B0CCu;
            goto label_39b0cc;
        }
    }
    ctx->pc = 0x39AF94u;
    // 0x39af94: 0x24b70001  addiu       $s7, $a1, 0x1
    ctx->pc = 0x39af94u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_39af98:
    // 0x39af98: 0xc0ed8e8  jal         func_3B63A0
    ctx->pc = 0x39AF98u;
    SET_GPR_U32(ctx, 31, 0x39AFA0u);
    ctx->pc = 0x3B63A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63A0u, 0x39AF98u, 0x39AFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AFA0u;
label_39afa0:
    // 0x39afa0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x39afa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x39afa4: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x39afa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x39afa8: 0x3463d480  ori         $v1, $v1, 0xD480
    ctx->pc = 0x39afa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54400);
    // 0x39afac: 0x34a5d410  ori         $a1, $a1, 0xD410
    ctx->pc = 0x39afacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54288);
    // 0x39afb0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x39afb0u;
    runtime->Store32(rdram, ctx, 0x1000D480u, GPR_U32(ctx, 0));
    // 0x39afb4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x39afb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x39afb8: 0xacb20000  sw          $s2, 0x0($a1)
    ctx->pc = 0x39afb8u;
    runtime->Store32(rdram, ctx, 0x1000D410u, GPR_U32(ctx, 18));
    // 0x39afbc: 0x3484d420  ori         $a0, $a0, 0xD420
    ctx->pc = 0x39afbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54304);
    // 0x39afc0: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x39afc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x39afc4: 0xac940000  sw          $s4, 0x0($a0)
    ctx->pc = 0x39afc4u;
    runtime->Store32(rdram, ctx, 0x1000D420u, GPR_U32(ctx, 20));
    // 0x39afc8: 0x34a5d400  ori         $a1, $a1, 0xD400
    ctx->pc = 0x39afc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54272);
    // 0x39afcc: 0x24030101  addiu       $v1, $zero, 0x101
    ctx->pc = 0x39afccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x39afd0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x39afd0u;
    runtime->Store32(rdram, ctx, 0x1000D400u, GPR_U32(ctx, 3));
    // 0x39afd4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39AFD4u;
    {
        const bool branch_taken_0x39afd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39AFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AFD4u;
        // 0x39afd8: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39afd4) {
            ctx->pc = 0x39AFE8u;
            goto label_39afe8;
        }
    }
    ctx->pc = 0x39AFDCu;
    // 0x39afdc: 0xc0ed8fc  jal         func_3B63F0
    ctx->pc = 0x39AFDCu;
    SET_GPR_U32(ctx, 31, 0x39AFE4u);
    ctx->pc = 0x3B63F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63F0u, 0x39AFDCu, 0x39AFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AFE4u;
label_39afe4:
    // 0x39afe4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x39afe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_39afe8:
    // 0x39afe8: 0x2559821  addu        $s3, $s2, $s5
    ctx->pc = 0x39afe8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
    // 0x39afec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x39afecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x39aff0: 0x23e9021  addu        $s2, $s1, $fp
    ctx->pc = 0x39aff0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 30)));
    // 0x39aff4: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x39aff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_39aff8:
    // 0x39aff8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x39aff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x39affc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x39affcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x39b000: 0x0  nop
    ctx->pc = 0x39b000u;
    // NOP
    // 0x39b004: 0x0  nop
    ctx->pc = 0x39b004u;
    // NOP
    // 0x39b008: 0x0  nop
    ctx->pc = 0x39b008u;
    // NOP
    // 0x39b00c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x39B00Cu;
    {
        const bool branch_taken_0x39b00c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39b00c) {
            ctx->pc = 0x39AFF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39aff8;
        }
    }
    ctx->pc = 0x39B014u;
    // 0x39b014: 0xc0ed8e8  jal         func_3B63A0
    ctx->pc = 0x39B014u;
    SET_GPR_U32(ctx, 31, 0x39B01Cu);
    ctx->pc = 0x3B63A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63A0u, 0x39B014u, 0x39B01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B01Cu;
label_39b01c:
    // 0x39b01c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x39b01cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x39b020: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x39b020u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x39b024: 0x3463d080  ori         $v1, $v1, 0xD080
    ctx->pc = 0x39b024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53376);
    // 0x39b028: 0x34a5d010  ori         $a1, $a1, 0xD010
    ctx->pc = 0x39b028u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)53264);
    // 0x39b02c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x39b02cu;
    runtime->Store32(rdram, ctx, 0x1000D080u, GPR_U32(ctx, 0));
    // 0x39b030: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x39b030u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x39b034: 0xacb10000  sw          $s1, 0x0($a1)
    ctx->pc = 0x39b034u;
    runtime->Store32(rdram, ctx, 0x1000D010u, GPR_U32(ctx, 17));
    // 0x39b038: 0x3484d020  ori         $a0, $a0, 0xD020
    ctx->pc = 0x39b038u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53280);
    // 0x39b03c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x39b03cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x39b040: 0xac940000  sw          $s4, 0x0($a0)
    ctx->pc = 0x39b040u;
    runtime->Store32(rdram, ctx, 0x1000D020u, GPR_U32(ctx, 20));
    // 0x39b044: 0x34a5d000  ori         $a1, $a1, 0xD000
    ctx->pc = 0x39b044u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)53248);
    // 0x39b048: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x39b048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x39b04c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x39b04cu;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 3));
    // 0x39b050: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39B050u;
    {
        const bool branch_taken_0x39b050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B050u;
        // 0x39b054: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b050) {
            ctx->pc = 0x39B064u;
            goto label_39b064;
        }
    }
    ctx->pc = 0x39B058u;
    // 0x39b058: 0xc0ed8fc  jal         func_3B63F0
    ctx->pc = 0x39B058u;
    SET_GPR_U32(ctx, 31, 0x39B060u);
    ctx->pc = 0x3B63F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63F0u, 0x39B058u, 0x39B060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B060u;
label_39b060:
    // 0x39b060: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x39b060u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_39b064:
    // 0x39b064: 0x8ec6000c  lw          $a2, 0xC($s6)
    ctx->pc = 0x39b064u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x39b068: 0x3463d000  ori         $v1, $v1, 0xD000
    ctx->pc = 0x39b068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53248);
    // 0x39b06c: 0x0  nop
    ctx->pc = 0x39b06cu;
    // NOP
label_39b070:
    // 0x39b070: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x39b070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x39b074: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x39b074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x39b078: 0x0  nop
    ctx->pc = 0x39b078u;
    // NOP
    // 0x39b07c: 0x0  nop
    ctx->pc = 0x39b07cu;
    // NOP
    // 0x39b080: 0x0  nop
    ctx->pc = 0x39b080u;
    // NOP
    // 0x39b084: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x39B084u;
    {
        const bool branch_taken_0x39b084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39b084) {
            ctx->pc = 0x39B070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39b070;
        }
    }
    ctx->pc = 0x39B08Cu;
    // 0x39b08c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x39b08cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x39b090: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x39b090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53280);
    // 0x39b094: 0x0  nop
    ctx->pc = 0x39b094u;
    // NOP
label_39b098:
    // 0x39b098: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x39b098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x39b09c: 0x0  nop
    ctx->pc = 0x39b09cu;
    // NOP
    // 0x39b0a0: 0x0  nop
    ctx->pc = 0x39b0a0u;
    // NOP
    // 0x39b0a4: 0x0  nop
    ctx->pc = 0x39b0a4u;
    // NOP
    // 0x39b0a8: 0x0  nop
    ctx->pc = 0x39b0a8u;
    // NOP
    // 0x39b0ac: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x39B0ACu;
    {
        const bool branch_taken_0x39b0ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39b0ac) {
            ctx->pc = 0x39B098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39b098;
        }
    }
    ctx->pc = 0x39B0B4u;
    // 0x39b0b4: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x39b0b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b0b8: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x39b0b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x39b0bc: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
    ctx->pc = 0x39B0BCu;
    {
        const bool branch_taken_0x39b0bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39B0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B0BCu;
        // 0x39b0c0: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b0bc) {
            ctx->pc = 0x39AF98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39af98;
        }
    }
    ctx->pc = 0x39B0C4u;
    // 0x39b0c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x39B0C4u;
    {
        const bool branch_taken_0x39b0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B0C4u;
        // 0x39b0c8: 0x8fa70000  lw          $a3, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b0c4) {
            ctx->pc = 0x39B0D4u;
            goto label_39b0d4;
        }
    }
    ctx->pc = 0x39B0CCu;
label_39b0cc:
    // 0x39b0cc: 0x24b70001  addiu       $s7, $a1, 0x1
    ctx->pc = 0x39b0ccu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x39b0d0: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x39b0d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_39b0d4:
    // 0x39b0d4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x39b0d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b0d8: 0x240300c0  addiu       $v1, $zero, 0xC0
    ctx->pc = 0x39b0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x39b0dc: 0x8ce200f8  lw          $v0, 0xF8($a3)
    ctx->pc = 0x39b0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 248)));
    // 0x39b0e0: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x39b0e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x39b0e4: 0xa7202a  slt         $a0, $a1, $a3
    ctx->pc = 0x39b0e4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x39b0e8: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x39b0e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39b0ec: 0xe00013  mtlo        $a3
    ctx->pc = 0x39b0ecu;
    ctx->lo = GPR_U64(ctx, 7);
    // 0x39b0f0: 0x70430000  madd        $zero, $v0, $v1
    ctx->pc = 0x39b0f0u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
    // 0x39b0f4: 0x3812  mflo        $a3
    ctx->pc = 0x39b0f4u;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x39b0f8: 0x1480ffa3  bnez        $a0, . + 4 + (-0x5D << 2)
    ctx->pc = 0x39B0F8u;
    {
        const bool branch_taken_0x39b0f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x39B0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B0F8u;
        // 0x39b0fc: 0xafa70008  sw          $a3, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b0f8) {
            ctx->pc = 0x39AF88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39af88;
        }
    }
    ctx->pc = 0x39B100u;
label_39b100:
    // 0x39b100: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x39b100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x39b104: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x39b104u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x39b108: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x39b108u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x39b10c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x39b10cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x39b110: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x39b110u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x39b114: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x39b114u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x39b118: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x39b118u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x39b11c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x39b11cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x39b120: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x39b120u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39b124: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x39b124u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39b128: 0x3e00008  jr          $ra
    ctx->pc = 0x39B128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39B12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B128u;
        // 0x39b12c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39B128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39B130u;
}
