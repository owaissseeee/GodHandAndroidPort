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

// Function: func_0010F1F0
// Address: 0x10f1f0 - 0x10f4b8
void func_0010F1F0_0x10f1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0010F1F0_0x10f1f0");
#endif

    switch (ctx->pc) {
        case 0x10f230u: goto label_10f230;
        case 0x10f23cu: goto label_10f23c;
        case 0x10f26cu: goto label_10f26c;
        case 0x10f27cu: goto label_10f27c;
        case 0x10f2a0u: goto label_10f2a0;
        case 0x10f2bcu: goto label_10f2bc;
        case 0x10f2ccu: goto label_10f2cc;
        case 0x10f2d4u: goto label_10f2d4;
        case 0x10f300u: goto label_10f300;
        case 0x10f31cu: goto label_10f31c;
        case 0x10f328u: goto label_10f328;
        case 0x10f35cu: goto label_10f35c;
        case 0x10f370u: goto label_10f370;
        case 0x10f384u: goto label_10f384;
        case 0x10f38cu: goto label_10f38c;
        case 0x10f39cu: goto label_10f39c;
        case 0x10f3bcu: goto label_10f3bc;
        case 0x10f3d0u: goto label_10f3d0;
        case 0x10f3dcu: goto label_10f3dc;
        case 0x10f400u: goto label_10f400;
        case 0x10f408u: goto label_10f408;
        case 0x10f414u: goto label_10f414;
        case 0x10f424u: goto label_10f424;
        case 0x10f434u: goto label_10f434;
        case 0x10f458u: goto label_10f458;
        default: break;
    }

    ctx->pc = 0x10f1f0u;

    // 0x10f1f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x10f1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x10f1f4: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x10f1f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x10f1f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10f1f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10f1fc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x10f1fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x10f200: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x10f200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10f204: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x10f204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x10f208: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x10f208u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x10f20c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x10f20cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x10f210: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x10f210u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f214: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10f214u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f218: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10f218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10f21c: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x10f21cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x10f220: 0x261064f0  addiu       $s0, $s0, 0x64F0
    ctx->pc = 0x10f220u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
    // 0x10f224: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x10f224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    // 0x10f228: 0xc0a480c  jal         func_292030
    ctx->pc = 0x10F228u;
    SET_GPR_U32(ctx, 31, 0x10F230u);
    ctx->pc = 0x10F22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F228u;
    // 0x10f22c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292030u, 0x10F228u, 0x10F230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F230u;
label_10f230:
    // 0x10f230: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10f230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f234: 0xc0a4bbc  jal         func_292EF0
    ctx->pc = 0x10F234u;
    SET_GPR_U32(ctx, 31, 0x10F23Cu);
    ctx->pc = 0x10F238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F234u;
    // 0x10f238: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292EF0u, 0x10F234u, 0x10F23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F23Cu;
label_10f23c:
    // 0x10f23c: 0x8e2215f4  lw          $v0, 0x15F4($s1)
    ctx->pc = 0x10f23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5620)));
    // 0x10f240: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x10f240u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x10f244: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x10f244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x10f248: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x10F248u;
    {
        const bool branch_taken_0x10f248 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F248u;
        // 0x10f24c: 0xae2215f4  sw          $v0, 0x15F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f248) {
            ctx->pc = 0x10F264u;
            goto label_10f264;
        }
    }
    ctx->pc = 0x10F250u;
    // 0x10f250: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10f250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10f254: 0x10620044  beq         $v1, $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x10F254u;
    {
        const bool branch_taken_0x10f254 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x10f254) {
            ctx->pc = 0x10F368u;
            goto label_10f368;
        }
    }
    ctx->pc = 0x10F25Cu;
    // 0x10f25c: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x10F25Cu;
    {
        const bool branch_taken_0x10f25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F25Cu;
        // 0x10f260: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f25c) {
            ctx->pc = 0x10F3E0u;
            goto label_10f3e0;
        }
    }
    ctx->pc = 0x10F264u;
