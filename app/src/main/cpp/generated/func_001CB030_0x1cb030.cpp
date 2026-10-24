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

// Function: func_001CB030
// Address: 0x1cb030 - 0x1cb400
void func_001CB030_0x1cb030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001CB030_0x1cb030");
#endif

    switch (ctx->pc) {
        case 0x1cb04cu: goto label_1cb04c;
        case 0x1cb068u: goto label_1cb068;
        case 0x1cb0c8u: goto label_1cb0c8;
        case 0x1cb0dcu: goto label_1cb0dc;
        case 0x1cb118u: goto label_1cb118;
        case 0x1cb14cu: goto label_1cb14c;
        case 0x1cb190u: goto label_1cb190;
        case 0x1cb1c4u: goto label_1cb1c4;
        case 0x1cb208u: goto label_1cb208;
        case 0x1cb23cu: goto label_1cb23c;
        case 0x1cb270u: goto label_1cb270;
        case 0x1cb280u: goto label_1cb280;
        case 0x1cb2acu: goto label_1cb2ac;
        case 0x1cb2dcu: goto label_1cb2dc;
        case 0x1cb330u: goto label_1cb330;
        case 0x1cb36cu: goto label_1cb36c;
        case 0x1cb388u: goto label_1cb388;
        case 0x1cb3b4u: goto label_1cb3b4;
        case 0x1cb3d0u: goto label_1cb3d0;
        case 0x1cb3e4u: goto label_1cb3e4;
        default: break;
    }

    ctx->pc = 0x1cb030u;

    // 0x1cb030: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cb030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cb034: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1cb034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1cb038: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cb038u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb03c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cb03cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cb040: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1cb040u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x1cb044: 0xc0a4bd4  jal         func_292F50
    ctx->pc = 0x1CB044u;
    SET_GPR_U32(ctx, 31, 0x1CB04Cu);
    ctx->pc = 0x1CB048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB044u;
    // 0x1cb048: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x1CB044u, 0x1CB04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB04Cu;
label_1cb04c:
    // 0x1cb04c: 0x8e020600  lw          $v0, 0x600($s0)
    ctx->pc = 0x1cb04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x1cb050: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1CB050u;
    {
        const bool branch_taken_0x1cb050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cb050) {
            ctx->pc = 0x1CB054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CB050u;
            // 0x1cb054: 0xc44005a8  lwc1        $f0, 0x5A8($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CB058u;
            goto label_1cb058;
        }
    }
    ctx->pc = 0x1CB058u;
label_1cb058:
    // 0x1cb058: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1cb058u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1cb05c: 0xe60005a8  swc1        $f0, 0x5A8($s0)
    ctx->pc = 0x1cb05cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1448), bits); }
    // 0x1cb060: 0xc0560a2  jal         func_158288
    ctx->pc = 0x1CB060u;
    SET_GPR_U32(ctx, 31, 0x1CB068u);
    ctx->pc = 0x1CB064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB060u;
    // 0x1cb064: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158288u, 0x1CB060u, 0x1CB068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB068u;
label_1cb068:
    // 0x1cb068: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x1cb068u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x1cb06c: 0x2c620010  sltiu       $v0, $v1, 0x10
    ctx->pc = 0x1cb06cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1cb070: 0x104000de  beqz        $v0, . + 4 + (0xDE << 2)
    ctx->pc = 0x1CB070u;
    {
        const bool branch_taken_0x1cb070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB070u;
        // 0x1cb074: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb070) {
            ctx->pc = 0x1CB3ECu;
            goto label_1cb3ec;
        }
    }
    ctx->pc = 0x1CB078u;
    // 0x1cb078: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1cb078u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cb07c: 0x2442a2c0  addiu       $v0, $v0, -0x5D40
    ctx->pc = 0x1cb07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943424));
    // 0x1cb080: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1cb080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1cb084: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1cb084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cb088: 0x800008  jr          $a0
    ctx->pc = 0x1CB088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CB090u: goto label_1cb090;
            case 0x1CB0D4u: goto label_1cb0d4;
            case 0x1CB0E4u: goto label_1cb0e4;
            case 0x1CB15Cu: goto label_1cb15c;
            case 0x1CB1D4u: goto label_1cb1d4;
            case 0x1CB24Cu: goto label_1cb24c;
            case 0x1CB2B4u: goto label_1cb2b4;
            case 0x1CB2E4u: goto label_1cb2e4;
            case 0x1CB338u: goto label_1cb338;
            case 0x1CB3DCu: goto label_1cb3dc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB088u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1CB090u;
