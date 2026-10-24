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

// Function: func_0025B5A8
// Address: 0x25b5a8 - 0x25b6e8
void func_0025B5A8_0x25b5a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0025B5A8_0x25b5a8");
#endif

    switch (ctx->pc) {
        case 0x25b5e0u: goto label_25b5e0;
        case 0x25b5e8u: goto label_25b5e8;
        case 0x25b648u: goto label_25b648;
        case 0x25b65cu: goto label_25b65c;
        case 0x25b670u: goto label_25b670;
        case 0x25b684u: goto label_25b684;
        case 0x25b698u: goto label_25b698;
        case 0x25b6a8u: goto label_25b6a8;
        case 0x25b6b0u: goto label_25b6b0;
        case 0x25b6c0u: goto label_25b6c0;
        case 0x25b6d0u: goto label_25b6d0;
        default: break;
    }

    ctx->pc = 0x25b5a8u;

    // 0x25b5a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25b5a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25b5ac: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x25b5acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x25b5b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25b5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25b5b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25b5b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b5b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25b5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25b5bc: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x25b5bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x25b5c0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x25B5C0u;
    {
        const bool branch_taken_0x25b5c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B5C0u;
        // 0x25b5c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b5c0) {
            ctx->pc = 0x25B5D8u;
            goto label_25b5d8;
        }
    }
    ctx->pc = 0x25B5C8u;
    // 0x25b5c8: 0x10620031  beq         $v1, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x25B5C8u;
    {
        const bool branch_taken_0x25b5c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x25b5c8) {
            ctx->pc = 0x25B690u;
            goto label_25b690;
        }
    }
    ctx->pc = 0x25B5D0u;
    // 0x25b5d0: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x25B5D0u;
    {
        const bool branch_taken_0x25b5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B5D0u;
        // 0x25b5d4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b5d0) {
            ctx->pc = 0x25B6D4u;
            goto label_25b6d4;
        }
    }
    ctx->pc = 0x25B5D8u;
label_25b5d8:
    // 0x25b5d8: 0xc09d91a  jal         func_276468
    ctx->pc = 0x25B5D8u;
    SET_GPR_U32(ctx, 31, 0x25B5E0u);
    ctx->pc = 0x25B5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B5D8u;
    // 0x25b5dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x25B5D8u, 0x25B5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B5E0u;
label_25b5e0:
    // 0x25b5e0: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x25B5E0u;
    SET_GPR_U32(ctx, 31, 0x25B5E8u);
    ctx->pc = 0x25B5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B5E0u;
    // 0x25b5e4: 0x3051ffff  andi        $s1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x25B5E0u, 0x25B5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B5E8u;
label_25b5e8:
    // 0x25b5e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25b5e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x25b5ec: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x25b5ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b5f0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x25B5F0u;
    {
        const bool branch_taken_0x25b5f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B5F0u;
        // 0x25b5f4: 0xa20202f7  sb          $v0, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b5f0) {
            ctx->pc = 0x25B608u;
            goto label_25b608;
        }
    }
    ctx->pc = 0x25B5F8u;
    // 0x25b5f8: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x25b5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x25b5fc: 0x8c433df4  lw          $v1, 0x3DF4($v0)
    ctx->pc = 0x25b5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15860)));
    // 0x25b600: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x25B600u;
    {
        const bool branch_taken_0x25b600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B600u;
        // 0x25b604: 0x8c443df8  lw          $a0, 0x3DF8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15864)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b600) {
            ctx->pc = 0x25B614u;
            goto label_25b614;
        }
    }
    ctx->pc = 0x25B608u;
label_25b608:
    // 0x25b608: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x25b608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x25b60c: 0x8c433dec  lw          $v1, 0x3DEC($v0)
    ctx->pc = 0x25b60cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15852)));
    // 0x25b610: 0x8c443df0  lw          $a0, 0x3DF0($v0)
    ctx->pc = 0x25b610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15856)));
label_25b614:
    // 0x25b614: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x25b614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25b618: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x25b618u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x25b61c: 0x8e0316d0  lw          $v1, 0x16D0($s0)
    ctx->pc = 0x25b61cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x25b620: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x25b620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x25b624: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x25b624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x25b628: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25b628u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x25b62c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x25b62cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x25b630: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25b630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b634: 0xae0316d0  sw          $v1, 0x16D0($s0)
    ctx->pc = 0x25b634u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 3));
    // 0x25b638: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x25b638u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b63c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x25b63cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25b640: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x25B640u;
    SET_GPR_U32(ctx, 31, 0x25B648u);
    ctx->pc = 0x25B644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B640u;
    // 0x25b644: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x25B640u, 0x25B648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B648u;
label_25b648:
    // 0x25b648: 0x8e040748  lw          $a0, 0x748($s0)
    ctx->pc = 0x25b648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1864)));
    // 0x25b64c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x25B64Cu;
    {
        const bool branch_taken_0x25b64c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b64c) {
            ctx->pc = 0x25B650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25B64Cu;
            // 0x25b650: 0x8e04074c  lw          $a0, 0x74C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1868)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25B660u;
            goto label_25b660;
        }
    }
    ctx->pc = 0x25B654u;
    // 0x25b654: 0xc0a053a  jal         func_2814E8
    ctx->pc = 0x25B654u;
    SET_GPR_U32(ctx, 31, 0x25B65Cu);
    ctx->pc = 0x25B658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B654u;
    // 0x25b658: 0x920502f7  lbu         $a1, 0x2F7($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2814E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2814E8u, 0x25B654u, 0x25B65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B65Cu;
