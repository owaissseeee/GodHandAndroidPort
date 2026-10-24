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

// Function: func_00287090
// Address: 0x287090 - 0x287268
void func_00287090_0x287090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00287090_0x287090");
#endif

    switch (ctx->pc) {
        case 0x2870b4u: goto label_2870b4;
        case 0x287128u: goto label_287128;
        case 0x287148u: goto label_287148;
        case 0x287150u: goto label_287150;
        case 0x287158u: goto label_287158;
        case 0x2871a0u: goto label_2871a0;
        case 0x2871a8u: goto label_2871a8;
        case 0x2871f8u: goto label_2871f8;
        case 0x287200u: goto label_287200;
        case 0x28720cu: goto label_28720c;
        case 0x287234u: goto label_287234;
        case 0x287248u: goto label_287248;
        case 0x287250u: goto label_287250;
        case 0x287258u: goto label_287258;
        default: break;
    }

    ctx->pc = 0x287090u;

    // 0x287090: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x287090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x287094: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x287094u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287098: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x287098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x28709c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28709cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2870a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2870a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2870a4: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x2870a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x2870a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2870a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2870ac: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x2870ACu;
    SET_GPR_U32(ctx, 31, 0x2870B4u);
    ctx->pc = 0x2870B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2870ACu;
    // 0x2870b0: 0x24842fc0  addiu       $a0, $a0, 0x2FC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x2870ACu, 0x2870B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2870B4u;
label_2870b4:
    // 0x2870b4: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x2870b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2870b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2870b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2870bc: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2870BCu;
    {
        const bool branch_taken_0x2870bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2870C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2870BCu;
        // 0x2870c0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2870bc) {
            ctx->pc = 0x287140u;
            goto label_287140;
        }
    }
    ctx->pc = 0x2870C4u;
    // 0x2870c4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2870C4u;
    {
        const bool branch_taken_0x2870c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2870c4) {
            ctx->pc = 0x2870C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2870C4u;
            // 0x2870c8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2870DCu;
            goto label_2870dc;
        }
    }
    ctx->pc = 0x2870CCu;
    // 0x2870cc: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2870CCu;
    {
        const bool branch_taken_0x2870cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2870cc) {
            ctx->pc = 0x2870D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2870CCu;
            // 0x2870d0: 0x8e0215b0  lw          $v0, 0x15B0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2870F4u;
            goto label_2870f4;
        }
    }
    ctx->pc = 0x2870D4u;
    // 0x2870d4: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x2870D4u;
    {
        const bool branch_taken_0x2870d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2870D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2870D4u;
        // 0x2870d8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2870d4) {
            ctx->pc = 0x28725Cu;
            goto label_28725c;
        }
    }
    ctx->pc = 0x2870DCu;
label_2870dc:
    // 0x2870dc: 0x1062003a  beq         $v1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x2870DCu;
    {
        const bool branch_taken_0x2870dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2870E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2870DCu;
        // 0x2870e0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2870dc) {
            ctx->pc = 0x2871C8u;
            goto label_2871c8;
        }
    }
    ctx->pc = 0x2870E4u;
    // 0x2870e4: 0x10620056  beq         $v1, $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x2870E4u;
    {
        const bool branch_taken_0x2870e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2870e4) {
            ctx->pc = 0x287240u;
            goto label_287240;
        }
    }
    ctx->pc = 0x2870ECu;
    // 0x2870ec: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x2870ECu;
    {
        const bool branch_taken_0x2870ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2870F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2870ECu;
        // 0x2870f0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2870ec) {
            ctx->pc = 0x28725Cu;
            goto label_28725c;
        }
    }
    ctx->pc = 0x2870F4u;
label_2870f4:
    // 0x2870f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2870f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2870f8: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x2870f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2870fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2870fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287100: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x287100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x287104: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x287104u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x287108: 0xae0215b0  sw          $v0, 0x15B0($s0)
    ctx->pc = 0x287108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5552), GPR_U32(ctx, 2));
    // 0x28710c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28710cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287110: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x287110u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287114: 0x8c650110  lw          $a1, 0x110($v1)
    ctx->pc = 0x287114u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 272)));
    // 0x287118: 0x8c660114  lw          $a2, 0x114($v1)
    ctx->pc = 0x287118u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 276)));
    // 0x28711c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x28711cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x287120: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x287120u;
    SET_GPR_U32(ctx, 31, 0x287128u);
    ctx->pc = 0x287124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287120u;
    // 0x287124: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x287120u, 0x287128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287128u;
label_287128:
    // 0x287128: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x287128u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x28712c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x28712cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x287130: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x287130u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x287134: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x287134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x287138: 0xe6000600  swc1        $f0, 0x600($s0)
    ctx->pc = 0x287138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
    // 0x28713c: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x28713cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_287140:
    // 0x287140: 0xc055f06  jal         func_157C18
    ctx->pc = 0x287140u;
    SET_GPR_U32(ctx, 31, 0x287148u);
    ctx->pc = 0x287144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287140u;
    // 0x287144: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x287140u, 0x287148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287148u;
label_287148:
    // 0x287148: 0xc0528ac  jal         func_14A2B0
    ctx->pc = 0x287148u;
    SET_GPR_U32(ctx, 31, 0x287150u);
    ctx->pc = 0x28714Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287148u;
    // 0x28714c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A2B0u, 0x287148u, 0x287150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287150u;
label_287150:
    // 0x287150: 0xc0b6a6e  jal         func_2DA9B8
    ctx->pc = 0x287150u;
    SET_GPR_U32(ctx, 31, 0x287158u);
    ctx->pc = 0x287154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287150u;
    // 0x287154: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA9B8u, 0x287150u, 0x287158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287158u;