label_10f264:
    // 0x10f264: 0xc04a55e  jal         func_129578
    ctx->pc = 0x10F264u;
    SET_GPR_U32(ctx, 31, 0x10F26Cu);
    ctx->pc = 0x10F268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F264u;
    // 0x10f268: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129578u, 0x10F264u, 0x10F26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F26Cu;
label_10f26c:
    // 0x10f26c: 0xa62005e0  sh          $zero, 0x5E0($s1)
    ctx->pc = 0x10f26cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x10f270: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10f270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f274: 0xc049396  jal         func_124E58
    ctx->pc = 0x10F274u;
    SET_GPR_U32(ctx, 31, 0x10F27Cu);
    ctx->pc = 0x10F278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F274u;
    // 0x10f278: 0xa62005e2  sh          $zero, 0x5E2($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 1506), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E58u, 0x10F274u, 0x10F27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F27Cu;
label_10f27c:
    // 0x10f27c: 0x922202f7  lbu         $v0, 0x2F7($s1)
    ctx->pc = 0x10f27cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
    // 0x10f280: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x10F280u;
    {
        const bool branch_taken_0x10f280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F280u;
        // 0x10f284: 0x24050190  addiu       $a1, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f280) {
            ctx->pc = 0x10F2E4u;
            goto label_10f2e4;
        }
    }
    ctx->pc = 0x10F288u;
    // 0x10f288: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10f288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f28c: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x10f28cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x10f290: 0x2407001c  addiu       $a3, $zero, 0x1C
    ctx->pc = 0x10f290u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x10f294: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10f294u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f298: 0xc042902  jal         func_10A408
    ctx->pc = 0x10F298u;
    SET_GPR_U32(ctx, 31, 0x10F2A0u);
    ctx->pc = 0x10F29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F298u;
    // 0x10f29c: 0x24090123  addiu       $t1, $zero, 0x123 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x10F298u, 0x10F2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F2A0u;
label_10f2a0:
    // 0x10f2a0: 0x24050190  addiu       $a1, $zero, 0x190
    ctx->pc = 0x10f2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x10f2a4: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x10f2a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x10f2a8: 0x2407001c  addiu       $a3, $zero, 0x1C
    ctx->pc = 0x10f2a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x10f2ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10f2acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f2b0: 0x24090123  addiu       $t1, $zero, 0x123
    ctx->pc = 0x10f2b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    // 0x10f2b4: 0xc042908  jal         func_10A420
    ctx->pc = 0x10F2B4u;
    SET_GPR_U32(ctx, 31, 0x10F2BCu);
    ctx->pc = 0x10F2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F2B4u;
    // 0x10f2b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x10F2B4u, 0x10F2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F2BCu;
label_10f2bc:
    // 0x10f2bc: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x10f2bcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    // 0x10f2c0: 0x26109b70  addiu       $s0, $s0, -0x6490
    ctx->pc = 0x10f2c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
    // 0x10f2c4: 0xc07eb00  jal         func_1FAC00
    ctx->pc = 0x10F2C4u;
    SET_GPR_U32(ctx, 31, 0x10F2CCu);
    ctx->pc = 0x10F2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F2C4u;
    // 0x10f2c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAC00u, 0x10F2C4u, 0x10F2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F2CCu;
label_10f2cc:
    // 0x10f2cc: 0xc07eb00  jal         func_1FAC00
    ctx->pc = 0x10F2CCu;
    SET_GPR_U32(ctx, 31, 0x10F2D4u);
    ctx->pc = 0x10F2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F2CCu;
    // 0x10f2d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAC00u, 0x10F2CCu, 0x10F2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F2D4u;
