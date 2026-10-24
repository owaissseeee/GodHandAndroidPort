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

// Function: func_00383170
// Address: 0x383170 - 0x383280
void func_00383170_0x383170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00383170_0x383170");
#endif

    switch (ctx->pc) {
        case 0x3831a0u: goto label_3831a0;
        case 0x3831c0u: goto label_3831c0;
        case 0x3831e0u: goto label_3831e0;
        case 0x3831f8u: goto label_3831f8;
        case 0x383228u: goto label_383228;
        case 0x38323cu: goto label_38323c;
        case 0x383264u: goto label_383264;
        default: break;
    }

    ctx->pc = 0x383170u;

    // 0x383170: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x383170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x383174: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x383174u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x383178: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x383178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x38317c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x38317cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x383180: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x383180u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383184: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x383184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x383188: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x383188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x38318c: 0x10c00032  beqz        $a2, . + 4 + (0x32 << 2)
    ctx->pc = 0x38318Cu;
    {
        const bool branch_taken_0x38318c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x383190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38318Cu;
        // 0x383190: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38318c) {
            ctx->pc = 0x383258u;
            goto label_383258;
        }
    }
    ctx->pc = 0x383194u;
    // 0x383194: 0x261100a4  addiu       $s1, $s0, 0xA4
    ctx->pc = 0x383194u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 164));
    // 0x383198: 0xc0e0ca0  jal         func_383280
    ctx->pc = 0x383198u;
    SET_GPR_U32(ctx, 31, 0x3831A0u);
    ctx->pc = 0x38319Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383198u;
    // 0x38319c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x383280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383280u, 0x383198u, 0x3831A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3831A0u;
label_3831a0:
    // 0x3831a0: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x3831A0u;
    {
        const bool branch_taken_0x3831a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3831A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3831A0u;
        // 0x3831a4: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3831a0) {
            ctx->pc = 0x383214u;
            goto label_383214;
        }
    }
    ctx->pc = 0x3831A8u;
    // 0x3831a8: 0x1840002e  blez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x3831A8u;
    {
        const bool branch_taken_0x3831a8 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x3831ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3831A8u;
        // 0x3831ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3831a8) {
            ctx->pc = 0x383264u;
            goto label_383264;
        }
    }
    ctx->pc = 0x3831B0u;
    // 0x3831b0: 0x26130008  addiu       $s3, $s0, 0x8
    ctx->pc = 0x3831b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x3831b4: 0x261200bc  addiu       $s2, $s0, 0xBC
    ctx->pc = 0x3831b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 188));
    // 0x3831b8: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x3831b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3831bc: 0x0  nop
    ctx->pc = 0x3831bcu;
    // NOP
label_3831c0:
    // 0x3831c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3831c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3831c4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x3831c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x3831c8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3831c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3831cc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3831CCu;
    {
        const bool branch_taken_0x3831cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3831D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3831CCu;
        // 0x3831d0: 0x101040  sll         $v0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3831cc) {
            ctx->pc = 0x3831E8u;
            goto label_3831e8;
        }
    }
    ctx->pc = 0x3831D4u;
    // 0x3831d4: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x3831d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x3831d8: 0xc0cbb1e  jal         func_32EC78
    ctx->pc = 0x3831D8u;
    SET_GPR_U32(ctx, 31, 0x3831E0u);
    ctx->pc = 0x3831DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3831D8u;
    // 0x3831dc: 0x2406fc40  addiu       $a2, $zero, -0x3C0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EC78u, 0x3831D8u, 0x3831E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3831E0u;
label_3831e0:
    // 0x3831e0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3831E0u;
    {
        const bool branch_taken_0x3831e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3831E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3831E0u;
        // 0x3831e4: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3831e0) {
            ctx->pc = 0x3831FCu;
            goto label_3831fc;
        }
    }
    ctx->pc = 0x3831E8u;
label_3831e8:
    // 0x3831e8: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x3831e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x3831ec: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x3831ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x3831f0: 0xc0cbb1e  jal         func_32EC78
    ctx->pc = 0x3831F0u;
    SET_GPR_U32(ctx, 31, 0x3831F8u);
    ctx->pc = 0x3831F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3831F0u;
    // 0x3831f4: 0x84460000  lh          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EC78u, 0x3831F0u, 0x3831F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3831F8u;
label_3831f8:
    // 0x3831f8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3831f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3831fc:
    // 0x3831fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3831fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383200: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x383200u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x383204: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x383204u;
    {
        const bool branch_taken_0x383204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x383208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383204u;
        // 0x383208: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383204) {
            ctx->pc = 0x3831C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3831c0;
        }
    }
    ctx->pc = 0x38320Cu;
    // 0x38320c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x38320Cu;
    {
        const bool branch_taken_0x38320c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x383210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38320Cu;
        // 0x383210: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38320c) {
            ctx->pc = 0x383268u;
            goto label_383268;
        }
    }
    ctx->pc = 0x383214u;
label_383214:
    // 0x383214: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x383214u;
    {
        const bool branch_taken_0x383214 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x383218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383214u;
        // 0x383218: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383214) {
            ctx->pc = 0x383264u;
            goto label_383264;
        }
    }
    ctx->pc = 0x38321Cu;
    // 0x38321c: 0x26120008  addiu       $s2, $s0, 0x8
    ctx->pc = 0x38321cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x383220: 0x24b00001  addiu       $s0, $a1, 0x1
    ctx->pc = 0x383220u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x383224: 0x0  nop
    ctx->pc = 0x383224u;
    // NOP
label_383228:
    // 0x383228: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x383228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x38322c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x38322cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x383230: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x383230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x383234: 0xc0cbb1e  jal         func_32EC78
    ctx->pc = 0x383234u;
    SET_GPR_U32(ctx, 31, 0x38323Cu);
    ctx->pc = 0x383238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383234u;
    // 0x383238: 0x84460000  lh          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EC78u, 0x383234u, 0x38323Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38323Cu;
label_38323c:
    // 0x38323c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x38323cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x383240: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x383240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383244: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x383244u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x383248: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x383248u;
    {
        const bool branch_taken_0x383248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38324Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383248u;
        // 0x38324c: 0x24b00001  addiu       $s0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383248) {
            ctx->pc = 0x383228u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_383228;
        }
    }
    ctx->pc = 0x383250u;
    // 0x383250: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x383250u;
    {
        const bool branch_taken_0x383250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x383254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383250u;
        // 0x383254: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383250) {
            ctx->pc = 0x383268u;
            goto label_383268;
        }
    }
    ctx->pc = 0x383258u;
label_383258:
    // 0x383258: 0x86050008  lh          $a1, 0x8($s0)
    ctx->pc = 0x383258u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x38325c: 0xc0caa7c  jal         func_32A9F0
    ctx->pc = 0x38325Cu;
    SET_GPR_U32(ctx, 31, 0x383264u);
    ctx->pc = 0x383260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38325Cu;
    // 0x383260: 0x8e040064  lw          $a0, 0x64($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A9F0u, 0x38325Cu, 0x383264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383264u;
label_383264:
    // 0x383264: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x383264u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_383268:
    // 0x383268: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x383268u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38326c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x38326cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x383270: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x383270u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x383274: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x383274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x383278: 0x3e00008  jr          $ra
    ctx->pc = 0x383278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38327Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383278u;
        // 0x38327c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x383278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x383280u;
}