label_1cb090:
    // 0x1cb090: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x1cb090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x1cb094: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x1cb094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x1cb098: 0x8e0a0304  lw          $t2, 0x304($s0)
    ctx->pc = 0x1cb098u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x1cb09c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb09cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb0a0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1cb0a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1cb0a4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cb0a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cb0a8: 0xae020250  sw          $v0, 0x250($s0)
    ctx->pc = 0x1cb0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
    // 0x1cb0ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cb0acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb0b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cb0b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb0b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cb0b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb0b8: 0x8d45000c  lw          $a1, 0xC($t2)
    ctx->pc = 0x1cb0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x1cb0bc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1cb0bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb0c0: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x1CB0C0u;
    SET_GPR_U32(ctx, 31, 0x1CB0C8u);
    ctx->pc = 0x1CB0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB0C0u;
    // 0x1cb0c4: 0xaa2821  addu        $a1, $a1, $t2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x1CB0C0u, 0x1CB0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB0C8u;
label_1cb0c8:
    // 0x1cb0c8: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x1cb0c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x1cb0cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1cb0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1cb0d0: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x1cb0d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_1cb0d4:
    // 0x1cb0d4: 0xc055f06  jal         func_157C18
    ctx->pc = 0x1CB0D4u;
    SET_GPR_U32(ctx, 31, 0x1CB0DCu);
    ctx->pc = 0x1CB0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB0D4u;
    // 0x1cb0d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x1CB0D4u, 0x1CB0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB0DCu;
label_1cb0dc:
    // 0x1cb0dc: 0x100000c4  b           . + 4 + (0xC4 << 2)
    ctx->pc = 0x1CB0DCu;
    {
        const bool branch_taken_0x1cb0dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB0DCu;
        // 0x1cb0e0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb0dc) {
            ctx->pc = 0x1CB3F0u;
            goto label_1cb3f0;
        }
    }
    ctx->pc = 0x1CB0E4u;
label_1cb0e4:
    // 0x1cb0e4: 0x920202f7  lbu         $v0, 0x2F7($s0)
    ctx->pc = 0x1cb0e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x1cb0e8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1CB0E8u;
    {
        const bool branch_taken_0x1cb0e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB0E8u;
        // 0x1cb0ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb0e8) {
            ctx->pc = 0x1CB128u;
            goto label_1cb128;
        }
    }
    ctx->pc = 0x1CB0F0u;
    // 0x1cb0f0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x1cb0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x1cb0f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb0f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb0f8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cb0f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cb0fc: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x1cb0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1cb100: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cb100u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb104: 0x8c460018  lw          $a2, 0x18($v0)
    ctx->pc = 0x1cb104u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1cb108: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1cb108u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb10c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1cb10cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1cb110: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x1CB110u;
    SET_GPR_U32(ctx, 31, 0x1CB118u);
    ctx->pc = 0x1CB114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB110u;
    // 0x1cb114: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x1CB110u, 0x1CB118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB118u;
label_1cb118:
    // 0x1cb118: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb11c: 0x24050058  addiu       $a1, $zero, 0x58
    ctx->pc = 0x1cb11cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x1cb120: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x1CB120u;
    {
        const bool branch_taken_0x1cb120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB120u;
        // 0x1cb124: 0x24060065  addiu       $a2, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb120) {
            ctx->pc = 0x1CB378u;
            goto label_1cb378;
        }
    }
    ctx->pc = 0x1CB128u;
