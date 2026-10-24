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

// Function: func_0030D358
// Address: 0x30d358 - 0x30d5c8
void func_0030D358_0x30d358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0030D358_0x30d358");
#endif

    switch (ctx->pc) {
        case 0x30d3b0u: goto label_30d3b0;
        case 0x30d3e0u: goto label_30d3e0;
        case 0x30d3f4u: goto label_30d3f4;
        case 0x30d4c8u: goto label_30d4c8;
        case 0x30d4d8u: goto label_30d4d8;
        case 0x30d4ecu: goto label_30d4ec;
        case 0x30d4f8u: goto label_30d4f8;
        case 0x30d51cu: goto label_30d51c;
        case 0x30d528u: goto label_30d528;
        case 0x30d558u: goto label_30d558;
        case 0x30d57cu: goto label_30d57c;
        case 0x30d590u: goto label_30d590;
        case 0x30d5a0u: goto label_30d5a0;
        default: break;
    }

    ctx->pc = 0x30d358u;

    // 0x30d358: 0x3c050074  lui         $a1, 0x74
    ctx->pc = 0x30d358u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)116 << 16));
    // 0x30d35c: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x30d35cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x30d360: 0x8ca37a24  lw          $v1, 0x7A24($a1)
    ctx->pc = 0x30d360u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A24u));
    // 0x30d364: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x30d364u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x30d368: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x30d368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x30d36c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x30d36cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x30d370: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x30d370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30d374: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x30d374u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x30d378: 0xaca37a24  sw          $v1, 0x7A24($a1)
    ctx->pc = 0x30d378u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x747A24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x747A24u, _value); } while (0);
    // 0x30d37c: 0x24b17a24  addiu       $s1, $a1, 0x7A24
    ctx->pc = 0x30d37cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 31268));
    // 0x30d380: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x30d380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x30d384: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x30d384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x30d388: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x30d388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x30d38c: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x30d38cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x30d390: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x30d390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x30d394: 0x3c120075  lui         $s2, 0x75
    ctx->pc = 0x30d394u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)117 << 16));
    // 0x30d398: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x30d398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x30d39c: 0x3c13003c  lui         $s3, 0x3C
    ctx->pc = 0x30d39cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)60 << 16));
    // 0x30d3a0: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x30d3a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x30d3a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30d3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30d3a8: 0xc0b29e6  jal         func_2CA798
    ctx->pc = 0x30D3A8u;
    SET_GPR_U32(ctx, 31, 0x30D3B0u);
    ctx->pc = 0x30D3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D3A8u;
    // 0x30d3ac: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA798u, 0x30D3A8u, 0x30D3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D3B0u;
label_30d3b0:
    // 0x30d3b0: 0x26103f20  addiu       $s0, $s0, 0x3F20
    ctx->pc = 0x30d3b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16160));
    // 0x30d3b4: 0x26623bc8  addiu       $v0, $s3, 0x3BC8
    ctx->pc = 0x30d3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 15304));
    // 0x30d3b8: 0x2626ffd0  addiu       $a2, $s1, -0x30
    ctx->pc = 0x30d3b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967248));
    // 0x30d3bc: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x30d3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x30d3c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30d3c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d3c4: 0x26474200  addiu       $a3, $s2, 0x4200
    ctx->pc = 0x30d3c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 16896));
    // 0x30d3c8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x30d3c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d3cc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x30d3ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d3d0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x30d3d0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d3d4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x30d3d4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d3d8: 0xc08032c  jal         func_200CB0
    ctx->pc = 0x30D3D8u;
    SET_GPR_U32(ctx, 31, 0x30D3E0u);
    ctx->pc = 0x30D3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D3D8u;
    // 0x30d3dc: 0x2631fa7c  addiu       $s1, $s1, -0x584 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294965884));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200CB0u, 0x30D3D8u, 0x30D3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D3E0u;
label_30d3e0:
    // 0x30d3e0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x30d3e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d3e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30d3e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d3e8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x30d3e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d3ec: 0xc080442  jal         func_201108
    ctx->pc = 0x30D3ECu;
    SET_GPR_U32(ctx, 31, 0x30D3F4u);
    ctx->pc = 0x30D3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D3ECu;
    // 0x30d3f0: 0x3c100074  lui         $s0, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)116 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201108u, 0x30D3ECu, 0x30D3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D3F4u;