label_10f2d4:
    // 0x10f2d4: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x10f2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x10f2d8: 0x8c4300c8  lw          $v1, 0xC8($v0)
    ctx->pc = 0x10f2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 200)));
    // 0x10f2dc: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x10F2DCu;
    {
        const bool branch_taken_0x10f2dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F2DCu;
        // 0x10f2e0: 0x8c4400d0  lw          $a0, 0xD0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f2dc) {
            ctx->pc = 0x10F334u;
            goto label_10f334;
        }
    }
    ctx->pc = 0x10F2E4u;
label_10f2e4:
    // 0x10f2e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10f2e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f2e8: 0x2405005a  addiu       $a1, $zero, 0x5A
    ctx->pc = 0x10f2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x10f2ec: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x10f2ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x10f2f0: 0x2407001c  addiu       $a3, $zero, 0x1C
    ctx->pc = 0x10f2f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x10f2f4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10f2f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f2f8: 0xc042902  jal         func_10A408
    ctx->pc = 0x10F2F8u;
    SET_GPR_U32(ctx, 31, 0x10F300u);
    ctx->pc = 0x10F2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F2F8u;
    // 0x10f2fc: 0x24090123  addiu       $t1, $zero, 0x123 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x10F2F8u, 0x10F300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F300u;
label_10f300:
    // 0x10f300: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10f300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f304: 0x2405005a  addiu       $a1, $zero, 0x5A
    ctx->pc = 0x10f304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x10f308: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x10f308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x10f30c: 0x2407001c  addiu       $a3, $zero, 0x1C
    ctx->pc = 0x10f30cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x10f310: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10f310u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f314: 0xc042908  jal         func_10A420
    ctx->pc = 0x10F314u;
    SET_GPR_U32(ctx, 31, 0x10F31Cu);
    ctx->pc = 0x10F318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F314u;
    // 0x10f318: 0x24090123  addiu       $t1, $zero, 0x123 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x10F314u, 0x10F31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F31Cu;
label_10f31c:
    // 0x10f31c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x10f31cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x10f320: 0xc07eb00  jal         func_1FAC00
    ctx->pc = 0x10F320u;
    SET_GPR_U32(ctx, 31, 0x10F328u);
    ctx->pc = 0x10F324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F320u;
    // 0x10f324: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAC00u, 0x10F320u, 0x10F328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F328u;
label_10f328:
    // 0x10f328: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x10f328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x10f32c: 0x8c4300c8  lw          $v1, 0xC8($v0)
    ctx->pc = 0x10f32cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 200)));
    // 0x10f330: 0x8c4400cc  lw          $a0, 0xCC($v0)
    ctx->pc = 0x10f330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_10f334:
    // 0x10f334: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x10f334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10f338: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x10f338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x10f33c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10f33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10f340: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x10f340u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10f344: 0xa2221684  sb          $v0, 0x1684($s1)
    ctx->pc = 0x10f344u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5764), (uint8_t)GPR_U32(ctx, 2));
    // 0x10f348: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10f348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f34c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x10f34cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10f350: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10f350u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f354: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x10F354u;
    SET_GPR_U32(ctx, 31, 0x10F35Cu);
    ctx->pc = 0x10F358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F354u;
    // 0x10f358: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x10F354u, 0x10F35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F35Cu;
label_10f35c:
    // 0x10f35c: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x10f35cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x10f360: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10f360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10f364: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x10f364u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_10f368:
    // 0x10f368: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x10F368u;
    SET_GPR_U32(ctx, 31, 0x10F370u);
    ctx->pc = 0x10F36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F368u;
    // 0x10f36c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x10F368u, 0x10F370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F370u;
label_10f370:
    // 0x10f370: 0x3c013e06  lui         $at, 0x3E06
    ctx->pc = 0x10f370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15878 << 16));
    // 0x10f374: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x10f374u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x10f378: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x10f378u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10f37c: 0xc04939a  jal         func_124E68
    ctx->pc = 0x10F37Cu;
    SET_GPR_U32(ctx, 31, 0x10F384u);
    ctx->pc = 0x10F380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F37Cu;
    // 0x10f380: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E68u, 0x10F37Cu, 0x10F384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F384u;