label_1cb128:
    // 0x1cb128: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x1cb128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x1cb12c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb12cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb130: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cb130u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cb134: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cb134u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb138: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x1cb138u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1cb13c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cb13cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb140: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1cb140u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb144: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x1CB144u;
    SET_GPR_U32(ctx, 31, 0x1CB14Cu);
    ctx->pc = 0x1CB148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB144u;
    // 0x1cb148: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x1CB144u, 0x1CB14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB14Cu;
label_1cb14c:
    // 0x1cb14c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb14cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb150: 0x24050058  addiu       $a1, $zero, 0x58
    ctx->pc = 0x1cb150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x1cb154: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x1CB154u;
    {
        const bool branch_taken_0x1cb154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB154u;
        // 0x1cb158: 0x24060064  addiu       $a2, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb154) {
            ctx->pc = 0x1CB3C0u;
            goto label_1cb3c0;
        }
    }
    ctx->pc = 0x1CB15Cu;
label_1cb15c:
    // 0x1cb15c: 0x920202f7  lbu         $v0, 0x2F7($s0)
    ctx->pc = 0x1cb15cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x1cb160: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1CB160u;
    {
        const bool branch_taken_0x1cb160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB160u;
        // 0x1cb164: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb160) {
            ctx->pc = 0x1CB1A0u;
            goto label_1cb1a0;
        }
    }
    ctx->pc = 0x1CB168u;
    // 0x1cb168: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x1cb168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x1cb16c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb16cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb170: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cb170u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cb174: 0x8c45001c  lw          $a1, 0x1C($v0)
    ctx->pc = 0x1cb174u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1cb178: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cb178u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb17c: 0x8c460020  lw          $a2, 0x20($v0)
    ctx->pc = 0x1cb17cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1cb180: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1cb180u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb184: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1cb184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1cb188: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x1CB188u;
    SET_GPR_U32(ctx, 31, 0x1CB190u);
    ctx->pc = 0x1CB18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB188u;
    // 0x1cb18c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x1CB188u, 0x1CB190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB190u;
label_1cb190:
    // 0x1cb190: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb194: 0x24050058  addiu       $a1, $zero, 0x58
    ctx->pc = 0x1cb194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x1cb198: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x1CB198u;
    {
        const bool branch_taken_0x1cb198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB198u;
        // 0x1cb19c: 0x24060063  addiu       $a2, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb198) {
            ctx->pc = 0x1CB378u;
            goto label_1cb378;
        }
    }
    ctx->pc = 0x1CB1A0u;
label_1cb1a0:
    // 0x1cb1a0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x1cb1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x1cb1a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb1a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb1a8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cb1a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cb1ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cb1acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb1b0: 0x8c45001c  lw          $a1, 0x1C($v0)
    ctx->pc = 0x1cb1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1cb1b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cb1b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb1b8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1cb1b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb1bc: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x1CB1BCu;
    SET_GPR_U32(ctx, 31, 0x1CB1C4u);
    ctx->pc = 0x1CB1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB1BCu;
    // 0x1cb1c0: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x1CB1BCu, 0x1CB1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB1C4u;
label_1cb1c4:
    // 0x1cb1c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb1c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb1c8: 0x24050058  addiu       $a1, $zero, 0x58
    ctx->pc = 0x1cb1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x1cb1cc: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x1CB1CCu;
    {
        const bool branch_taken_0x1cb1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB1CCu;
        // 0x1cb1d0: 0x24060062  addiu       $a2, $zero, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb1cc) {
            ctx->pc = 0x1CB3C0u;
            goto label_1cb3c0;
        }
    }
    ctx->pc = 0x1CB1D4u;
label_1cb1d4:
    // 0x1cb1d4: 0x920202f7  lbu         $v0, 0x2F7($s0)
    ctx->pc = 0x1cb1d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x1cb1d8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1CB1D8u;
    {
        const bool branch_taken_0x1cb1d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB1D8u;
        // 0x1cb1dc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb1d8) {
            ctx->pc = 0x1CB218u;
            goto label_1cb218;
        }
    }
    ctx->pc = 0x1CB1E0u;
    // 0x1cb1e0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x1cb1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x1cb1e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb1e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb1e8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cb1e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cb1ec: 0x8c450024  lw          $a1, 0x24($v0)
    ctx->pc = 0x1cb1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1cb1f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cb1f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb1f4: 0x8c460028  lw          $a2, 0x28($v0)
    ctx->pc = 0x1cb1f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1cb1f8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1cb1f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb1fc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1cb1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1cb200: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x1CB200u;
    SET_GPR_U32(ctx, 31, 0x1CB208u);
    ctx->pc = 0x1CB204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB200u;
    // 0x1cb204: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x1CB200u, 0x1CB208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB208u;
