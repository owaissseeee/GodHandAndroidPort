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

// Function: func_0023A138
// Address: 0x23a138 - 0x23a300
void func_0023A138_0x23a138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0023A138_0x23a138");
#endif

    switch (ctx->pc) {
        case 0x23a160u: goto label_23a160;
        case 0x23a214u: goto label_23a214;
        case 0x23a228u: goto label_23a228;
        case 0x23a250u: goto label_23a250;
        case 0x23a25cu: goto label_23a25c;
        case 0x23a294u: goto label_23a294;
        case 0x23a2b0u: goto label_23a2b0;
        case 0x23a2dcu: goto label_23a2dc;
        case 0x23a2e8u: goto label_23a2e8;
        default: break;
    }

    ctx->pc = 0x23a138u;

    // 0x23a138: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23a138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23a13c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23a13cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a140: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x23a140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x23a144: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23a144u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a148: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23a148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23a14c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x23a14cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x23a150: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x23a150u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x23a154: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x23a154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x23a158: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x23A158u;
    SET_GPR_U32(ctx, 31, 0x23A160u);
    ctx->pc = 0x23A15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A158u;
    // 0x23a15c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x23A158u, 0x23A160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A160u;
label_23a160:
    // 0x23a160: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x23a160u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x23a164: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x23a164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x23a168: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23a168u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a16c: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x23a16cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x23a170: 0x1040005d  beqz        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x23A170u;
    {
        const bool branch_taken_0x23a170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A170u;
        // 0x23a174: 0xe600054c  swc1        $f0, 0x54C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a170) {
            ctx->pc = 0x23A2E8u;
            goto label_23a2e8;
        }
    }
    ctx->pc = 0x23A178u;
    // 0x23a178: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x23a178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x23a17c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23a17cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23a180: 0x2442a480  addiu       $v0, $v0, -0x5B80
    ctx->pc = 0x23a180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943872));
    // 0x23a184: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23a184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23a188: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23a188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23a18c: 0x800008  jr          $a0
    ctx->pc = 0x23A18Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23A194u: goto label_23a194;
            case 0x23A1BCu: goto label_23a1bc;
            case 0x23A1E4u: goto label_23a1e4;
            case 0x23A220u: goto label_23a220;
            case 0x23A264u: goto label_23a264;
            case 0x23A2A8u: goto label_23a2a8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A18Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x23A194u;
label_23a194:
    // 0x23a194: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a198: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23a198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a19c: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x23a19cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x23a1a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23a1a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a1a4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x23a1a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23a1a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x23a1a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a1ac: 0x8c452c8c  lw          $a1, 0x2C8C($v0)
    ctx->pc = 0x23a1acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11404)));
    // 0x23a1b0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x23a1b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a1b4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x23A1B4u;
    {
        const bool branch_taken_0x23a1b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A1B4u;
        // 0x23a1b8: 0x8c462c90  lw          $a2, 0x2C90($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a1b4) {
            ctx->pc = 0x23A208u;
            goto label_23a208;
        }
    }
    ctx->pc = 0x23A1BCu;
label_23a1bc:
    // 0x23a1bc: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a1c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23a1c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a1c4: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x23a1c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x23a1c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23a1c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a1cc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x23a1ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23a1d0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x23a1d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a1d4: 0x8c452c94  lw          $a1, 0x2C94($v0)
    ctx->pc = 0x23a1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11412)));
    // 0x23a1d8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x23a1d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a1dc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x23A1DCu;
    {
        const bool branch_taken_0x23a1dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A1DCu;
        // 0x23a1e0: 0x8c462c98  lw          $a2, 0x2C98($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a1dc) {
            ctx->pc = 0x23A208u;
            goto label_23a208;
        }
    }
    ctx->pc = 0x23A1E4u;
label_23a1e4:
    // 0x23a1e4: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a1e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23a1e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a1ec: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x23a1ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x23a1f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23a1f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a1f4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x23a1f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23a1f8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x23a1f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a1fc: 0x8c452c9c  lw          $a1, 0x2C9C($v0)
    ctx->pc = 0x23a1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11420)));
    // 0x23a200: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x23a200u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a204: 0x8c462ca0  lw          $a2, 0x2CA0($v0)
    ctx->pc = 0x23a204u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11424)));
label_23a208:
    // 0x23a208: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x23a208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x23a20c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x23A20Cu;
    SET_GPR_U32(ctx, 31, 0x23A214u);
    ctx->pc = 0x23A210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A20Cu;
    // 0x23a210: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x23A20Cu, 0x23A214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A214u;