label_10f384:
    // 0x10f384: 0xc055f06  jal         func_157C18
    ctx->pc = 0x10F384u;
    SET_GPR_U32(ctx, 31, 0x10F38Cu);
    ctx->pc = 0x10F388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F384u;
    // 0x10f388: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x10F384u, 0x10F38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F38Cu;
label_10f38c:
    // 0x10f38c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x10F38Cu;
    {
        const bool branch_taken_0x10f38c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10f38c) {
            ctx->pc = 0x10F3BCu;
            goto label_10f3bc;
        }
    }
    ctx->pc = 0x10F394u;
    // 0x10f394: 0xc04a58c  jal         func_129630
    ctx->pc = 0x10F394u;
    SET_GPR_U32(ctx, 31, 0x10F39Cu);
    ctx->pc = 0x10F398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F394u;
    // 0x10f398: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129630u, 0x10F394u, 0x10F39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F39Cu;
label_10f39c:
    // 0x10f39c: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x10f39cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x10f3a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10f3a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f3a4: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x10f3a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x10f3a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10f3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10f3ac: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x10f3acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x10f3b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10f3b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f3b4: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x10F3B4u;
    SET_GPR_U32(ctx, 31, 0x10F3BCu);
    ctx->pc = 0x10F3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F3B4u;
    // 0x10f3b8: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x10F3B4u, 0x10F3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F3BCu;
label_10f3bc:
    // 0x10f3bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10f3bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10f3c0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x10f3c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x10f3c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10f3c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f3c8: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x10F3C8u;
    SET_GPR_U32(ctx, 31, 0x10F3D0u);
    ctx->pc = 0x10F3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F3C8u;
    // 0x10f3cc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x10F3C8u, 0x10F3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F3D0u;
label_10f3d0:
    // 0x10f3d0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x10f3d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x10f3d4: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x10F3D4u;
    SET_GPR_U32(ctx, 31, 0x10F3DCu);
    ctx->pc = 0x10F3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F3D4u;
    // 0x10f3d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x10F3D4u, 0x10F3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F3DCu;
label_10f3dc:
    // 0x10f3dc: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x10f3dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_10f3e0:
    // 0x10f3e0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x10f3e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x10f3e4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10F3E4u;
    {
        const bool branch_taken_0x10f3e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10f3e4) {
            ctx->pc = 0x10F400u;
            goto label_10f400;
        }
    }
    ctx->pc = 0x10F3ECu;
    // 0x10f3ec: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x10f3ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x10f3f0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x10f3f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x10f3f4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x10f3f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10f3f8: 0xc0a4bce  jal         func_292F38
    ctx->pc = 0x10F3F8u;
    SET_GPR_U32(ctx, 31, 0x10F400u);
    ctx->pc = 0x10F3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F3F8u;
    // 0x10f3fc: 0x264464f0  addiu       $a0, $s2, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F38u, 0x10F3F8u, 0x10F400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F400u;
label_10f400:
    // 0x10f400: 0xc04290e  jal         func_10A438
    ctx->pc = 0x10F400u;
    SET_GPR_U32(ctx, 31, 0x10F408u);
    ctx->pc = 0x10F404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F400u;
    // 0x10f404: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A438u, 0x10F400u, 0x10F408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F408u;
label_10f408:
    // 0x10f408: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10f408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f40c: 0xc048e4e  jal         func_123938
    ctx->pc = 0x10F40Cu;
    SET_GPR_U32(ctx, 31, 0x10F414u);
    ctx->pc = 0x10F410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F40Cu;
    // 0x10f410: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123938u, 0x10F40Cu, 0x10F414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F414u;
