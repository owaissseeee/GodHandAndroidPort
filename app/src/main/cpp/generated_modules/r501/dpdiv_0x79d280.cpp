#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r501_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r501
{
// Function: dpdiv
// Address: 0x79d280 - 0x79d3e8
void dpdiv_0x79d280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dpdiv_0x79d280");
#endif

    switch (ctx->pc) {
        case 0x79d2a0u: goto label_79d2a0;
        case 0x79d2b0u: goto label_79d2b0;
        case 0x79d380u: goto label_79d380;
        case 0x79d3d8u: goto label_79d3d8;
        default: break;
    }

    ctx->pc = 0x79d280u;

    // 0x79d280: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x79d280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x79d284: 0xffa40040  sd          $a0, 0x40($sp)
    ctx->pc = 0x79d284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 4));
    // 0x79d288: 0xffa50048  sd          $a1, 0x48($sp)
    ctx->pc = 0x79d288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 5));
    // 0x79d28c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x79d28cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x79d290: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x79d290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x79d294: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x79d294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x79d298: 0xc1e730e  jal         func_79CC38
    ctx->pc = 0x79D298u;
    SET_GPR_U32(ctx, 31, 0x79D2A0u);
    ctx->pc = 0x79D29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79D298u;
    // 0x79d29c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79CC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79CC38u, 0x79D298u, 0x79D2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79D2A0u;
label_79d2a0:
    // 0x79d2a0: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x79d2a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x79d2a4: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x79d2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x79d2a8: 0xc1e730e  jal         func_79CC38
    ctx->pc = 0x79D2A8u;
    SET_GPR_U32(ctx, 31, 0x79D2B0u);
    ctx->pc = 0x79D2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79D2A8u;
    // 0x79d2ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79CC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79CC38u, 0x79D2A8u, 0x79D2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79D2B0u;
label_79d2b0:
    // 0x79d2b0: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x79d2b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79d2b4: 0x2ce20002  sltiu       $v0, $a3, 0x2
    ctx->pc = 0x79d2b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x79d2b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79D2B8u;
    {
        const bool branch_taken_0x79d2b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79D2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D2B8u;
        // 0x79d2bc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d2b8) {
            ctx->pc = 0x79D2C8u;
            goto label_79d2c8;
        }
    }
    ctx->pc = 0x79D2C0u;
    // 0x79d2c0: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x79D2C0u;
    {
        const bool branch_taken_0x79d2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79D2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D2C0u;
        // 0x79d2c4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d2c0) {
            ctx->pc = 0x79D3D0u;
            goto label_79d3d0;
        }
    }
    ctx->pc = 0x79D2C8u;
label_79d2c8:
    // 0x79d2c8: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x79d2c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79d2cc: 0x2cc20002  sltiu       $v0, $a2, 0x2
    ctx->pc = 0x79d2ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x79d2d0: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x79D2D0u;
    {
        const bool branch_taken_0x79d2d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79D2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D2D0u;
        // 0x79d2d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d2d0) {
            ctx->pc = 0x79D3D0u;
            goto label_79d3d0;
        }
    }
    ctx->pc = 0x79D2D8u;
    // 0x79d2d8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x79d2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x79d2dc: 0x38e40004  xori        $a0, $a3, 0x4
    ctx->pc = 0x79d2dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)4);
    // 0x79d2e0: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x79d2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x79d2e4: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x79d2e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x79d2e8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79D2E8u;
    {
        const bool branch_taken_0x79d2e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x79D2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D2E8u;
        // 0x79d2ec: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d2e8) {
            ctx->pc = 0x79D2FCu;
            goto label_79d2fc;
        }
    }
    ctx->pc = 0x79D2F0u;
    // 0x79d2f0: 0x38e20002  xori        $v0, $a3, 0x2
    ctx->pc = 0x79d2f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)2);
    // 0x79d2f4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x79D2F4u;
    {
        const bool branch_taken_0x79d2f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79D2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D2F4u;
        // 0x79d2f8: 0x38c20004  xori        $v0, $a2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d2f4) {
            ctx->pc = 0x79D310u;
            goto label_79d310;
        }
    }
    ctx->pc = 0x79D2FCu;
label_79d2fc:
    // 0x79d2fc: 0x14e60034  bne         $a3, $a2, . + 4 + (0x34 << 2)
    ctx->pc = 0x79D2FCu;
    {
        const bool branch_taken_0x79d2fc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        ctx->pc = 0x79D300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D2FCu;
        // 0x79d300: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d2fc) {
            ctx->pc = 0x79D3D0u;
            goto label_79d3d0;
        }
    }
    ctx->pc = 0x79D304u;
    // 0x79d304: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79d304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79d308: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x79D308u;
    {
        const bool branch_taken_0x79d308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79D30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D308u;
        // 0x79d30c: 0x244409f8  addiu       $a0, $v0, 0x9F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d308) {
            ctx->pc = 0x79D3D0u;
            goto label_79d3d0;
        }
    }
    ctx->pc = 0x79D310u;
label_79d310:
    // 0x79d310: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79D310u;
    {
        const bool branch_taken_0x79d310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79D314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D310u;
        // 0x79d314: 0x38c20002  xori        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d310) {
            ctx->pc = 0x79D328u;
            goto label_79d328;
        }
    }
    ctx->pc = 0x79D318u;
    // 0x79d318: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x79d318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x79d31c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79d31cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79d320: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x79D320u;
    {
        const bool branch_taken_0x79d320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79D324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D320u;
        // 0x79d324: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d320) {
            ctx->pc = 0x79D3D0u;
            goto label_79d3d0;
        }
    }
    ctx->pc = 0x79D328u;
