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

// Function: func_0033F1A8
// Address: 0x33f1a8 - 0x33f240
void func_0033F1A8_0x33f1a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033F1A8_0x33f1a8");
#endif

    switch (ctx->pc) {
        case 0x33f1a8u: goto label_33f1a8;
        case 0x33f1acu: goto label_33f1ac;
        case 0x33f1b0u: goto label_33f1b0;
        case 0x33f1b4u: goto label_33f1b4;
        case 0x33f1b8u: goto label_33f1b8;
        case 0x33f1bcu: goto label_33f1bc;
        case 0x33f1c0u: goto label_33f1c0;
        case 0x33f1c4u: goto label_33f1c4;
        case 0x33f1c8u: goto label_33f1c8;
        case 0x33f1ccu: goto label_33f1cc;
        case 0x33f1d0u: goto label_33f1d0;
        case 0x33f1d4u: goto label_33f1d4;
        case 0x33f1d8u: goto label_33f1d8;
        case 0x33f1dcu: goto label_33f1dc;
        case 0x33f1e0u: goto label_33f1e0;
        case 0x33f1e4u: goto label_33f1e4;
        case 0x33f1e8u: goto label_33f1e8;
        case 0x33f1ecu: goto label_33f1ec;
        case 0x33f1f0u: goto label_33f1f0;
        case 0x33f1f4u: goto label_33f1f4;
        case 0x33f1f8u: goto label_33f1f8;
        case 0x33f1fcu: goto label_33f1fc;
        case 0x33f200u: goto label_33f200;
        case 0x33f204u: goto label_33f204;
        case 0x33f208u: goto label_33f208;
        case 0x33f20cu: goto label_33f20c;
        case 0x33f210u: goto label_33f210;
        case 0x33f214u: goto label_33f214;
        case 0x33f218u: goto label_33f218;
        case 0x33f21cu: goto label_33f21c;
        case 0x33f220u: goto label_33f220;
        case 0x33f224u: goto label_33f224;
        case 0x33f228u: goto label_33f228;
        case 0x33f22cu: goto label_33f22c;
        case 0x33f230u: goto label_33f230;
        case 0x33f234u: goto label_33f234;
        case 0x33f238u: goto label_33f238;
        case 0x33f23cu: goto label_33f23c;
        default: break;
    }

    ctx->pc = 0x33f1a8u;

label_33f1a8:
    // 0x33f1a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33f1a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_33f1ac:
    // 0x33f1ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33f1acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_33f1b0:
    // 0x33f1b0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x33f1b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_33f1b4:
    // 0x33f1b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33f1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_33f1b8:
    // 0x33f1b8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_33f1bc:
    if (ctx->pc == 0x33F1BCu) {
        ctx->pc = 0x33F1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F1B8u;
        // 0x33f1bc: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F1C0u;
        goto label_33f1c0;
    }
    ctx->pc = 0x33F1B8u;
    {
        const bool branch_taken_0x33f1b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F1B8u;
        // 0x33f1bc: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f1b8) {
            ctx->pc = 0x33F1C8u;
            goto label_33f1c8;
        }
    }
    ctx->pc = 0x33F1C0u;
label_33f1c0:
    // 0x33f1c0: 0x16200009  bnez        $s1, . + 4 + (0x9 << 2)
label_33f1c4:
    if (ctx->pc == 0x33F1C4u) {
        ctx->pc = 0x33F1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F1C0u;
        // 0x33f1c4: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F1C8u;
        goto label_33f1c8;
    }
    ctx->pc = 0x33F1C0u;
    {
        const bool branch_taken_0x33f1c0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x33F1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F1C0u;
        // 0x33f1c4: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f1c0) {
            ctx->pc = 0x33F1E8u;
            goto label_33f1e8;
        }
    }
    ctx->pc = 0x33F1C8u;
label_33f1c8:
    // 0x33f1c8: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x33f1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_33f1cc:
    // 0x33f1cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33f1ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33f1d0:
    // 0x33f1d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33f1d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_33f1d4:
    // 0x33f1d4: 0x24846930  addiu       $a0, $a0, 0x6930
    ctx->pc = 0x33f1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26928));
label_33f1d8:
    // 0x33f1d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x33f1d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_33f1dc:
    // 0x33f1dc: 0x80cedba  j           func_33B6E8
