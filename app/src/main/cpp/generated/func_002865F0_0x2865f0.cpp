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

// Function: func_002865F0
// Address: 0x2865f0 - 0x2866f8
void func_002865F0_0x2865f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002865F0_0x2865f0");
#endif

    switch (ctx->pc) {
        case 0x286648u: goto label_286648;
        case 0x2866d4u: goto label_2866d4;
        case 0x2866dcu: goto label_2866dc;
        case 0x2866e4u: goto label_2866e4;
        default: break;
    }

    ctx->pc = 0x2865f0u;

    // 0x2865f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2865f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2865f4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2865f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2865f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2865f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2865fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2865fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286600: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x286600u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x286604: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x286604u;
    {
        const bool branch_taken_0x286604 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x286608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286604u;
        // 0x286608: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286604) {
            ctx->pc = 0x28661Cu;
            goto label_28661c;
        }
    }
    ctx->pc = 0x28660Cu;
    // 0x28660c: 0x5062001c  beql        $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x28660Cu;
    {
        const bool branch_taken_0x28660c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28660c) {
            ctx->pc = 0x286610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28660Cu;
            // 0x286610: 0x8e0300f0  lw          $v1, 0xF0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x286680u;
            goto label_286680;
        }
    }
    ctx->pc = 0x286614u;
    // 0x286614: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x286614u;
    {
        const bool branch_taken_0x286614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286614u;
        // 0x286618: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286614) {
            ctx->pc = 0x2866E8u;
            goto label_2866e8;
        }
    }
    ctx->pc = 0x28661Cu;
label_28661c:
    // 0x28661c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28661cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x286620: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x286620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286624: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x286624u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x286628: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x286628u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x28662c: 0x8c450140  lw          $a1, 0x140($v0)
    ctx->pc = 0x28662cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 320)));
    // 0x286630: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x286630u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286634: 0x8c460144  lw          $a2, 0x144($v0)
    ctx->pc = 0x286634u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 324)));
    // 0x286638: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x286638u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28663c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x28663cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x286640: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x286640u;
    SET_GPR_U32(ctx, 31, 0x286648u);
    ctx->pc = 0x286644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286640u;
    // 0x286644: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x286640u, 0x286648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286648u;
label_286648:
    // 0x286648: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x286648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x28664c: 0x260305c0  addiu       $v1, $s0, 0x5C0
    ctx->pc = 0x28664cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1472));
    // 0x286650: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x286650u;
    {
        const bool branch_taken_0x286650 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x286650) {
            ctx->pc = 0x286654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286650u;
            // 0x286654: 0x920202f6  lbu         $v0, 0x2F6($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x286674u;
            goto label_286674;
        }
    }
    ctx->pc = 0x286658u;
    // 0x286658: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x286658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28665c: 0xe60005c0  swc1        $f0, 0x5C0($s0)
    ctx->pc = 0x28665cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1472), bits); }
    // 0x286660: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x286660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x286664: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x286664u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x286668: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x286668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28666c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x28666cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x286670: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x286670u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_286674:
    // 0x286674: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x286674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x286678: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x286678u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x28667c: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x28667cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_286680:
    // 0x286680: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x286680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286684: 0xc60105c0  lwc1        $f1, 0x5C0($s0)
    ctx->pc = 0x286684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x286688: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x286688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28668c: 0x3c013f7d  lui         $at, 0x3F7D
    ctx->pc = 0x28668cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16253 << 16));
    // 0x286690: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x286690u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
    // 0x286694: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x286694u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x286698: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x286698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x28669c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x28669cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2866a0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2866a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2866a4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2866a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2866a8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2866a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2866ac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2866acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2866b0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2866b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2866b4: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x2866b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x2866b8: 0xc60105c8  lwc1        $f1, 0x5C8($s0)
    ctx->pc = 0x2866b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2866bc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2866bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2866c0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2866c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2866c4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2866c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2866c8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2866c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2866cc: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2866CCu;
    SET_GPR_U32(ctx, 31, 0x2866D4u);
    ctx->pc = 0x2866D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2866CCu;
    // 0x2866d0: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2866CCu, 0x2866D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2866D4u;
label_2866d4:
    // 0x2866d4: 0xc0528ac  jal         func_14A2B0
    ctx->pc = 0x2866D4u;
    SET_GPR_U32(ctx, 31, 0x2866DCu);
    ctx->pc = 0x2866D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2866D4u;
    // 0x2866d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A2B0u, 0x2866D4u, 0x2866DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2866DCu;
label_2866dc:
    // 0x2866dc: 0xc0b6a6e  jal         func_2DA9B8
    ctx->pc = 0x2866DCu;
    SET_GPR_U32(ctx, 31, 0x2866E4u);
    ctx->pc = 0x2866E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2866DCu;
    // 0x2866e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA9B8u, 0x2866DCu, 0x2866E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2866E4u;
label_2866e4:
    // 0x2866e4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2866e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2866e8:
    // 0x2866e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2866e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2866ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2866ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2866F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2866ECu;
        // 0x2866f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2866ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2866F4u;
    // 0x2866f4: 0x0  nop
    ctx->pc = 0x2866f4u;
    // NOP
    ctx->pc = 0x2866f8u;
}