label_30d3f4:
    // 0x30d3f4: 0x8e23056c  lw          $v1, 0x56C($s1)
    ctx->pc = 0x30d3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1388)));
    // 0x30d3f8: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x30d3f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x30d3fc: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x30D3FCu;
    {
        const bool branch_taken_0x30d3fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D3FCu;
        // 0x30d400: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d3fc) {
            ctx->pc = 0x30D4CCu;
            goto label_30d4cc;
        }
    }
    ctx->pc = 0x30D404u;
    // 0x30d404: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x30d404u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30d408: 0x24420550  addiu       $v0, $v0, 0x550
    ctx->pc = 0x30d408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x30d40c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x30d40cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x30d410: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x30d410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30d414: 0x800008  jr          $a0
    ctx->pc = 0x30D414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x30D41Cu: goto label_30d41c;
            case 0x30D430u: goto label_30d430;
            case 0x30D444u: goto label_30d444;
            case 0x30D458u: goto label_30d458;
            case 0x30D46Cu: goto label_30d46c;
            case 0x30D480u: goto label_30d480;
            case 0x30D494u: goto label_30d494;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D414u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x30D41Cu;
label_30d41c:
    // 0x30d41c: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x30d41cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x30d420: 0x26623bc8  addiu       $v0, $s3, 0x3BC8
    ctx->pc = 0x30d420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 15304));
    // 0x30d424: 0x246674a0  addiu       $a2, $v1, 0x74A0
    ctx->pc = 0x30d424u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
    // 0x30d428: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x30D428u;
    {
        const bool branch_taken_0x30d428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D428u;
        // 0x30d42c: 0x8c45000c  lw          $a1, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d428) {
            ctx->pc = 0x30D4A4u;
            goto label_30d4a4;
        }
    }
    ctx->pc = 0x30D430u;
label_30d430:
    // 0x30d430: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x30d430u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x30d434: 0x26623bc8  addiu       $v0, $s3, 0x3BC8
    ctx->pc = 0x30d434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 15304));
    // 0x30d438: 0x246674a0  addiu       $a2, $v1, 0x74A0
    ctx->pc = 0x30d438u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
    // 0x30d43c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x30D43Cu;
    {
        const bool branch_taken_0x30d43c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D43Cu;
        // 0x30d440: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d43c) {
            ctx->pc = 0x30D4A4u;
            goto label_30d4a4;
        }
    }
    ctx->pc = 0x30D444u;
label_30d444:
    // 0x30d444: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x30d444u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x30d448: 0x26623bc8  addiu       $v0, $s3, 0x3BC8
    ctx->pc = 0x30d448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 15304));
    // 0x30d44c: 0x246674a0  addiu       $a2, $v1, 0x74A0
    ctx->pc = 0x30d44cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
    // 0x30d450: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x30D450u;
    {
        const bool branch_taken_0x30d450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D450u;
        // 0x30d454: 0x8c450014  lw          $a1, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d450) {
            ctx->pc = 0x30D4A4u;
            goto label_30d4a4;
        }
    }
    ctx->pc = 0x30D458u;
label_30d458:
    // 0x30d458: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x30d458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x30d45c: 0x26623bc8  addiu       $v0, $s3, 0x3BC8
    ctx->pc = 0x30d45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 15304));
    // 0x30d460: 0x246674a0  addiu       $a2, $v1, 0x74A0
    ctx->pc = 0x30d460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
    // 0x30d464: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x30D464u;
    {
        const bool branch_taken_0x30d464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D464u;
        // 0x30d468: 0x8c45001c  lw          $a1, 0x1C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d464) {
            ctx->pc = 0x30D4A4u;
            goto label_30d4a4;
        }
    }
    ctx->pc = 0x30D46Cu;
label_30d46c:
    // 0x30d46c: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x30d46cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x30d470: 0x26623bc8  addiu       $v0, $s3, 0x3BC8
    ctx->pc = 0x30d470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 15304));
    // 0x30d474: 0x246674a0  addiu       $a2, $v1, 0x74A0
    ctx->pc = 0x30d474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
    // 0x30d478: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x30D478u;
    {
        const bool branch_taken_0x30d478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D478u;
        // 0x30d47c: 0x8c450018  lw          $a1, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d478) {
            ctx->pc = 0x30D4A4u;
            goto label_30d4a4;
        }
    }
    ctx->pc = 0x30D480u;
