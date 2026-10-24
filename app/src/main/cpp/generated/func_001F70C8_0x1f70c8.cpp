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

// Function: func_001F70C8
// Address: 0x1f70c8 - 0x1f7228
void func_001F70C8_0x1f70c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F70C8_0x1f70c8");
#endif

    switch (ctx->pc) {
        case 0x1f710cu: goto label_1f710c;
        case 0x1f7160u: goto label_1f7160;
        case 0x1f71ecu: goto label_1f71ec;
        default: break;
    }

    ctx->pc = 0x1f70c8u;

    // 0x1f70c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f70c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f70cc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1f70ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1f70d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f70d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f70d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f70d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f70d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f70d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f70dc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1f70dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f70e0: 0x92020036  lbu         $v0, 0x36($s0)
    ctx->pc = 0x1f70e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 54)));
    // 0x1f70e4: 0x14510003  bne         $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F70E4u;
    {
        const bool branch_taken_0x1f70e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x1F70E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F70E4u;
        // 0x1f70e8: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f70e4) {
            ctx->pc = 0x1F70F4u;
            goto label_1f70f4;
        }
    }
    ctx->pc = 0x1F70ECu;
    // 0x1f70ec: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x1F70ECu;
    {
        const bool branch_taken_0x1f70ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F70F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F70ECu;
        // 0x1f70f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f70ec) {
            ctx->pc = 0x1F7214u;
            goto label_1f7214;
        }
    }
    ctx->pc = 0x1F70F4u;
label_1f70f4:
    // 0x1f70f4: 0x86030032  lh          $v1, 0x32($s0)
    ctx->pc = 0x1f70f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 50)));
    // 0x1f70f8: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x1f70f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x1f70fc: 0x1c600011  bgtz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F70FCu;
    {
        const bool branch_taken_0x1f70fc = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x1F7100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F70FCu;
        // 0x1f7100: 0x96020032  lhu         $v0, 0x32($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 50)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f70fc) {
            ctx->pc = 0x1F7144u;
            goto label_1f7144;
        }
    }
    ctx->pc = 0x1F7104u;
    // 0x1f7104: 0xc07dbe8  jal         func_1F6FA0
    ctx->pc = 0x1F7104u;
    SET_GPR_U32(ctx, 31, 0x1F710Cu);
    ctx->pc = 0x1F7108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7104u;
    // 0x1f7108: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6FA0u, 0x1F7104u, 0x1F710Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F710Cu;
label_1f710c:
    // 0x1f710c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1F710Cu;
    {
        const bool branch_taken_0x1f710c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F710Cu;
        // 0x1f7110: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f710c) {
            ctx->pc = 0x1F7150u;
            goto label_1f7150;
        }
    }
    ctx->pc = 0x1F7114u;
    // 0x1f7114: 0x92020035  lbu         $v0, 0x35($s0)
    ctx->pc = 0x1f7114u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 53)));
    // 0x1f7118: 0x54510008  bnel        $v0, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F7118u;
    {
        const bool branch_taken_0x1f7118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x1f7118) {
            ctx->pc = 0x1F711Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7118u;
            // 0x1f711c: 0xa2000035  sb          $zero, 0x35($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 53), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F713Cu;
            goto label_1f713c;
        }
    }
    ctx->pc = 0x1F7120u;
    // 0x1f7120: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x1f7120u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x1f7124: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x1f7124u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x1f7128: 0x8c64d6e8  lw          $a0, -0x2918($v1)
    ctx->pc = 0x1f7128u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3BD6E8u));
    // 0x1f712c: 0x8c820f30  lw          $v0, 0xF30($a0)
    ctx->pc = 0x1f712cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3888)));
    // 0x1f7130: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1f7130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1f7134: 0xac820f30  sw          $v0, 0xF30($a0)
    ctx->pc = 0x1f7134u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3888), GPR_U32(ctx, 2));
    // 0x1f7138: 0xa2000035  sb          $zero, 0x35($s0)
    ctx->pc = 0x1f7138u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 53), (uint8_t)GPR_U32(ctx, 0));
label_1f713c:
    // 0x1f713c: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1F713Cu;
    {
        const bool branch_taken_0x1f713c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F713Cu;
        // 0x1f7140: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f713c) {
            ctx->pc = 0x1F7214u;
            goto label_1f7214;
        }
    }
    ctx->pc = 0x1F7144u;
label_1f7144:
    // 0x1f7144: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f7144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f7148: 0xa6020032  sh          $v0, 0x32($s0)
    ctx->pc = 0x1f7148u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 50), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f714c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1f714cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_1f7150:
    // 0x1f7150: 0x8c44d6e8  lw          $a0, -0x2918($v0)
    ctx->pc = 0x1f7150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956776)));
    // 0x1f7154: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f7154u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7158: 0xc051478  jal         func_1451E0
    ctx->pc = 0x1F7158u;
    SET_GPR_U32(ctx, 31, 0x1F7160u);
    ctx->pc = 0x1F715Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7158u;
    // 0x1f715c: 0x24840ea0  addiu       $a0, $a0, 0xEA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1451E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1451E0u, 0x1F7158u, 0x1F7160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7160u;