label_1cb208:
    // 0x1cb208: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb20c: 0x24050058  addiu       $a1, $zero, 0x58
    ctx->pc = 0x1cb20cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x1cb210: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x1CB210u;
    {
        const bool branch_taken_0x1cb210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB210u;
        // 0x1cb214: 0x24060078  addiu       $a2, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb210) {
            ctx->pc = 0x1CB378u;
            goto label_1cb378;
        }
    }
    ctx->pc = 0x1CB218u;
label_1cb218:
    // 0x1cb218: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x1cb218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x1cb21c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb21cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb220: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cb220u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cb224: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cb224u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb228: 0x8c450024  lw          $a1, 0x24($v0)
    ctx->pc = 0x1cb228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1cb22c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cb22cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb230: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1cb230u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb234: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x1CB234u;
    SET_GPR_U32(ctx, 31, 0x1CB23Cu);
    ctx->pc = 0x1CB238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB234u;
    // 0x1cb238: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x1CB234u, 0x1CB23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB23Cu;
label_1cb23c:
    // 0x1cb23c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb23cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb240: 0x24050058  addiu       $a1, $zero, 0x58
    ctx->pc = 0x1cb240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x1cb244: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x1CB244u;
    {
        const bool branch_taken_0x1cb244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB244u;
        // 0x1cb248: 0x24060077  addiu       $a2, $zero, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb244) {
            ctx->pc = 0x1CB3C0u;
            goto label_1cb3c0;
        }
    }
    ctx->pc = 0x1CB24Cu;
label_1cb24c:
    // 0x1cb24c: 0x920202f7  lbu         $v0, 0x2F7($s0)
    ctx->pc = 0x1cb24cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x1cb250: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1CB250u;
    {
        const bool branch_taken_0x1cb250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB250u;
        // 0x1cb254: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb250) {
            ctx->pc = 0x1CB288u;
            goto label_1cb288;
        }
    }
    ctx->pc = 0x1CB258u;
    // 0x1cb258: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x1cb258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x1cb25c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cb25cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cb260: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cb260u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb264: 0x8c450034  lw          $a1, 0x34($v0)
    ctx->pc = 0x1cb264u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1cb268: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cb268u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb26c: 0x8c460038  lw          $a2, 0x38($v0)
    ctx->pc = 0x1cb26cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_1cb270:
    // 0x1cb270: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1cb270u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb274: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1cb274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1cb278: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x1CB278u;
    SET_GPR_U32(ctx, 31, 0x1CB280u);
    ctx->pc = 0x1CB27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB278u;
    // 0x1cb27c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x1CB278u, 0x1CB280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB280u;
label_1cb280:
    // 0x1cb280: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x1CB280u;
    {
        const bool branch_taken_0x1cb280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB280u;
        // 0x1cb284: 0x920202f6  lbu         $v0, 0x2F6($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb280) {
            ctx->pc = 0x1CB3D4u;
            goto label_1cb3d4;
        }
    }
    ctx->pc = 0x1CB288u;
label_1cb288:
    // 0x1cb288: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x1cb288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x1cb28c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cb28cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cb290: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cb290u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb294: 0x8c450034  lw          $a1, 0x34($v0)
    ctx->pc = 0x1cb294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1cb298: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cb298u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb29c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cb29cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb2a0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1cb2a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb2a4: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x1CB2A4u;
    SET_GPR_U32(ctx, 31, 0x1CB2ACu);
    ctx->pc = 0x1CB2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB2A4u;
    // 0x1cb2a8: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x1CB2A4u, 0x1CB2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB2ACu;