label_287158:
    // 0x287158: 0xc6000600  lwc1        $f0, 0x600($s0)
    ctx->pc = 0x287158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28715c: 0xc60105a8  lwc1        $f1, 0x5A8($s0)
    ctx->pc = 0x28715cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x287160: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x287160u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x287164: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x287164u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x287168: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x287168u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28716c: 0x0  nop
    ctx->pc = 0x28716cu;
    // NOP
    // 0x287170: 0x45000039  bc1f        . + 4 + (0x39 << 2)
    ctx->pc = 0x287170u;
    {
        const bool branch_taken_0x287170 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x287174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287170u;
        // 0x287174: 0xe6000600  swc1        $f0, 0x600($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x287170) {
            ctx->pc = 0x287258u;
            goto label_287258;
        }
    }
    ctx->pc = 0x287178u;
    // 0x287178: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x287178u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x28717c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x28717cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x287180: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x287180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x287184: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x287184u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x287188: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x287188u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28718c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28718cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287190: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x287190u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287194: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x287194u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287198: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x287198u;
    SET_GPR_U32(ctx, 31, 0x2871A0u);
    ctx->pc = 0x28719Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287198u;
    // 0x28719c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x287198u, 0x2871A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2871A0u;
label_2871a0:
    // 0x2871a0: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x2871A0u;
    SET_GPR_U32(ctx, 31, 0x2871A8u);
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x2871A0u, 0x2871A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2871A8u;
label_2871a8:
    // 0x2871a8: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x2871a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x2871ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2871acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2871b0: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2871b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x2871b4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2871b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2871b8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2871b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2871bc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2871bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2871c0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2871C0u;
    {
        const bool branch_taken_0x2871c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2871C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2871C0u;
        // 0x2871c4: 0xe6000600  swc1        $f0, 0x600($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2871c0) {
            ctx->pc = 0x287258u;
            goto label_287258;
        }
    }
    ctx->pc = 0x2871C8u;
label_2871c8:
    // 0x2871c8: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x2871c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2871cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2871ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2871d0: 0xa600054a  sh          $zero, 0x54A($s0)
    ctx->pc = 0x2871d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 0));
    // 0x2871d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2871d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2871d8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2871d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2871dc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2871dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2871e0: 0x8c450118  lw          $a1, 0x118($v0)
    ctx->pc = 0x2871e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 280)));
    // 0x2871e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2871e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2871e8: 0x8c46011c  lw          $a2, 0x11C($v0)
    ctx->pc = 0x2871e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 284)));
    // 0x2871ec: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2871ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2871f0: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2871F0u;
    SET_GPR_U32(ctx, 31, 0x2871F8u);
    ctx->pc = 0x2871F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2871F0u;
    // 0x2871f4: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2871F0u, 0x2871F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2871F8u;
label_2871f8:
    // 0x2871f8: 0xc0a3ec2  jal         func_28FB08
    ctx->pc = 0x2871F8u;
    SET_GPR_U32(ctx, 31, 0x287200u);
    ctx->pc = 0x2871FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2871F8u;
    // 0x2871fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FB08u, 0x2871F8u, 0x287200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287200u;
label_287200:
    // 0x287200: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x287200u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x287204: 0xc07efba  jal         func_1FBEE8
    ctx->pc = 0x287204u;
    SET_GPR_U32(ctx, 31, 0x28720Cu);
    ctx->pc = 0x287208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287204u;
    // 0x287208: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBEE8u, 0x287204u, 0x28720Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28720Cu;
label_28720c:
    // 0x28720c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x28720cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x287210: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x287210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x287214: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x287214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x287218: 0x2406005f  addiu       $a2, $zero, 0x5F
    ctx->pc = 0x287218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x28721c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x28721cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287220: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x287220u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287224: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x287224u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287228: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x287228u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28722c: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x28722Cu;
    SET_GPR_U32(ctx, 31, 0x287234u);
    ctx->pc = 0x287230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28722Cu;
    // 0x287230: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x28722Cu, 0x287234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287234u;
label_287234:
    // 0x287234: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x287234u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x287238: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x287238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x28723c: 0xa20302f6  sb          $v1, 0x2F6($s0)
    ctx->pc = 0x28723cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 3));
label_287240:
    // 0x287240: 0xc055f06  jal         func_157C18
    ctx->pc = 0x287240u;
    SET_GPR_U32(ctx, 31, 0x287248u);
    ctx->pc = 0x287244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287240u;
    // 0x287244: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x287240u, 0x287248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287248u;
label_287248:
    // 0x287248: 0xc0528ac  jal         func_14A2B0
    ctx->pc = 0x287248u;
    SET_GPR_U32(ctx, 31, 0x287250u);
    ctx->pc = 0x28724Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287248u;
    // 0x28724c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A2B0u, 0x287248u, 0x287250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287250u;
label_287250:
    // 0x287250: 0xc0b6a6e  jal         func_2DA9B8
    ctx->pc = 0x287250u;
    SET_GPR_U32(ctx, 31, 0x287258u);
    ctx->pc = 0x287254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287250u;
    // 0x287254: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA9B8u, 0x287250u, 0x287258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287258u;
label_287258:
    // 0x287258: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x287258u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_28725c:
    // 0x28725c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28725cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x287260: 0x3e00008  jr          $ra
    ctx->pc = 0x287260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287260u;
        // 0x287264: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x287260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x287268u;
}