label_1f7160:
    // 0x1f7160: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f7160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7164: 0x4a0000f  bltz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x1F7164u;
    {
        const bool branch_taken_0x1f7164 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1F7168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7164u;
        // 0x1f7168: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7164) {
            ctx->pc = 0x1F71A4u;
            goto label_1f71a4;
        }
    }
    ctx->pc = 0x1F716Cu;
    // 0x1f716c: 0x92020035  lbu         $v0, 0x35($s0)
    ctx->pc = 0x1f716cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 53)));
    // 0x1f7170: 0x14460007  bne         $v0, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F7170u;
    {
        const bool branch_taken_0x1f7170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x1F7174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7170u;
        // 0x1f7174: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7170) {
            ctx->pc = 0x1F7190u;
            goto label_1f7190;
        }
    }
    ctx->pc = 0x1F7178u;
    // 0x1f7178: 0x8e24d6e8  lw          $a0, -0x2918($s1)
    ctx->pc = 0x1f7178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294956776)));
    // 0x1f717c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1f717cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1f7180: 0x8c820f30  lw          $v0, 0xF30($a0)
    ctx->pc = 0x1f7180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3888)));
    // 0x1f7184: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1f7184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1f7188: 0xac820f30  sw          $v0, 0xF30($a0)
    ctx->pc = 0x1f7188u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3888), GPR_U32(ctx, 2));
    // 0x1f718c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f718cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f7190:
    // 0x1f7190: 0xae05002c  sw          $a1, 0x2C($s0)
    ctx->pc = 0x1f7190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 5));
    // 0x1f7194: 0xa6020032  sh          $v0, 0x32($s0)
    ctx->pc = 0x1f7194u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 50), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f7198: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f7198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f719c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1F719Cu;
    {
        const bool branch_taken_0x1f719c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F71A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F719Cu;
        // 0x1f71a0: 0xa2060036  sb          $a2, 0x36($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 54), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f719c) {
            ctx->pc = 0x1F7214u;
            goto label_1f7214;
        }
    }
    ctx->pc = 0x1F71A4u;
label_1f71a4:
    // 0x1f71a4: 0x92030035  lbu         $v1, 0x35($s0)
    ctx->pc = 0x1f71a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 53)));
    // 0x1f71a8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F71A8u;
    {
        const bool branch_taken_0x1f71a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F71ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F71A8u;
        // 0x1f71ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f71a8) {
            ctx->pc = 0x1F71C0u;
            goto label_1f71c0;
        }
    }
    ctx->pc = 0x1F71B0u;
    // 0x1f71b0: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1F71B0u;
    {
        const bool branch_taken_0x1f71b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F71B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F71B0u;
        // 0x1f71b4: 0x8e23d6e8  lw          $v1, -0x2918($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294956776)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f71b0) {
            ctx->pc = 0x1F7204u;
            goto label_1f7204;
        }
    }
    ctx->pc = 0x1F71B8u;
    // 0x1f71b8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1F71B8u;
    {
        const bool branch_taken_0x1f71b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F71BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F71B8u;
        // 0x1f71bc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f71b8) {
            ctx->pc = 0x1F7218u;
            goto label_1f7218;
        }
    }
    ctx->pc = 0x1F71C0u;
label_1f71c0:
    // 0x1f71c0: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1f71c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1f71c4: 0x14a20013  bne         $a1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1F71C4u;
    {
        const bool branch_taken_0x1f71c4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F71C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F71C4u;
        // 0x1f71c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f71c4) {
            ctx->pc = 0x1F7214u;
            goto label_1f7214;
        }
    }
    ctx->pc = 0x1F71CCu;
    // 0x1f71cc: 0x8e24d6e8  lw          $a0, -0x2918($s1)
    ctx->pc = 0x1f71ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294956776)));
    // 0x1f71d0: 0x8e050038  lw          $a1, 0x38($s0)
    ctx->pc = 0x1f71d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1f71d4: 0x8e06003c  lw          $a2, 0x3C($s0)
    ctx->pc = 0x1f71d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1f71d8: 0x24840ea0  addiu       $a0, $a0, 0xEA0
    ctx->pc = 0x1f71d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3744));
    // 0x1f71dc: 0x8e070040  lw          $a3, 0x40($s0)
    ctx->pc = 0x1f71dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1f71e0: 0x92080034  lbu         $t0, 0x34($s0)
    ctx->pc = 0x1f71e0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1f71e4: 0xc0513f6  jal         func_144FD8
    ctx->pc = 0x1F71E4u;
    SET_GPR_U32(ctx, 31, 0x1F71ECu);
    ctx->pc = 0x1F71E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F71E4u;
    // 0x1f71e8: 0x96090030  lhu         $t1, 0x30($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144FD8u, 0x1F71E4u, 0x1F71ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F71ECu;
label_1f71ec:
    // 0x1f71ec: 0x92020035  lbu         $v0, 0x35($s0)
    ctx->pc = 0x1f71ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 53)));
    // 0x1f71f0: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x1f71f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x1f71f4: 0xa6030032  sh          $v1, 0x32($s0)
    ctx->pc = 0x1f71f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 50), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f71f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f71f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f71fc: 0xa2020035  sb          $v0, 0x35($s0)
    ctx->pc = 0x1f71fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 53), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f7200: 0x8e23d6e8  lw          $v1, -0x2918($s1)
    ctx->pc = 0x1f7200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294956776)));
label_1f7204:
    // 0x1f7204: 0x946212c2  lhu         $v0, 0x12C2($v1)
    ctx->pc = 0x1f7204u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4802)));
    // 0x1f7208: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f7208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f720c: 0xa6020030  sh          $v0, 0x30($s0)
    ctx->pc = 0x1f720cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f7210: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f7210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f7214:
    // 0x1f7214: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1f7214u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f7218:
    // 0x1f7218: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f7218u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f721c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f721cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f7220: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7220u;
        // 0x1f7224: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7228u;
}
