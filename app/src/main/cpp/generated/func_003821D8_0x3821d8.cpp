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

// Function: func_003821D8
// Address: 0x3821d8 - 0x3822d0
void func_003821D8_0x3821d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003821D8_0x3821d8");
#endif

    switch (ctx->pc) {
        case 0x382200u: goto label_382200;
        case 0x382220u: goto label_382220;
        case 0x382240u: goto label_382240;
        case 0x382258u: goto label_382258;
        case 0x382288u: goto label_382288;
        case 0x38229cu: goto label_38229c;
        default: break;
    }

    ctx->pc = 0x3821d8u;

    // 0x3821d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3821d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3821dc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3821dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3821e0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3821e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3821e4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3821e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3821e8: 0x26110030  addiu       $s1, $s0, 0x30
    ctx->pc = 0x3821e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x3821ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3821ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3821f0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3821f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x3821f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3821f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3821f8: 0xc0e0a14  jal         func_382850
    ctx->pc = 0x3821F8u;
    SET_GPR_U32(ctx, 31, 0x382200u);
    ctx->pc = 0x3821FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3821F8u;
    // 0x3821fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x382850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x382850u, 0x3821F8u, 0x382200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382200u;
label_382200:
    // 0x382200: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x382200u;
    {
        const bool branch_taken_0x382200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x382204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382200u;
        // 0x382204: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382200) {
            ctx->pc = 0x382274u;
            goto label_382274;
        }
    }
    ctx->pc = 0x382208u;
    // 0x382208: 0x18400029  blez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x382208u;
    {
        const bool branch_taken_0x382208 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x38220Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382208u;
        // 0x38220c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382208) {
            ctx->pc = 0x3822B0u;
            goto label_3822b0;
        }
    }
    ctx->pc = 0x382210u;
    // 0x382210: 0x26130004  addiu       $s3, $s0, 0x4
    ctx->pc = 0x382210u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x382214: 0x26120048  addiu       $s2, $s0, 0x48
    ctx->pc = 0x382214u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    // 0x382218: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x382218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x38221c: 0x0  nop
    ctx->pc = 0x38221cu;
    // NOP
label_382220:
    // 0x382220: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x382220u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382224: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x382224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x382228: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x382228u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x38222c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x38222Cu;
    {
        const bool branch_taken_0x38222c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x382230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38222Cu;
        // 0x382230: 0x101040  sll         $v0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38222c) {
            ctx->pc = 0x382248u;
            goto label_382248;
        }
    }
    ctx->pc = 0x382234u;
    // 0x382234: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x382234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x382238: 0xc0cbb1e  jal         func_32EC78
    ctx->pc = 0x382238u;
    SET_GPR_U32(ctx, 31, 0x382240u);
    ctx->pc = 0x38223Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382238u;
    // 0x38223c: 0x2406fc40  addiu       $a2, $zero, -0x3C0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EC78u, 0x382238u, 0x382240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382240u;
label_382240:
    // 0x382240: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x382240u;
    {
        const bool branch_taken_0x382240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x382244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382240u;
        // 0x382244: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382240) {
            ctx->pc = 0x38225Cu;
            goto label_38225c;
        }
    }
    ctx->pc = 0x382248u;
label_382248:
    // 0x382248: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x382248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x38224c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x38224cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x382250: 0xc0cbb1e  jal         func_32EC78
    ctx->pc = 0x382250u;
    SET_GPR_U32(ctx, 31, 0x382258u);
    ctx->pc = 0x382254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382250u;
    // 0x382254: 0x84460000  lh          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EC78u, 0x382250u, 0x382258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382258u;
label_382258:
    // 0x382258: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x382258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_38225c:
    // 0x38225c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x38225cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382260: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x382260u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x382264: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x382264u;
    {
        const bool branch_taken_0x382264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x382268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382264u;
        // 0x382268: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382264) {
            ctx->pc = 0x382220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_382220;
        }
    }
    ctx->pc = 0x38226Cu;
    // 0x38226c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x38226Cu;
    {
        const bool branch_taken_0x38226c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x382270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38226Cu;
        // 0x382270: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38226c) {
            ctx->pc = 0x3822B4u;
            goto label_3822b4;
        }
    }
    ctx->pc = 0x382274u;
label_382274:
    // 0x382274: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x382274u;
    {
        const bool branch_taken_0x382274 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x382278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382274u;
        // 0x382278: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382274) {
            ctx->pc = 0x3822B0u;
            goto label_3822b0;
        }
    }
    ctx->pc = 0x38227Cu;
    // 0x38227c: 0x26120004  addiu       $s2, $s0, 0x4
    ctx->pc = 0x38227cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x382280: 0x24b00001  addiu       $s0, $a1, 0x1
    ctx->pc = 0x382280u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x382284: 0x0  nop
    ctx->pc = 0x382284u;
    // NOP
label_382288:
    // 0x382288: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x382288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x38228c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x38228cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x382290: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x382290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x382294: 0xc0cbb1e  jal         func_32EC78
    ctx->pc = 0x382294u;
    SET_GPR_U32(ctx, 31, 0x38229Cu);
    ctx->pc = 0x382298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382294u;
    // 0x382298: 0x84460000  lh          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EC78u, 0x382294u, 0x38229Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38229Cu;
label_38229c:
    // 0x38229c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x38229cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3822a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3822a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3822a4: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x3822a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3822a8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3822A8u;
    {
        const bool branch_taken_0x3822a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3822ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3822A8u;
        // 0x3822ac: 0x24b00001  addiu       $s0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3822a8) {
            ctx->pc = 0x382288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_382288;
        }
    }
    ctx->pc = 0x3822B0u;
label_3822b0:
    // 0x3822b0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3822b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3822b4:
    // 0x3822b4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3822b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3822b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3822b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3822bc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3822bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3822c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3822c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3822c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3822C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3822C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3822C4u;
        // 0x3822c8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3822C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3822CCu;
    // 0x3822cc: 0x0  nop
    ctx->pc = 0x3822ccu;
    // NOP
    ctx->pc = 0x3822d0u;
}