label_25b65c:
    // 0x25b65c: 0x8e04074c  lw          $a0, 0x74C($s0)
    ctx->pc = 0x25b65cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1868)));
label_25b660:
    // 0x25b660: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x25B660u;
    {
        const bool branch_taken_0x25b660 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b660) {
            ctx->pc = 0x25B664u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25B660u;
            // 0x25b664: 0x8e040750  lw          $a0, 0x750($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1872)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25B674u;
            goto label_25b674;
        }
    }
    ctx->pc = 0x25B668u;
    // 0x25b668: 0xc0a0cf0  jal         func_2833C0
    ctx->pc = 0x25B668u;
    SET_GPR_U32(ctx, 31, 0x25B670u);
    ctx->pc = 0x25B66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B668u;
    // 0x25b66c: 0x920502f7  lbu         $a1, 0x2F7($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2833C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2833C0u, 0x25B668u, 0x25B670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B670u;
label_25b670:
    // 0x25b670: 0x8e040750  lw          $a0, 0x750($s0)
    ctx->pc = 0x25b670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1872)));
label_25b674:
    // 0x25b674: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x25B674u;
    {
        const bool branch_taken_0x25b674 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b674) {
            ctx->pc = 0x25B678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25B674u;
            // 0x25b678: 0x920202f6  lbu         $v0, 0x2F6($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25B688u;
            goto label_25b688;
        }
    }
    ctx->pc = 0x25B67Cu;
    // 0x25b67c: 0xc0a0cf0  jal         func_2833C0
    ctx->pc = 0x25B67Cu;
    SET_GPR_U32(ctx, 31, 0x25B684u);
    ctx->pc = 0x25B680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B67Cu;
    // 0x25b680: 0x920502f7  lbu         $a1, 0x2F7($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2833C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2833C0u, 0x25B67Cu, 0x25B684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B684u;
label_25b684:
    // 0x25b684: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x25b684u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_25b688:
    // 0x25b688: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25b688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25b68c: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x25b68cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_25b690:
    // 0x25b690: 0xc055f06  jal         func_157C18
    ctx->pc = 0x25B690u;
    SET_GPR_U32(ctx, 31, 0x25B698u);
    ctx->pc = 0x25B694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B690u;
    // 0x25b694: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x25B690u, 0x25B698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B698u;
label_25b698:
    // 0x25b698: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x25B698u;
    {
        const bool branch_taken_0x25b698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b698) {
            ctx->pc = 0x25B69Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25B698u;
            // 0x25b69c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25B6D4u;
            goto label_25b6d4;
        }
    }
    ctx->pc = 0x25B6A0u;
    // 0x25b6a0: 0xc09bc48  jal         func_26F120
    ctx->pc = 0x25B6A0u;
    SET_GPR_U32(ctx, 31, 0x25B6A8u);
    ctx->pc = 0x25B6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B6A0u;
    // 0x25b6a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F120u, 0x25B6A0u, 0x25B6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B6A8u;
label_25b6a8:
    // 0x25b6a8: 0xc09bc76  jal         func_26F1D8
    ctx->pc = 0x25B6A8u;
    SET_GPR_U32(ctx, 31, 0x25B6B0u);
    ctx->pc = 0x25B6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B6A8u;
    // 0x25b6ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F1D8u, 0x25B6A8u, 0x25B6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B6B0u;
label_25b6b0:
    // 0x25b6b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25B6B0u;
    {
        const bool branch_taken_0x25b6b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b6b0) {
            ctx->pc = 0x25B6C8u;
            goto label_25b6c8;
        }
    }
    ctx->pc = 0x25B6B8u;
    // 0x25b6b8: 0xc09c31e  jal         func_270C78
    ctx->pc = 0x25B6B8u;
    SET_GPR_U32(ctx, 31, 0x25B6C0u);
    ctx->pc = 0x25B6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B6B8u;
    // 0x25b6bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270C78u, 0x25B6B8u, 0x25B6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B6C0u;
label_25b6c0:
    // 0x25b6c0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x25B6C0u;
    {
        const bool branch_taken_0x25b6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B6C0u;
        // 0x25b6c4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b6c0) {
            ctx->pc = 0x25B6D4u;
            goto label_25b6d4;
        }
    }
    ctx->pc = 0x25B6C8u;
label_25b6c8:
    // 0x25b6c8: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x25B6C8u;
    SET_GPR_U32(ctx, 31, 0x25B6D0u);
    ctx->pc = 0x25B6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B6C8u;
    // 0x25b6cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x25B6C8u, 0x25B6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B6D0u;
label_25b6d0:
    // 0x25b6d0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x25b6d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_25b6d4:
    // 0x25b6d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25b6d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25b6d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25b6d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25b6dc: 0x3e00008  jr          $ra
    ctx->pc = 0x25B6DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B6DCu;
        // 0x25b6e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B6DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25B6E4u;
    // 0x25b6e4: 0x0  nop
    ctx->pc = 0x25b6e4u;
    // NOP
    ctx->pc = 0x25b6e8u;
}
