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

// Function: func_001331B8
// Address: 0x1331b8 - 0x1332d0
void func_001331B8_0x1331b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001331B8_0x1331b8");
#endif

    switch (ctx->pc) {
        case 0x1331e8u: goto label_1331e8;
        case 0x133210u: goto label_133210;
        case 0x133270u: goto label_133270;
        default: break;
    }

    ctx->pc = 0x1331b8u;

    // 0x1331b8: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x1331b8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1331bc: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x1331bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1331c0: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x1331C0u;
    {
        const bool branch_taken_0x1331c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1331c0) {
            ctx->pc = 0x1332C8u;
            goto label_1332c8;
        }
    }
    ctx->pc = 0x1331C8u;
    // 0x1331c8: 0x94420020  lhu         $v0, 0x20($v0)
    ctx->pc = 0x1331c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1331cc: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x1331CCu;
    {
        const bool branch_taken_0x1331cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1331D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1331CCu;
        // 0x1331d0: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1331cc) {
            ctx->pc = 0x1332A8u;
            goto label_1332a8;
        }
    }
    ctx->pc = 0x1331D4u;
    // 0x1331d4: 0x3c0dffff  lui         $t5, 0xFFFF
    ctx->pc = 0x1331d4u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)65535 << 16));
    // 0x1331d8: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x1331d8u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1331dc: 0x35adffff  ori         $t5, $t5, 0xFFFF
    ctx->pc = 0x1331dcu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)65535);
    // 0x1331e0: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x1331e0u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1331e4: 0x24180014  addiu       $t8, $zero, 0x14
    ctx->pc = 0x1331e4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1331e8:
    // 0x1331e8: 0x8d420004  lw          $v0, 0x4($t2)
    ctx->pc = 0x1331e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x1331ec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1331ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1331f0: 0x1c21821  addu        $v1, $t6, $v0
    ctx->pc = 0x1331f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x1331f4: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x1331f4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1331f8: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x1331f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x1331fc: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x1331fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x133200: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x133200u;
    {
        const bool branch_taken_0x133200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x133204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133200u;
        // 0x133204: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133200) {
            ctx->pc = 0x133238u;
            goto label_133238;
        }
    }
    ctx->pc = 0x133208u;
    // 0x133208: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x133208u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13320c: 0x80e20000  lb          $v0, 0x0($a3)
    ctx->pc = 0x13320cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_133210:
    // 0x133210: 0x820c0  sll         $a0, $t0, 3
    ctx->pc = 0x133210u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x133214: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x133214u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x133218: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x133218u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x13321c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x13321cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x133220: 0x29030008  slti        $v1, $t0, 0x8
    ctx->pc = 0x133220u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x133224: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x133224u;
    {
        const bool branch_taken_0x133224 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x133228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133224u;
        // 0x133228: 0x1224825  or          $t1, $t1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133224) {
            ctx->pc = 0x133238u;
            goto label_133238;
        }
    }
    ctx->pc = 0x13322Cu;
    // 0x13322c: 0x80e20000  lb          $v0, 0x0($a3)
    ctx->pc = 0x13322cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x133230: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x133230u;
    {
        const bool branch_taken_0x133230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x133230) {
            ctx->pc = 0x133234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133230u;
            // 0x133234: 0x80e20000  lb          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x133210u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_133210;
        }
    }
    ctx->pc = 0x133238u;
label_133238:
    // 0x133238: 0x54a9001d  bnel        $a1, $t1, . + 4 + (0x1D << 2)
    ctx->pc = 0x133238u;
    {
        const bool branch_taken_0x133238 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 9));
        if (branch_taken_0x133238) {
            ctx->pc = 0x13323Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133238u;
            // 0x13323c: 0x8d430000  lw          $v1, 0x0($t2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1332B0u;
            goto label_1332b0;
        }
    }
    ctx->pc = 0x133240u;
    // 0x133240: 0x1eb1021  addu        $v0, $t7, $t3
    ctx->pc = 0x133240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 11)));
    // 0x133244: 0x9444000a  lhu         $a0, 0xA($v0)
    ctx->pc = 0x133244u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x133248: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x133248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x13324c: 0x108d0016  beq         $a0, $t5, . + 4 + (0x16 << 2)
    ctx->pc = 0x13324Cu;
    {
        const bool branch_taken_0x13324c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 13));
        ctx->pc = 0x133250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13324Cu;
        // 0x133250: 0x94430008  lhu         $v1, 0x8($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13324c) {
            ctx->pc = 0x1332A8u;
            goto label_1332a8;
        }
    }
    ctx->pc = 0x133254u;
    // 0x133254: 0x783818  mult        $a3, $v1, $t8
    ctx->pc = 0x133254u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x133258: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x133258u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x13325c: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x13325cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x133260: 0x3529fffd  ori         $t1, $t1, 0xFFFD
    ctx->pc = 0x133260u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65533);
    // 0x133264: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x133264u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x133268: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x133268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13326c: 0x0  nop
    ctx->pc = 0x13326cu;
    // NOP
label_133270:
    // 0x133270: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x133270u;
    {
        const bool branch_taken_0x133270 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x133274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133270u;
        // 0x133274: 0x8d430014  lw          $v1, 0x14($t2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133270) {
            ctx->pc = 0x133288u;
            goto label_133288;
        }
    }
    ctx->pc = 0x133278u;
    // 0x133278: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x133278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x13327c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x13327cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x133280: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x133280u;
    {
        const bool branch_taken_0x133280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133280u;
        // 0x133284: 0x491024  and         $v0, $v0, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133280) {
            ctx->pc = 0x133294u;
            goto label_133294;
        }
    }
    ctx->pc = 0x133288u;
label_133288:
    // 0x133288: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x133288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x13328c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x13328cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x133290: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x133290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_133294:
    // 0x133294: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x133294u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x133298: 0x24e70014  addiu       $a3, $a3, 0x14
    ctx->pc = 0x133298u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
    // 0x13329c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x13329cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1332a0: 0x1488fff3  bne         $a0, $t0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1332A0u;
    {
        const bool branch_taken_0x1332a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 8));
        ctx->pc = 0x1332A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1332A0u;
        // 0x1332a4: 0x24a50014  addiu       $a1, $a1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1332a0) {
            ctx->pc = 0x133270u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_133270;
        }
    }
    ctx->pc = 0x1332A8u;
label_1332a8:
    // 0x1332a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1332A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1332A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1332B0u;
label_1332b0:
    // 0x1332b0: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x1332b0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x1332b4: 0x25ef0014  addiu       $t7, $t7, 0x14
    ctx->pc = 0x1332b4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 20));
    // 0x1332b8: 0x94620020  lhu         $v0, 0x20($v1)
    ctx->pc = 0x1332b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1332bc: 0x182102b  sltu        $v0, $t4, $v0
    ctx->pc = 0x1332bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1332c0: 0x1440ffc9  bnez        $v0, . + 4 + (-0x37 << 2)
    ctx->pc = 0x1332C0u;
    {
        const bool branch_taken_0x1332c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1332C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1332C0u;
        // 0x1332c4: 0x25ce0014  addiu       $t6, $t6, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1332c0) {
            ctx->pc = 0x1331E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1331e8;
        }
    }
    ctx->pc = 0x1332C8u;
label_1332c8:
    // 0x1332c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1332C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1332C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1332D0u;
}
