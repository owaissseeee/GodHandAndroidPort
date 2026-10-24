#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r022_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r022
{
// Function: dpmul
// Address: 0x79c268 - 0x79c510
void dpmul_0x79c268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dpmul_0x79c268");
#endif

    switch (ctx->pc) {
        case 0x79c2a4u: goto label_79c2a4;
        case 0x79c2b4u: goto label_79c2b4;
        case 0x79c380u: goto label_79c380;
        case 0x79c390u: goto label_79c390;
        case 0x79c3a0u: goto label_79c3a0;
        case 0x79c3b0u: goto label_79c3b0;
        case 0x79c428u: goto label_79c428;
        case 0x79c480u: goto label_79c480;
        case 0x79c4e4u: goto label_79c4e4;
        default: break;
    }

    ctx->pc = 0x79c268u;

    // 0x79c268: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x79c268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x79c26c: 0xffa40060  sd          $a0, 0x60($sp)
    ctx->pc = 0x79c26cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 4));
    // 0x79c270: 0xffa50068  sd          $a1, 0x68($sp)
    ctx->pc = 0x79c270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 5));
    // 0x79c274: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x79c274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x79c278: 0xffb700e0  sd          $s7, 0xE0($sp)
    ctx->pc = 0x79c278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 23));
    // 0x79c27c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x79c27cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c280: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x79c280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x79c284: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x79c284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x79c288: 0xffb600d0  sd          $s6, 0xD0($sp)
    ctx->pc = 0x79c288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 22));
    // 0x79c28c: 0xffb500c0  sd          $s5, 0xC0($sp)
    ctx->pc = 0x79c28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 21));
    // 0x79c290: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x79c290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x79c294: 0xffb300a0  sd          $s3, 0xA0($sp)
    ctx->pc = 0x79c294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 19));
    // 0x79c298: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x79c298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x79c29c: 0xc1e6fb2  jal         func_79BEC8
    ctx->pc = 0x79C29Cu;
    SET_GPR_U32(ctx, 31, 0x79C2A4u);
    ctx->pc = 0x79C2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C29Cu;
    // 0x79c2a0: 0xffb10080  sd          $s1, 0x80($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79BEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BEC8u, 0x79C29Cu, 0x79C2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C2A4u;
label_79c2a4:
    // 0x79c2a4: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x79c2a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x79c2a8: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x79c2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x79c2ac: 0xc1e6fb2  jal         func_79BEC8
    ctx->pc = 0x79C2ACu;
    SET_GPR_U32(ctx, 31, 0x79C2B4u);
    ctx->pc = 0x79C2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C2ACu;
    // 0x79c2b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79BEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BEC8u, 0x79C2ACu, 0x79C2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C2B4u;
label_79c2b4:
    // 0x79c2b4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x79c2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79c2b8: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x79c2b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x79c2bc: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x79C2BCu;
    {
        const bool branch_taken_0x79c2bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C2BCu;
        // 0x79c2c0: 0x27b70040  addiu       $s7, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c2bc) {
            ctx->pc = 0x79C318u;
            goto label_79c318;
        }
    }
    ctx->pc = 0x79C2C4u;
    // 0x79c2c4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x79c2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79c2c8: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x79c2c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x79c2cc: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x79C2CCu;
    {
        const bool branch_taken_0x79c2cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79c2cc) {
            ctx->pc = 0x79C2D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79C2CCu;
            // 0x79c2d0: 0x8fa30024  lw          $v1, 0x24($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79C340u;
            goto label_79c340;
        }
    }
    ctx->pc = 0x79C2D4u;
    // 0x79c2d4: 0x38820004  xori        $v0, $a0, 0x4
    ctx->pc = 0x79c2d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)4);
    // 0x79c2d8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x79C2D8u;
    {
        const bool branch_taken_0x79c2d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C2D8u;
        // 0x79c2dc: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c2d8) {
            ctx->pc = 0x79C2F4u;
            goto label_79c2f4;
        }
    }
    ctx->pc = 0x79C2E0u;
    // 0x79c2e0: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x79c2e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x79c2e4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x79C2E4u;
    {
        const bool branch_taken_0x79c2e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C2E4u;
        // 0x79c2e8: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c2e4) {
            ctx->pc = 0x79C304u;
            goto label_79c304;
        }
    }
    ctx->pc = 0x79C2ECu;
    // 0x79c2ec: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x79C2ECu;
    {
        const bool branch_taken_0x79c2ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C2ECu;
        // 0x79c2f0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c2ec) {
            ctx->pc = 0x79C320u;
            goto label_79c320;
        }
    }
    ctx->pc = 0x79C2F4u;