label_10f414:
    // 0x10f414: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x10F414u;
    {
        const bool branch_taken_0x10f414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10f414) {
            ctx->pc = 0x10F418u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10F414u;
            // 0x10f418: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10F43Cu;
            goto label_10f43c;
        }
    }
    ctx->pc = 0x10F41Cu;
    // 0x10f41c: 0xc04a58c  jal         func_129630
    ctx->pc = 0x10F41Cu;
    SET_GPR_U32(ctx, 31, 0x10F424u);
    ctx->pc = 0x10F420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F41Cu;
    // 0x10f420: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129630u, 0x10F41Cu, 0x10F424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F424u;
label_10f424:
    // 0x10f424: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10f424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f428: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10f428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10f42c: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x10F42Cu;
    SET_GPR_U32(ctx, 31, 0x10F434u);
    ctx->pc = 0x10F430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F42Cu;
    // 0x10f430: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x10F42Cu, 0x10F434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F434u;
label_10f434:
    // 0x10f434: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x10F434u;
    {
        const bool branch_taken_0x10f434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F434u;
        // 0x10f438: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f434) {
            ctx->pc = 0x10F49Cu;
            goto label_10f49c;
        }
    }
    ctx->pc = 0x10F43Cu;
label_10f43c:
    // 0x10f43c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x10f43cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x10f440: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x10F440u;
    {
        const bool branch_taken_0x10f440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F440u;
        // 0x10f444: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f440) {
            ctx->pc = 0x10F47Cu;
            goto label_10f47c;
        }
    }
    ctx->pc = 0x10F448u;
    // 0x10f448: 0x8e25161c  lw          $a1, 0x161C($s1)
    ctx->pc = 0x10f448u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5660)));
    // 0x10f44c: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x10f44cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x10f450: 0xc0b2ee8  jal         func_2CBBA0
    ctx->pc = 0x10F450u;
    SET_GPR_U32(ctx, 31, 0x10F458u);
    ctx->pc = 0x10F454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F450u;
    // 0x10f454: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBBA0u, 0x10F450u, 0x10F458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F458u;
label_10f458:
    // 0x10f458: 0xae20161c  sw          $zero, 0x161C($s1)
    ctx->pc = 0x10f458u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5660), GPR_U32(ctx, 0));
    // 0x10f45c: 0x3c02ffbf  lui         $v0, 0xFFBF
    ctx->pc = 0x10f45cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65471 << 16));
    // 0x10f460: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x10f460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x10f464: 0x8e0300b0  lw          $v1, 0xB0($s0)
    ctx->pc = 0x10f464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x10f468: 0x8e0400ac  lw          $a0, 0xAC($s0)
    ctx->pc = 0x10f468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x10f46c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x10f46cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x10f470: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x10f470u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x10f474: 0xae0300b0  sw          $v1, 0xB0($s0)
    ctx->pc = 0x10f474u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
    // 0x10f478: 0xae0400ac  sw          $a0, 0xAC($s0)
    ctx->pc = 0x10f478u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 4));
label_10f47c:
    // 0x10f47c: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x10f47cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x10f480: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x10f480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x10f484: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x10f484u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x10f488: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10f488u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10f48c: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x10f48cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x10f490: 0xe6200674  swc1        $f0, 0x674($s1)
    ctx->pc = 0x10f490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1652), bits); }
    // 0x10f494: 0xa62203ac  sh          $v0, 0x3AC($s1)
    ctx->pc = 0x10f494u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 940), (uint16_t)GPR_U32(ctx, 2));
    // 0x10f498: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x10f498u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_10f49c:
    // 0x10f49c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x10f49cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10f4a0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x10f4a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10f4a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10f4a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10f4a8: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x10f4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10f4ac: 0x3e00008  jr          $ra
    ctx->pc = 0x10F4ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F4ACu;
        // 0x10f4b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F4ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F4B4u;
    // 0x10f4b4: 0x0  nop
    ctx->pc = 0x10f4b4u;
    // NOP
    ctx->pc = 0x10f4b8u;
}