label_30d480:
    // 0x30d480: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x30d480u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x30d484: 0x26623bc8  addiu       $v0, $s3, 0x3BC8
    ctx->pc = 0x30d484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 15304));
    // 0x30d488: 0x246674a0  addiu       $a2, $v1, 0x74A0
    ctx->pc = 0x30d488u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
    // 0x30d48c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x30D48Cu;
    {
        const bool branch_taken_0x30d48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D48Cu;
        // 0x30d490: 0x8c450024  lw          $a1, 0x24($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d48c) {
            ctx->pc = 0x30D4A4u;
            goto label_30d4a4;
        }
    }
    ctx->pc = 0x30D494u;
label_30d494:
    // 0x30d494: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x30d494u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x30d498: 0x26623bc8  addiu       $v0, $s3, 0x3BC8
    ctx->pc = 0x30d498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 15304));
    // 0x30d49c: 0x246674a0  addiu       $a2, $v1, 0x74A0
    ctx->pc = 0x30d49cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
    // 0x30d4a0: 0x8c450020  lw          $a1, 0x20($v0)
    ctx->pc = 0x30d4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_30d4a4:
    // 0x30d4a4: 0x24c60558  addiu       $a2, $a2, 0x558
    ctx->pc = 0x30d4a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1368));
    // 0x30d4a8: 0x26474200  addiu       $a3, $s2, 0x4200
    ctx->pc = 0x30d4a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 16896));
    // 0x30d4ac: 0x26a43f20  addiu       $a0, $s5, 0x3F20
    ctx->pc = 0x30d4acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 16160));
    // 0x30d4b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x30d4b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d4b4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x30d4b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d4b8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x30d4b8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d4bc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x30d4bcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d4c0: 0xc08032c  jal         func_200CB0
    ctx->pc = 0x30D4C0u;
    SET_GPR_U32(ctx, 31, 0x30D4C8u);
    ctx->pc = 0x30D4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D4C0u;
    // 0x30d4c4: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200CB0u, 0x30D4C0u, 0x30D4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D4C8u;
label_30d4c8:
    // 0x30d4c8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x30d4c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30d4cc:
    // 0x30d4cc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x30d4ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d4d0: 0xc080442  jal         func_201108
    ctx->pc = 0x30D4D0u;
    SET_GPR_U32(ctx, 31, 0x30D4D8u);
    ctx->pc = 0x30D4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D4D0u;
    // 0x30d4d4: 0x26a43f20  addiu       $a0, $s5, 0x3F20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 16160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201108u, 0x30D4D0u, 0x30D4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D4D8u;
label_30d4d8:
    // 0x30d4d8: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x30d4d8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x30d4dc: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x30d4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x30d4e0: 0x261074a0  addiu       $s0, $s0, 0x74A0
    ctx->pc = 0x30d4e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 29856));
    // 0x30d4e4: 0xc0a925c  jal         func_2A4970
    ctx->pc = 0x30D4E4u;
    SET_GPR_U32(ctx, 31, 0x30D4ECu);
    ctx->pc = 0x30D4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D4E4u;
    // 0x30d4e8: 0x8c442380  lw          $a0, 0x2380($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9088)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4970u, 0x30D4E4u, 0x30D4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D4ECu;
label_30d4ec:
    // 0x30d4ec: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x30d4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x30d4f0: 0xc0aba64  jal         func_2AE990
    ctx->pc = 0x30D4F0u;
    SET_GPR_U32(ctx, 31, 0x30D4F8u);
    ctx->pc = 0x30D4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D4F0u;
    // 0x30d4f4: 0x8c4423a4  lw          $a0, 0x23A4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9124)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE990u, 0x30D4F0u, 0x30D4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D4F8u;
label_30d4f8:
    // 0x30d4f8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x30d4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x30d4fc: 0x8e242388  lw          $a0, 0x2388($s1)
    ctx->pc = 0x30d4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 9096)));
    // 0x30d500: 0x8c432384  lw          $v1, 0x2384($v0)
    ctx->pc = 0x30d500u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2384u));
    // 0x30d504: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x30d504u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x30d508: 0x24a50540  addiu       $a1, $a1, 0x540
    ctx->pc = 0x30d508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1344));
    // 0x30d50c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30d50cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d510: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x30d510u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x30d514: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x30D514u;
    SET_GPR_U32(ctx, 31, 0x30D51Cu);
    ctx->pc = 0x30D518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D514u;
    // 0x30d518: 0x8e040558  lw          $a0, 0x558($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1368)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x30D514u, 0x30D51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D51Cu;
label_30d51c:
    // 0x30d51c: 0x8e242388  lw          $a0, 0x2388($s1)
    ctx->pc = 0x30d51cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 9096)));
    // 0x30d520: 0xc0ab31c  jal         func_2ACC70
    ctx->pc = 0x30D520u;
    SET_GPR_U32(ctx, 31, 0x30D528u);
    ctx->pc = 0x30D524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D520u;
    // 0x30d524: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACC70u, 0x30D520u, 0x30D528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D528u;