label_79d328:
    // 0x79d328: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79D328u;
    {
        const bool branch_taken_0x79d328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79D32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D328u;
        // 0x79d32c: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d328) {
            ctx->pc = 0x79D340u;
            goto label_79d340;
        }
    }
    ctx->pc = 0x79D330u;
    // 0x79d330: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x79d330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x79d334: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79d334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79d338: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x79D338u;
    {
        const bool branch_taken_0x79d338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79D33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D338u;
        // 0x79d33c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d338) {
            ctx->pc = 0x79D3D0u;
            goto label_79d3d0;
        }
    }
    ctx->pc = 0x79D340u;
label_79d340:
    // 0x79d340: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x79d340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x79d344: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x79d344u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79d348: 0xdfa80030  ld          $t0, 0x30($sp)
    ctx->pc = 0x79d348u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79d34c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x79d34cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x79d350: 0x88302b  sltu        $a2, $a0, $t0
    ctx->pc = 0x79d350u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x79d354: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x79D354u;
    {
        const bool branch_taken_0x79d354 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x79D358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D354u;
        // 0x79d358: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d354) {
            ctx->pc = 0x79D36Cu;
            goto label_79d36c;
        }
    }
    ctx->pc = 0x79D35Cu;
    // 0x79d35c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x79d35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x79d360: 0x42078  dsll        $a0, $a0, 1
    ctx->pc = 0x79d360u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
    // 0x79d364: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x79d364u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x79d368: 0x88302b  sltu        $a2, $a0, $t0
    ctx->pc = 0x79d368u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_79d36c:
    // 0x79d36c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x79d36cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x79d370: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x79d370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x79d374: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x79D374u;
    {
        const bool branch_taken_0x79d374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79D378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D374u;
        // 0x79d378: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d374) {
            ctx->pc = 0x79D384u;
            goto label_79d384;
        }
    }
    ctx->pc = 0x79D37Cu;
    // 0x79d37c: 0x0  nop
    ctx->pc = 0x79d37cu;
    // NOP
label_79d380:
    // 0x79d380: 0x88302b  sltu        $a2, $a0, $t0
    ctx->pc = 0x79d380u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_79d384:
    // 0x79d384: 0x54c00004  bnel        $a2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x79D384u;
    {
        const bool branch_taken_0x79d384 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x79d384) {
            ctx->pc = 0x79D388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79D384u;
            // 0x79d388: 0x2107a  dsrl        $v0, $v0, 1 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x79D398u;
            goto label_79d398;
        }
    }
    ctx->pc = 0x79D38Cu;
    // 0x79d38c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x79d38cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x79d390: 0x88202f  dsubu       $a0, $a0, $t0
    ctx->pc = 0x79d390u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 8));
    // 0x79d394: 0x2107a  dsrl        $v0, $v0, 1
    ctx->pc = 0x79d394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
label_79d398:
    // 0x79d398: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x79D398u;
    {
        const bool branch_taken_0x79d398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79D39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D398u;
        // 0x79d39c: 0x42078  dsll        $a0, $a0, 1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d398) {
            ctx->pc = 0x79D380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79d380;
        }
    }
    ctx->pc = 0x79D3A0u;
    // 0x79d3a0: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x79d3a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x79d3a4: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x79d3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x79d3a8: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x79D3A8u;
    {
        const bool branch_taken_0x79d3a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x79d3a8) {
            ctx->pc = 0x79D3ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79D3A8u;
            // 0x79d3ac: 0xfca70010  sd          $a3, 0x10($a1) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79D3CCu;
            goto label_79d3cc;
        }
    }
    ctx->pc = 0x79D3B0u;
    // 0x79d3b0: 0x30e20100  andi        $v0, $a3, 0x100
    ctx->pc = 0x79d3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)256);
    // 0x79d3b4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79D3B4u;
    {
        const bool branch_taken_0x79d3b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79D3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D3B4u;
        // 0x79d3b8: 0x64e20080  daddiu      $v0, $a3, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d3b4) {
            ctx->pc = 0x79D3C4u;
            goto label_79d3c4;
        }
    }
    ctx->pc = 0x79D3BCu;
    // 0x79d3bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x79D3BCu;
    {
        const bool branch_taken_0x79d3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79D3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D3BCu;
        // 0x79d3c0: 0x64e70080  daddiu      $a3, $a3, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d3bc) {
            ctx->pc = 0x79D3C8u;
            goto label_79d3c8;
        }
    }
    ctx->pc = 0x79D3C4u;
label_79d3c4:
    // 0x79d3c4: 0x44380b  movn        $a3, $v0, $a0
    ctx->pc = 0x79d3c4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
label_79d3c8:
    // 0x79d3c8: 0xfca70010  sd          $a3, 0x10($a1)
    ctx->pc = 0x79d3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
label_79d3cc:
    // 0x79d3cc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x79d3ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_79d3d0:
    // 0x79d3d0: 0xc1e72c2  jal         func_79CB08
    ctx->pc = 0x79D3D0u;
    SET_GPR_U32(ctx, 31, 0x79D3D8u);
    ctx->pc = 0x79CB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79CB08u, 0x79D3D0u, 0x79D3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79D3D8u;
label_79d3d8:
    // 0x79d3d8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x79d3d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79d3dc: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x79d3dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79d3e0: 0x3e00008  jr          $ra
    ctx->pc = 0x79D3E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79D3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D3E0u;
        // 0x79d3e4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79D3E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79D3E8u;
}
} // namespace gh_r501