label_79c2f4:
    // 0x79c2f4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x79C2F4u;
    {
        const bool branch_taken_0x79c2f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C2F4u;
        // 0x79c2f8: 0x38820002  xori        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c2f4) {
            ctx->pc = 0x79C310u;
            goto label_79c310;
        }
    }
    ctx->pc = 0x79C2FCu;
    // 0x79c2fc: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x79C2FCu;
    {
        const bool branch_taken_0x79c2fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C2FCu;
        // 0x79c300: 0x8fa30024  lw          $v1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c2fc) {
            ctx->pc = 0x79C340u;
            goto label_79c340;
        }
    }
    ctx->pc = 0x79C304u;
label_79c304:
    // 0x79c304: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79c304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79c308: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x79C308u;
    {
        const bool branch_taken_0x79c308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C308u;
        // 0x79c30c: 0x2444cdb0  addiu       $a0, $v0, -0x3250 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c308) {
            ctx->pc = 0x79C4DCu;
            goto label_79c4dc;
        }
    }
    ctx->pc = 0x79C310u;
label_79c310:
    // 0x79c310: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x79C310u;
    {
        const bool branch_taken_0x79c310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C310u;
        // 0x79c314: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c310) {
            ctx->pc = 0x79C334u;
            goto label_79c334;
        }
    }
    ctx->pc = 0x79C318u;
label_79c318:
    // 0x79c318: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x79c318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x79c31c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79c31cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_79c320:
    // 0x79c320: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x79c320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x79c324: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x79c324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x79c328: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x79c328u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x79c32c: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x79C32Cu;
    {
        const bool branch_taken_0x79c32c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C32Cu;
        // 0x79c330: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c32c) {
            ctx->pc = 0x79C4DCu;
            goto label_79c4dc;
        }
    }
    ctx->pc = 0x79C334u;
label_79c334:
    // 0x79c334: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x79C334u;
    {
        const bool branch_taken_0x79c334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C334u;
        // 0x79c338: 0xdfb30010  ld          $s3, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c334) {
            ctx->pc = 0x79C358u;
            goto label_79c358;
        }
    }
    ctx->pc = 0x79C33Cu;
    // 0x79c33c: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x79c33cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_79c340:
    // 0x79c340: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79c340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c344: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x79c344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x79c348: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x79c348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x79c34c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x79c34cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x79c350: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x79C350u;
    {
        const bool branch_taken_0x79c350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C350u;
        // 0x79c354: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c350) {
            ctx->pc = 0x79C4DCu;
            goto label_79c4dc;
        }
    }
    ctx->pc = 0x79C358u;
label_79c358:
    // 0x79c358: 0x3c16ffff  lui         $s6, 0xFFFF
    ctx->pc = 0x79c358u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65535 << 16));
    // 0x79c35c: 0x16b03e  dsrl32      $s6, $s6, 0
    ctx->pc = 0x79c35cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) >> (32 + 0));
    // 0x79c360: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x79c360u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79c364: 0x2768024  and         $s0, $s3, $s6
    ctx->pc = 0x79c364u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) & GPR_U64(ctx, 22));
    // 0x79c368: 0x256a824  and         $s5, $s2, $s6
    ctx->pc = 0x79c368u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 18) & GPR_U64(ctx, 22));
    // 0x79c36c: 0x13983e  dsrl32      $s3, $s3, 0
    ctx->pc = 0x79c36cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) >> (32 + 0));
    // 0x79c370: 0x12903e  dsrl32      $s2, $s2, 0
    ctx->pc = 0x79c370u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (32 + 0));
    // 0x79c374: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x79c374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c378: 0xc1e72a4  jal         func_79CA90
    ctx->pc = 0x79C378u;
    SET_GPR_U32(ctx, 31, 0x79C380u);
    ctx->pc = 0x79C37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C378u;
    // 0x79c37c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79CA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79CA90u, 0x79C378u, 0x79C380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C380u;
label_79c380:
    // 0x79c380: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x79c380u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c384: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x79c384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c388: 0xc1e72a4  jal         func_79CA90
    ctx->pc = 0x79C388u;
    SET_GPR_U32(ctx, 31, 0x79C390u);
    ctx->pc = 0x79C38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C388u;
    // 0x79c38c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79CA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79CA90u, 0x79C388u, 0x79C390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C390u;