label_1cb2ac:
    // 0x1cb2ac: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x1CB2ACu;
    {
        const bool branch_taken_0x1cb2ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB2ACu;
        // 0x1cb2b0: 0x920202f6  lbu         $v0, 0x2F6($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb2ac) {
            ctx->pc = 0x1CB3D4u;
            goto label_1cb3d4;
        }
    }
    ctx->pc = 0x1CB2B4u;
label_1cb2b4:
    // 0x1cb2b4: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x1cb2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x1cb2b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb2b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb2bc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cb2bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cb2c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cb2c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb2c4: 0x8c45003c  lw          $a1, 0x3C($v0)
    ctx->pc = 0x1cb2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1cb2c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cb2c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb2cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cb2ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb2d0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1cb2d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb2d4: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x1CB2D4u;
    SET_GPR_U32(ctx, 31, 0x1CB2DCu);
    ctx->pc = 0x1CB2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB2D4u;
    // 0x1cb2d8: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x1CB2D4u, 0x1CB2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB2DCu;
label_1cb2dc:
    // 0x1cb2dc: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x1CB2DCu;
    {
        const bool branch_taken_0x1cb2dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB2DCu;
        // 0x1cb2e0: 0x920202f6  lbu         $v0, 0x2F6($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb2dc) {
            ctx->pc = 0x1CB3D4u;
            goto label_1cb3d4;
        }
    }
    ctx->pc = 0x1CB2E4u;
label_1cb2e4:
    // 0x1cb2e4: 0x920202f7  lbu         $v0, 0x2F7($s0)
    ctx->pc = 0x1cb2e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x1cb2e8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CB2E8u;
    {
        const bool branch_taken_0x1cb2e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB2E8u;
        // 0x1cb2ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb2e8) {
            ctx->pc = 0x1CB30Cu;
            goto label_1cb30c;
        }
    }
    ctx->pc = 0x1CB2F0u;
    // 0x1cb2f0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x1cb2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x1cb2f4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cb2f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cb2f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cb2f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb2fc: 0x8c45002c  lw          $a1, 0x2C($v0)
    ctx->pc = 0x1cb2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1cb300: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cb300u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb304: 0x1000ffda  b           . + 4 + (-0x26 << 2)
    ctx->pc = 0x1CB304u;
    {
        const bool branch_taken_0x1cb304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB304u;
        // 0x1cb308: 0x8c460030  lw          $a2, 0x30($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb304) {
            ctx->pc = 0x1CB270u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb270;
        }
    }
    ctx->pc = 0x1CB30Cu;
label_1cb30c:
    // 0x1cb30c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x1cb30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x1cb310: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cb310u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cb314: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cb314u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb318: 0x8c45002c  lw          $a1, 0x2C($v0)
    ctx->pc = 0x1cb318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1cb31c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cb31cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb320: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cb320u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb324: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1cb324u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb328: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x1CB328u;
    SET_GPR_U32(ctx, 31, 0x1CB330u);
    ctx->pc = 0x1CB32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB328u;
    // 0x1cb32c: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x1CB328u, 0x1CB330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB330u;
label_1cb330:
    // 0x1cb330: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1CB330u;
    {
        const bool branch_taken_0x1cb330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB330u;
        // 0x1cb334: 0x920202f6  lbu         $v0, 0x2F6($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb330) {
            ctx->pc = 0x1CB3D4u;
            goto label_1cb3d4;
        }
    }
    ctx->pc = 0x1CB338u;
label_1cb338:
    // 0x1cb338: 0x920202f7  lbu         $v0, 0x2F7($s0)
    ctx->pc = 0x1cb338u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x1cb33c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1CB33Cu;
    {
        const bool branch_taken_0x1cb33c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB33Cu;
        // 0x1cb340: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb33c) {
            ctx->pc = 0x1CB390u;
            goto label_1cb390;
        }
    }
    ctx->pc = 0x1CB344u;
    // 0x1cb344: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x1cb344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x1cb348: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb34c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cb34cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cb350: 0x8c450040  lw          $a1, 0x40($v0)
    ctx->pc = 0x1cb350u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1cb354: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cb354u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb358: 0x8c460044  lw          $a2, 0x44($v0)
    ctx->pc = 0x1cb358u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1cb35c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1cb35cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb360: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1cb360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1cb364: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x1CB364u;
    SET_GPR_U32(ctx, 31, 0x1CB36Cu);
    ctx->pc = 0x1CB368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB364u;
    // 0x1cb368: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x1CB364u, 0x1CB36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB36Cu;