label_30d528:
    // 0x30d528: 0x8e020584  lw          $v0, 0x584($s0)
    ctx->pc = 0x30d528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1412)));
    // 0x30d52c: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x30d52cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x30d530: 0x8e040598  lw          $a0, 0x598($s0)
    ctx->pc = 0x30d530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1432)));
    // 0x30d534: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x30d534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x30d538: 0x4800009  bltz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x30D538u;
    {
        const bool branch_taken_0x30d538 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x30D53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D538u;
        // 0x30d53c: 0xae020584  sw          $v0, 0x584($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1412), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d538) {
            ctx->pc = 0x30D560u;
            goto label_30d560;
        }
    }
    ctx->pc = 0x30D540u;
    // 0x30d540: 0x3c100075  lui         $s0, 0x75
    ctx->pc = 0x30d540u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)117 << 16));
    // 0x30d544: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x30d544u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x30d548: 0x24a5e8a8  addiu       $a1, $a1, -0x1758
    ctx->pc = 0x30d548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961320));
    // 0x30d54c: 0x26042c00  addiu       $a0, $s0, 0x2C00
    ctx->pc = 0x30d54cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 11264));
    // 0x30d550: 0xc0b551c  jal         func_2D5470
    ctx->pc = 0x30D550u;
    SET_GPR_U32(ctx, 31, 0x30D558u);
    ctx->pc = 0x30D554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D550u;
    // 0x30d554: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5470u, 0x30D550u, 0x30D558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D558u;
label_30d558:
    // 0x30d558: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x30D558u;
    {
        const bool branch_taken_0x30d558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D558u;
        // 0x30d55c: 0x26022c00  addiu       $v0, $s0, 0x2C00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 11264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d558) {
            ctx->pc = 0x30D598u;
            goto label_30d598;
        }
    }
    ctx->pc = 0x30D560u;
label_30d560:
    // 0x30d560: 0x3c110075  lui         $s1, 0x75
    ctx->pc = 0x30d560u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)117 << 16));
    // 0x30d564: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x30d564u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x30d568: 0x26302c00  addiu       $s0, $s1, 0x2C00
    ctx->pc = 0x30d568u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 11264));
    // 0x30d56c: 0x24a55998  addiu       $a1, $a1, 0x5998
    ctx->pc = 0x30d56cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22936));
    // 0x30d570: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30d570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d574: 0xc0b551c  jal         func_2D5470
    ctx->pc = 0x30D574u;
    SET_GPR_U32(ctx, 31, 0x30D57Cu);
    ctx->pc = 0x30D578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D574u;
    // 0x30d578: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5470u, 0x30D574u, 0x30D57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D57Cu;
label_30d57c:
    // 0x30d57c: 0x3c050031  lui         $a1, 0x31
    ctx->pc = 0x30d57cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
    // 0x30d580: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30d580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d584: 0x24a5d5c8  addiu       $a1, $a1, -0x2A38
    ctx->pc = 0x30d584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956488));
    // 0x30d588: 0xc0b551c  jal         func_2D5470
    ctx->pc = 0x30D588u;
    SET_GPR_U32(ctx, 31, 0x30D590u);
    ctx->pc = 0x30D58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D588u;
    // 0x30d58c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5470u, 0x30D588u, 0x30D590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D590u;
label_30d590:
    // 0x30d590: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x30d590u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d594: 0x26022c00  addiu       $v0, $s0, 0x2C00
    ctx->pc = 0x30d594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 11264));
label_30d598:
    // 0x30d598: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x30D598u;
    SET_GPR_U32(ctx, 31, 0x30D5A0u);
    ctx->pc = 0x30D59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D598u;
    // 0x30d59c: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x30D598u, 0x30D5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D5A0u;
label_30d5a0:
    // 0x30d5a0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x30d5a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x30d5a4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x30d5a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30d5a8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x30d5a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30d5ac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x30d5acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30d5b0: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x30d5b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30d5b4: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x30d5b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30d5b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30d5b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30d5bc: 0x3e00008  jr          $ra
    ctx->pc = 0x30D5BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D5BCu;
        // 0x30d5c0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D5BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D5C4u;
    // 0x30d5c4: 0x0  nop
    ctx->pc = 0x30d5c4u;
    // NOP
    ctx->pc = 0x30d5c8u;
}