label_79c390:
    // 0x79c390: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x79c390u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c394: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x79c394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c398: 0xc1e72a4  jal         func_79CA90
    ctx->pc = 0x79C398u;
    SET_GPR_U32(ctx, 31, 0x79C3A0u);
    ctx->pc = 0x79C39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C398u;
    // 0x79c39c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79CA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79CA90u, 0x79C398u, 0x79C3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C3A0u;
label_79c3a0:
    // 0x79c3a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x79c3a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c3a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79c3a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c3a8: 0xc1e72a4  jal         func_79CA90
    ctx->pc = 0x79C3A8u;
    SET_GPR_U32(ctx, 31, 0x79C3B0u);
    ctx->pc = 0x79C3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C3A8u;
    // 0x79c3ac: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79CA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79CA90u, 0x79C3A8u, 0x79C3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C3B0u;
label_79c3b0:
    // 0x79c3b0: 0x230802d  daddu       $s0, $s1, $s0
    ctx->pc = 0x79c3b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x79c3b4: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x79c3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x79c3b8: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x79c3b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
    // 0x79c3bc: 0x211882b  sltu        $s1, $s0, $s1
    ctx->pc = 0x79c3bcu;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x79c3c0: 0x284202d  daddu       $a0, $s4, $a0
    ctx->pc = 0x79c3c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 4));
    // 0x79c3c4: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x79c3c4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x79c3c8: 0x8fa70028  lw          $a3, 0x28($sp)
    ctx->pc = 0x79c3c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x79c3cc: 0x2168024  and         $s0, $s0, $s6
    ctx->pc = 0x79c3ccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 22));
    // 0x79c3d0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x79c3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x79c3d4: 0x11883c  dsll32      $s1, $s1, 0
    ctx->pc = 0x79c3d4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 0));
    // 0x79c3d8: 0x8fa60024  lw          $a2, 0x24($sp)
    ctx->pc = 0x79c3d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x79c3dc: 0x94a02b  sltu        $s4, $a0, $s4
    ctx->pc = 0x79c3dcu;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x79c3e0: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x79c3e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x79c3e4: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x79c3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x79c3e8: 0x661826  xor         $v1, $v1, $a2
    ctx->pc = 0x79c3e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 6));
    // 0x79c3ec: 0x2348825  or          $s1, $s1, $s4
    ctx->pc = 0x79c3ecu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 20));
    // 0x79c3f0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x79c3f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x79c3f4: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x79c3f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x79c3f8: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x79c3f8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x79c3fc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x79c3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79c400: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x79c400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x79c404: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x79c404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
    // 0x79c408: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x79c408u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x79c40c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x79C40Cu;
    {
        const bool branch_taken_0x79c40c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C40Cu;
        // 0x79c410: 0xafa50048  sw          $a1, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c40c) {
            ctx->pc = 0x79C454u;
            goto label_79c454;
        }
    }
    ctx->pc = 0x79C414u;
    // 0x79c414: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x79c414u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x79c418: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x79c418u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x79c41c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x79c41cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79c420: 0x318fa  dsrl        $v1, $v1, 3
    ctx->pc = 0x79c420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 3);
    // 0x79c424: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x79c424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_79c428:
    // 0x79c428: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x79c428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x79c42c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x79c42cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x79c430: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79C430u;
    {
        const bool branch_taken_0x79c430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C430u;
        // 0x79c434: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c430) {
            ctx->pc = 0x79C440u;
            goto label_79c440;
        }
    }
    ctx->pc = 0x79C438u;
    // 0x79c438: 0x4207a  dsrl        $a0, $a0, 1
    ctx->pc = 0x79c438u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 1);
    // 0x79c43c: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x79c43cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
label_79c440:
    // 0x79c440: 0x11887a  dsrl        $s1, $s1, 1
    ctx->pc = 0x79c440u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> 1);
    // 0x79c444: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x79c444u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x79c448: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79C448u;
    {
        const bool branch_taken_0x79c448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C448u;
        // 0x79c44c: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c448) {
            ctx->pc = 0x79C428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79c428;
        }
    }
    ctx->pc = 0x79C450u;
    // 0x79c450: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x79c450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