label_1cb36c:
    // 0x1cb36c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb36cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb370: 0x24050058  addiu       $a1, $zero, 0x58
    ctx->pc = 0x1cb370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x1cb374: 0x24060094  addiu       $a2, $zero, 0x94
    ctx->pc = 0x1cb374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
label_1cb378:
    // 0x1cb378: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cb378u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb37c: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x1cb37cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cb380: 0xc0aa182  jal         func_2A8608
    ctx->pc = 0x1CB380u;
    SET_GPR_U32(ctx, 31, 0x1CB388u);
    ctx->pc = 0x1CB384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB380u;
    // 0x1cb384: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8608u, 0x1CB380u, 0x1CB388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB388u;
label_1cb388:
    // 0x1cb388: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1CB388u;
    {
        const bool branch_taken_0x1cb388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB388u;
        // 0x1cb38c: 0x920202f6  lbu         $v0, 0x2F6($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb388) {
            ctx->pc = 0x1CB3D4u;
            goto label_1cb3d4;
        }
    }
    ctx->pc = 0x1CB390u;
label_1cb390:
    // 0x1cb390: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x1cb390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x1cb394: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb398: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cb398u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cb39c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cb39cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb3a0: 0x8c450040  lw          $a1, 0x40($v0)
    ctx->pc = 0x1cb3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1cb3a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cb3a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb3a8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1cb3a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb3ac: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x1CB3ACu;
    SET_GPR_U32(ctx, 31, 0x1CB3B4u);
    ctx->pc = 0x1CB3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB3ACu;
    // 0x1cb3b0: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x1CB3ACu, 0x1CB3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB3B4u;
label_1cb3b4:
    // 0x1cb3b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb3b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb3b8: 0x24050058  addiu       $a1, $zero, 0x58
    ctx->pc = 0x1cb3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x1cb3bc: 0x24060093  addiu       $a2, $zero, 0x93
    ctx->pc = 0x1cb3bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 147));
label_1cb3c0:
    // 0x1cb3c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cb3c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb3c4: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x1cb3c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cb3c8: 0xc0aa182  jal         func_2A8608
    ctx->pc = 0x1CB3C8u;
    SET_GPR_U32(ctx, 31, 0x1CB3D0u);
    ctx->pc = 0x1CB3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB3C8u;
    // 0x1cb3cc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8608u, 0x1CB3C8u, 0x1CB3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB3D0u;
label_1cb3d0:
    // 0x1cb3d0: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x1cb3d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_1cb3d4:
    // 0x1cb3d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1cb3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1cb3d8: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x1cb3d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_1cb3dc:
    // 0x1cb3dc: 0xc055f06  jal         func_157C18
    ctx->pc = 0x1CB3DCu;
    SET_GPR_U32(ctx, 31, 0x1CB3E4u);
    ctx->pc = 0x1CB3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB3DCu;
    // 0x1cb3e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x1CB3DCu, 0x1CB3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB3E4u;
label_1cb3e4:
    // 0x1cb3e4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1CB3E4u;
    {
        const bool branch_taken_0x1cb3e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cb3e4) {
            ctx->pc = 0x1CB3E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CB3E4u;
            // 0x1cb3e8: 0xa20002f6  sb          $zero, 0x2F6($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CB3ECu;
            goto label_1cb3ec;
        }
    }
    ctx->pc = 0x1CB3ECu;
label_1cb3ec:
    // 0x1cb3ec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1cb3ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1cb3f0:
    // 0x1cb3f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cb3f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb3f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB3F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB3F4u;
        // 0x1cb3f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB3F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB3FCu;
    // 0x1cb3fc: 0x0  nop
    ctx->pc = 0x1cb3fcu;
    // NOP
    ctx->pc = 0x1cb400u;
}