label_23a214:
    // 0x23a214: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x23a214u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x23a218: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23a218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23a21c: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x23a21cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_23a220:
    // 0x23a220: 0xc055f06  jal         func_157C18
    ctx->pc = 0x23A220u;
    SET_GPR_U32(ctx, 31, 0x23A228u);
    ctx->pc = 0x23A224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A220u;
    // 0x23a224: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x23A220u, 0x23A228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A228u;
label_23a228:
    // 0x23a228: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23A228u;
    {
        const bool branch_taken_0x23a228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a228) {
            ctx->pc = 0x23A23Cu;
            goto label_23a23c;
        }
    }
    ctx->pc = 0x23A230u;
    // 0x23a230: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x23a230u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x23a234: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23a234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23a238: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x23a238u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_23a23c:
    // 0x23a23c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23a23cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23a240: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x23a240u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x23a244: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23a244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a248: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x23A248u;
    SET_GPR_U32(ctx, 31, 0x23A250u);
    ctx->pc = 0x23A24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A248u;
    // 0x23a24c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x23A248u, 0x23A250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A250u;
label_23a250:
    // 0x23a250: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23a250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a254: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x23A254u;
    SET_GPR_U32(ctx, 31, 0x23A25Cu);
    ctx->pc = 0x23A258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A254u;
    // 0x23a258: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x23A254u, 0x23A25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A25Cu;
label_23a25c:
    // 0x23a25c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x23A25Cu;
    {
        const bool branch_taken_0x23a25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A25Cu;
        // 0x23a260: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a25c) {
            ctx->pc = 0x23A2ECu;
            goto label_23a2ec;
        }
    }
    ctx->pc = 0x23A264u;
label_23a264:
    // 0x23a264: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a268: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23a268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a26c: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x23a26cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x23a270: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23a270u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a274: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x23a274u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23a278: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x23a278u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a27c: 0x8c452ca4  lw          $a1, 0x2CA4($v0)
    ctx->pc = 0x23a27cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11428)));
    // 0x23a280: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x23a280u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a284: 0x8c462ca8  lw          $a2, 0x2CA8($v0)
    ctx->pc = 0x23a284u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11432)));
    // 0x23a288: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x23a288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x23a28c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x23A28Cu;
    SET_GPR_U32(ctx, 31, 0x23A294u);
    ctx->pc = 0x23A290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A28Cu;
    // 0x23a290: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x23A28Cu, 0x23A294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A294u;
label_23a294:
    // 0x23a294: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x23a294u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x23a298: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x23a298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x23a29c: 0xa603056e  sh          $v1, 0x56E($s0)
    ctx->pc = 0x23a29cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 3));
    // 0x23a2a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23a2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23a2a4: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x23a2a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_23a2a8:
    // 0x23a2a8: 0xc055f06  jal         func_157C18
    ctx->pc = 0x23A2A8u;
    SET_GPR_U32(ctx, 31, 0x23A2B0u);
    ctx->pc = 0x23A2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A2A8u;
    // 0x23a2ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x23A2A8u, 0x23A2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A2B0u;
label_23a2b0:
    // 0x23a2b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23A2B0u;
    {
        const bool branch_taken_0x23a2b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A2B0u;
        // 0x23a2b4: 0x2402006c  addiu       $v0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a2b0) {
            ctx->pc = 0x23A2C8u;
            goto label_23a2c8;
        }
    }
    ctx->pc = 0x23A2B8u;
    // 0x23a2b8: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x23a2b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x23a2bc: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x23a2bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x23a2c0: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x23a2c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x23a2c4: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x23a2c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_23a2c8:
    // 0x23a2c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23a2c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23a2cc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x23a2ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x23a2d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23a2d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a2d4: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x23A2D4u;
    SET_GPR_U32(ctx, 31, 0x23A2DCu);
    ctx->pc = 0x23A2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A2D4u;
    // 0x23a2d8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x23A2D4u, 0x23A2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A2DCu;
label_23a2dc:
    // 0x23a2dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23a2dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a2e0: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x23A2E0u;
    SET_GPR_U32(ctx, 31, 0x23A2E8u);
    ctx->pc = 0x23A2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A2E0u;
    // 0x23a2e4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x23A2E0u, 0x23A2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A2E8u;
label_23a2e8:
    // 0x23a2e8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x23a2e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_23a2ec:
    // 0x23a2ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23a2ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23a2f0: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x23a2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23a2f4: 0x3e00008  jr          $ra
    ctx->pc = 0x23A2F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A2F4u;
        // 0x23a2f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A2F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A2FCu;
    // 0x23a2fc: 0x0  nop
    ctx->pc = 0x23a2fcu;
    // NOP
    ctx->pc = 0x23a300u;
}