label_33f1e0:
    if (ctx->pc == 0x33F1E0u) {
        ctx->pc = 0x33F1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F1DCu;
        // 0x33f1e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F1E4u;
        goto label_33f1e4;
    }
    ctx->pc = 0x33F1DCu;
    ctx->pc = 0x33F1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F1DCu;
    // 0x33f1e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B6E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B6E8u, 0x33F1DCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33F1E4u;
label_33f1e4:
    // 0x33f1e4: 0x0  nop
    ctx->pc = 0x33f1e4u;
    // NOP
label_33f1e8:
    // 0x33f1e8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x33f1e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33f1ec:
    // 0x33f1ec: 0x2450adc0  addiu       $s0, $v0, -0x5240
    ctx->pc = 0x33f1ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946240));
label_33f1f0:
    // 0x33f1f0: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x33f1f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_33f1f4:
    // 0x33f1f4: 0xc0e9768  jal         func_3A5DA0
label_33f1f8:
    if (ctx->pc == 0x33F1F8u) {
        ctx->pc = 0x33F1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F1F4u;
        // 0x33f1f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F1FCu;
        goto label_33f1fc;
    }
    ctx->pc = 0x33F1F4u;
    SET_GPR_U32(ctx, 31, 0x33F1FCu);
    ctx->pc = 0x33F1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F1F4u;
    // 0x33f1f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5DA0u, 0x33F1F4u, 0x33F1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F1FCu;
label_33f1fc:
    // 0x33f1fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33f1fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33f200:
    // 0x33f200: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33f200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33f204:
    // 0x33f204: 0xc0e9688  jal         func_3A5A20
label_33f208:
    if (ctx->pc == 0x33F208u) {
        ctx->pc = 0x33F208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F204u;
        // 0x33f208: 0x240600ff  addiu       $a2, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F20Cu;
        goto label_33f20c;
    }
    ctx->pc = 0x33F204u;
    SET_GPR_U32(ctx, 31, 0x33F20Cu);
    ctx->pc = 0x33F208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F204u;
    // 0x33f208: 0x240600ff  addiu       $a2, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A20u, 0x33F204u, 0x33F20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F20Cu;
label_33f20c:
    // 0x33f20c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x33f20cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
label_33f210:
    // 0x33f210: 0x8c63adb8  lw          $v1, -0x5248($v1)
    ctx->pc = 0x33f210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946232)));
label_33f214:
    // 0x33f214: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_33f218:
    if (ctx->pc == 0x33F218u) {
        ctx->pc = 0x33F218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F214u;
        // 0x33f218: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F21Cu;
        goto label_33f21c;
    }
    ctx->pc = 0x33F214u;
    {
        const bool branch_taken_0x33f214 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F214u;
        // 0x33f218: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f214) {
            ctx->pc = 0x33F228u;
            goto label_33f228;
        }
    }
    ctx->pc = 0x33F21Cu;
label_33f21c:
    // 0x33f21c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x33f21cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_33f220:
    // 0x33f220: 0x60f809  jalr        $v1
label_33f224:
    if (ctx->pc == 0x33F224u) {
        ctx->pc = 0x33F224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F220u;
        // 0x33f224: 0x8c44adbc  lw          $a0, -0x5244($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946236)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F228u;
        goto label_33f228;
    }
    ctx->pc = 0x33F220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33F228u);
        ctx->pc = 0x33F224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F220u;
        // 0x33f224: 0x8c44adbc  lw          $a0, -0x5244($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946236)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F220u, 0x33F228u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33F228u;
label_33f228:
    // 0x33f228: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33f228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33f22c:
    // 0x33f22c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33f22cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33f230:
    // 0x33f230: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33f230u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_33f234:
    // 0x33f234: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x33f234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_33f238:
    // 0x33f238: 0x80cedba  j           func_33B6E8
label_33f23c:
    if (ctx->pc == 0x33F23Cu) {
        ctx->pc = 0x33F23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F238u;
        // 0x33f23c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33F240u;
        goto label_fallthrough_0x33f238;
    }
    ctx->pc = 0x33F238u;
    ctx->pc = 0x33F23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F238u;
    // 0x33f23c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B6E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B6E8u, 0x33F238u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
label_fallthrough_0x33f238:
    ctx->pc = 0x33F240u;
}