label_79c454:
    // 0x79c454: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x79c454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79c458: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x79c458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x79c45c: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x79c45cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x79c460: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x79C460u;
    {
        const bool branch_taken_0x79c460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C460u;
        // 0x79c464: 0x322300ff  andi        $v1, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c460) {
            ctx->pc = 0x79C4A8u;
            goto label_79c4a8;
        }
    }
    ctx->pc = 0x79C468u;
    // 0x79c468: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x79c468u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x79c46c: 0x34088000  ori         $t0, $zero, 0x8000
    ctx->pc = 0x79c46cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x79c470: 0x8443c  dsll32      $t0, $t0, 16
    ctx->pc = 0x79c470u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 16));
    // 0x79c474: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x79c474u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79c478: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x79c478u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79c47c: 0x6313a  dsrl        $a2, $a2, 4
    ctx->pc = 0x79c47cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 4);
label_79c480:
    // 0x79c480: 0x118878  dsll        $s1, $s1, 1
    ctx->pc = 0x79c480u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << 1);
    // 0x79c484: 0x881824  and         $v1, $a0, $t0
    ctx->pc = 0x79c484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 8));
    // 0x79c488: 0x2271025  or          $v0, $s1, $a3
    ctx->pc = 0x79c488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 7));
    // 0x79c48c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x79c48cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x79c490: 0x43880b  movn        $s1, $v0, $v1
    ctx->pc = 0x79c490u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x79c494: 0xd1102b  sltu        $v0, $a2, $s1
    ctx->pc = 0x79c494u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x79c498: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x79C498u;
    {
        const bool branch_taken_0x79c498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C498u;
        // 0x79c49c: 0x42078  dsll        $a0, $a0, 1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c498) {
            ctx->pc = 0x79C480u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79c480;
        }
    }
    ctx->pc = 0x79C4A0u;
    // 0x79c4a0: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x79c4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
    // 0x79c4a4: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x79c4a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_79c4a8:
    // 0x79c4a8: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x79c4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x79c4ac: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x79C4ACu;
    {
        const bool branch_taken_0x79c4ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x79c4ac) {
            ctx->pc = 0x79C4B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79C4ACu;
            // 0x79c4b0: 0xffb10050  sd          $s1, 0x50($sp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79C4D0u;
            goto label_79c4d0;
        }
    }
    ctx->pc = 0x79C4B4u;
    // 0x79c4b4: 0x32220100  andi        $v0, $s1, 0x100
    ctx->pc = 0x79c4b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)256);
    // 0x79c4b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79C4B8u;
    {
        const bool branch_taken_0x79c4b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C4B8u;
        // 0x79c4bc: 0x66220080  daddiu      $v0, $s1, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c4b8) {
            ctx->pc = 0x79C4C8u;
            goto label_79c4c8;
        }
    }
    ctx->pc = 0x79C4C0u;
    // 0x79c4c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x79C4C0u;
    {
        const bool branch_taken_0x79c4c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C4C0u;
        // 0x79c4c4: 0x66310080  daddiu      $s1, $s1, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c4c0) {
            ctx->pc = 0x79C4CCu;
            goto label_79c4cc;
        }
    }
    ctx->pc = 0x79C4C8u;
label_79c4c8:
    // 0x79c4c8: 0x44880b  movn        $s1, $v0, $a0
    ctx->pc = 0x79c4c8u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
label_79c4cc:
    // 0x79c4cc: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x79c4ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
label_79c4d0:
    // 0x79c4d0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x79c4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79c4d4: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x79c4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x79c4d8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x79c4d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_79c4dc:
    // 0x79c4dc: 0xc1e6f66  jal         func_79BD98
    ctx->pc = 0x79C4DCu;
    SET_GPR_U32(ctx, 31, 0x79C4E4u);
    ctx->pc = 0x79BD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BD98u, 0x79C4DCu, 0x79C4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C4E4u;
label_79c4e4:
    // 0x79c4e4: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x79c4e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x79c4e8: 0xdfb700e0  ld          $s7, 0xE0($sp)
    ctx->pc = 0x79c4e8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x79c4ec: 0xdfb600d0  ld          $s6, 0xD0($sp)
    ctx->pc = 0x79c4ecu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x79c4f0: 0xdfb500c0  ld          $s5, 0xC0($sp)
    ctx->pc = 0x79c4f0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x79c4f4: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x79c4f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x79c4f8: 0xdfb300a0  ld          $s3, 0xA0($sp)
    ctx->pc = 0x79c4f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x79c4fc: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x79c4fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x79c500: 0xdfb10080  ld          $s1, 0x80($sp)
    ctx->pc = 0x79c500u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x79c504: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x79c504u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x79c508: 0x3e00008  jr          $ra
    ctx->pc = 0x79C508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79C50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C508u;
        // 0x79c50c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C510u;
}
} // namespace gh_r022
