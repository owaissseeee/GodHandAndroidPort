#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r505_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r505
{
// Function: dpmul
// Address: 0x79b668 - 0x79b910
void dpmul_0x79b668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dpmul_0x79b668");
#endif

    switch (ctx->pc) {
        case 0x79b6a4u: goto label_79b6a4;
        case 0x79b6b4u: goto label_79b6b4;
        case 0x79b780u: goto label_79b780;
        case 0x79b790u: goto label_79b790;
        case 0x79b7a0u: goto label_79b7a0;
        case 0x79b7b0u: goto label_79b7b0;
        case 0x79b828u: goto label_79b828;
        case 0x79b880u: goto label_79b880;
        case 0x79b8e4u: goto label_79b8e4;
        default: break;
    }

    ctx->pc = 0x79b668u;

    // 0x79b668: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x79b668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x79b66c: 0xffa40060  sd          $a0, 0x60($sp)
    ctx->pc = 0x79b66cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 4));
    // 0x79b670: 0xffa50068  sd          $a1, 0x68($sp)
    ctx->pc = 0x79b670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 5));
    // 0x79b674: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x79b674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x79b678: 0xffb700e0  sd          $s7, 0xE0($sp)
    ctx->pc = 0x79b678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 23));
    // 0x79b67c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x79b67cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b680: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x79b680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x79b684: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x79b684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x79b688: 0xffb600d0  sd          $s6, 0xD0($sp)
    ctx->pc = 0x79b688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 22));
    // 0x79b68c: 0xffb500c0  sd          $s5, 0xC0($sp)
    ctx->pc = 0x79b68cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 21));
    // 0x79b690: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x79b690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x79b694: 0xffb300a0  sd          $s3, 0xA0($sp)
    ctx->pc = 0x79b694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 19));
    // 0x79b698: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x79b698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x79b69c: 0xc1e6cb2  jal         func_79B2C8
    ctx->pc = 0x79B69Cu;
    SET_GPR_U32(ctx, 31, 0x79B6A4u);
    ctx->pc = 0x79B6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B69Cu;
    // 0x79b6a0: 0xffb10080  sd          $s1, 0x80($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B2C8u, 0x79B69Cu, 0x79B6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B6A4u;
label_79b6a4:
    // 0x79b6a4: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x79b6a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x79b6a8: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x79b6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x79b6ac: 0xc1e6cb2  jal         func_79B2C8
    ctx->pc = 0x79B6ACu;
    SET_GPR_U32(ctx, 31, 0x79B6B4u);
    ctx->pc = 0x79B6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B6ACu;
    // 0x79b6b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B2C8u, 0x79B6ACu, 0x79B6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B6B4u;
label_79b6b4:
    // 0x79b6b4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x79b6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79b6b8: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x79b6b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x79b6bc: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x79B6BCu;
    {
        const bool branch_taken_0x79b6bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B6BCu;
        // 0x79b6c0: 0x27b70040  addiu       $s7, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b6bc) {
            ctx->pc = 0x79B718u;
            goto label_79b718;
        }
    }
    ctx->pc = 0x79B6C4u;
    // 0x79b6c4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x79b6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79b6c8: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x79b6c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x79b6cc: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x79B6CCu;
    {
        const bool branch_taken_0x79b6cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79b6cc) {
            ctx->pc = 0x79B6D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B6CCu;
            // 0x79b6d0: 0x8fa30024  lw          $v1, 0x24($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B740u;
            goto label_79b740;
        }
    }
    ctx->pc = 0x79B6D4u;
    // 0x79b6d4: 0x38820004  xori        $v0, $a0, 0x4
    ctx->pc = 0x79b6d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)4);
    // 0x79b6d8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x79B6D8u;
    {
        const bool branch_taken_0x79b6d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B6D8u;
        // 0x79b6dc: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b6d8) {
            ctx->pc = 0x79B6F4u;
            goto label_79b6f4;
        }
    }
    ctx->pc = 0x79B6E0u;
    // 0x79b6e0: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x79b6e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x79b6e4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x79B6E4u;
    {
        const bool branch_taken_0x79b6e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B6E4u;
        // 0x79b6e8: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b6e4) {
            ctx->pc = 0x79B704u;
            goto label_79b704;
        }
    }
    ctx->pc = 0x79B6ECu;
    // 0x79b6ec: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x79B6ECu;
    {
        const bool branch_taken_0x79b6ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B6ECu;
        // 0x79b6f0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b6ec) {
            ctx->pc = 0x79B720u;
            goto label_79b720;
        }
    }
    ctx->pc = 0x79B6F4u;
label_79b6f4:
    // 0x79b6f4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x79B6F4u;
    {
        const bool branch_taken_0x79b6f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B6F4u;
        // 0x79b6f8: 0x38820002  xori        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b6f4) {
            ctx->pc = 0x79B710u;
            goto label_79b710;
        }
    }
    ctx->pc = 0x79B6FCu;
    // 0x79b6fc: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x79B6FCu;
    {
        const bool branch_taken_0x79b6fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B6FCu;
        // 0x79b700: 0x8fa30024  lw          $v1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b6fc) {
            ctx->pc = 0x79B740u;
            goto label_79b740;
        }
    }
    ctx->pc = 0x79B704u;
label_79b704:
    // 0x79b704: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79b704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79b708: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x79B708u;
    {
        const bool branch_taken_0x79b708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B708u;
        // 0x79b70c: 0x2444c298  addiu       $a0, $v0, -0x3D68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b708) {
            ctx->pc = 0x79B8DCu;
            goto label_79b8dc;
        }
    }
    ctx->pc = 0x79B710u;
label_79b710:
    // 0x79b710: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x79B710u;
    {
        const bool branch_taken_0x79b710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B710u;
        // 0x79b714: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b710) {
            ctx->pc = 0x79B734u;
            goto label_79b734;
        }
    }
    ctx->pc = 0x79B718u;
label_79b718:
    // 0x79b718: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x79b718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x79b71c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79b71cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_79b720:
    // 0x79b720: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x79b720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x79b724: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x79b724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x79b728: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x79b728u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x79b72c: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x79B72Cu;
    {
        const bool branch_taken_0x79b72c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B72Cu;
        // 0x79b730: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b72c) {
            ctx->pc = 0x79B8DCu;
            goto label_79b8dc;
        }
    }
    ctx->pc = 0x79B734u;
label_79b734:
    // 0x79b734: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x79B734u;
    {
        const bool branch_taken_0x79b734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B734u;
        // 0x79b738: 0xdfb30010  ld          $s3, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b734) {
            ctx->pc = 0x79B758u;
            goto label_79b758;
        }
    }
    ctx->pc = 0x79B73Cu;
    // 0x79b73c: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x79b73cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_79b740:
    // 0x79b740: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79b740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b744: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x79b744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x79b748: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x79b748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x79b74c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x79b74cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x79b750: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x79B750u;
    {
        const bool branch_taken_0x79b750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B750u;
        // 0x79b754: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b750) {
            ctx->pc = 0x79B8DCu;
            goto label_79b8dc;
        }
    }
    ctx->pc = 0x79B758u;
label_79b758:
    // 0x79b758: 0x3c16ffff  lui         $s6, 0xFFFF
    ctx->pc = 0x79b758u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65535 << 16));
    // 0x79b75c: 0x16b03e  dsrl32      $s6, $s6, 0
    ctx->pc = 0x79b75cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) >> (32 + 0));
    // 0x79b760: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x79b760u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79b764: 0x2768024  and         $s0, $s3, $s6
    ctx->pc = 0x79b764u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) & GPR_U64(ctx, 22));
    // 0x79b768: 0x256a824  and         $s5, $s2, $s6
    ctx->pc = 0x79b768u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 18) & GPR_U64(ctx, 22));
    // 0x79b76c: 0x13983e  dsrl32      $s3, $s3, 0
    ctx->pc = 0x79b76cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) >> (32 + 0));
    // 0x79b770: 0x12903e  dsrl32      $s2, $s2, 0
    ctx->pc = 0x79b770u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (32 + 0));
    // 0x79b774: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x79b774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b778: 0xc1e6fa4  jal         func_79BE90
    ctx->pc = 0x79B778u;
    SET_GPR_U32(ctx, 31, 0x79B780u);
    ctx->pc = 0x79B77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B778u;
    // 0x79b77c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79BE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BE90u, 0x79B778u, 0x79B780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B780u;
label_79b780:
    // 0x79b780: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x79b780u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b784: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x79b784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b788: 0xc1e6fa4  jal         func_79BE90
    ctx->pc = 0x79B788u;
    SET_GPR_U32(ctx, 31, 0x79B790u);
    ctx->pc = 0x79B78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B788u;
    // 0x79b78c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79BE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BE90u, 0x79B788u, 0x79B790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B790u;
label_79b790:
    // 0x79b790: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x79b790u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b794: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x79b794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b798: 0xc1e6fa4  jal         func_79BE90
    ctx->pc = 0x79B798u;
    SET_GPR_U32(ctx, 31, 0x79B7A0u);
    ctx->pc = 0x79B79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B798u;
    // 0x79b79c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79BE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BE90u, 0x79B798u, 0x79B7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B7A0u;
label_79b7a0:
    // 0x79b7a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x79b7a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b7a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79b7a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b7a8: 0xc1e6fa4  jal         func_79BE90
    ctx->pc = 0x79B7A8u;
    SET_GPR_U32(ctx, 31, 0x79B7B0u);
    ctx->pc = 0x79B7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B7A8u;
    // 0x79b7ac: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79BE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BE90u, 0x79B7A8u, 0x79B7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B7B0u;
label_79b7b0:
    // 0x79b7b0: 0x230802d  daddu       $s0, $s1, $s0
    ctx->pc = 0x79b7b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x79b7b4: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x79b7b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x79b7b8: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x79b7b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
    // 0x79b7bc: 0x211882b  sltu        $s1, $s0, $s1
    ctx->pc = 0x79b7bcu;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x79b7c0: 0x284202d  daddu       $a0, $s4, $a0
    ctx->pc = 0x79b7c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 4));
    // 0x79b7c4: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x79b7c4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x79b7c8: 0x8fa70028  lw          $a3, 0x28($sp)
    ctx->pc = 0x79b7c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x79b7cc: 0x2168024  and         $s0, $s0, $s6
    ctx->pc = 0x79b7ccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 22));
    // 0x79b7d0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x79b7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x79b7d4: 0x11883c  dsll32      $s1, $s1, 0
    ctx->pc = 0x79b7d4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 0));
    // 0x79b7d8: 0x8fa60024  lw          $a2, 0x24($sp)
    ctx->pc = 0x79b7d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x79b7dc: 0x94a02b  sltu        $s4, $a0, $s4
    ctx->pc = 0x79b7dcu;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x79b7e0: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x79b7e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x79b7e4: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x79b7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x79b7e8: 0x661826  xor         $v1, $v1, $a2
    ctx->pc = 0x79b7e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 6));
    // 0x79b7ec: 0x2348825  or          $s1, $s1, $s4
    ctx->pc = 0x79b7ecu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 20));
    // 0x79b7f0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x79b7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x79b7f4: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x79b7f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x79b7f8: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x79b7f8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x79b7fc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x79b7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79b800: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x79b800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x79b804: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x79b804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
    // 0x79b808: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x79b808u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x79b80c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x79B80Cu;
    {
        const bool branch_taken_0x79b80c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B80Cu;
        // 0x79b810: 0xafa50048  sw          $a1, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b80c) {
            ctx->pc = 0x79B854u;
            goto label_79b854;
        }
    }
    ctx->pc = 0x79B814u;
    // 0x79b814: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x79b814u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x79b818: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x79b818u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x79b81c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x79b81cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79b820: 0x318fa  dsrl        $v1, $v1, 3
    ctx->pc = 0x79b820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 3);
    // 0x79b824: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x79b824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_79b828:
    // 0x79b828: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x79b828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x79b82c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x79b82cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x79b830: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79B830u;
    {
        const bool branch_taken_0x79b830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B830u;
        // 0x79b834: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b830) {
            ctx->pc = 0x79B840u;
            goto label_79b840;
        }
    }
    ctx->pc = 0x79B838u;
    // 0x79b838: 0x4207a  dsrl        $a0, $a0, 1
    ctx->pc = 0x79b838u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 1);
    // 0x79b83c: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x79b83cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
label_79b840:
    // 0x79b840: 0x11887a  dsrl        $s1, $s1, 1
    ctx->pc = 0x79b840u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> 1);
    // 0x79b844: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x79b844u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x79b848: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79B848u;
    {
        const bool branch_taken_0x79b848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B848u;
        // 0x79b84c: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b848) {
            ctx->pc = 0x79B828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b828;
        }
    }
    ctx->pc = 0x79B850u;
    // 0x79b850: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x79b850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
label_79b854:
    // 0x79b854: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x79b854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79b858: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x79b858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x79b85c: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x79b85cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x79b860: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x79B860u;
    {
        const bool branch_taken_0x79b860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B860u;
        // 0x79b864: 0x322300ff  andi        $v1, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b860) {
            ctx->pc = 0x79B8A8u;
            goto label_79b8a8;
        }
    }
    ctx->pc = 0x79B868u;
    // 0x79b868: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x79b868u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x79b86c: 0x34088000  ori         $t0, $zero, 0x8000
    ctx->pc = 0x79b86cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x79b870: 0x8443c  dsll32      $t0, $t0, 16
    ctx->pc = 0x79b870u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 16));
    // 0x79b874: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x79b874u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b878: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x79b878u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79b87c: 0x6313a  dsrl        $a2, $a2, 4
    ctx->pc = 0x79b87cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 4);
label_79b880:
    // 0x79b880: 0x118878  dsll        $s1, $s1, 1
    ctx->pc = 0x79b880u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << 1);
    // 0x79b884: 0x881824  and         $v1, $a0, $t0
    ctx->pc = 0x79b884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 8));
    // 0x79b888: 0x2271025  or          $v0, $s1, $a3
    ctx->pc = 0x79b888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 7));
    // 0x79b88c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x79b88cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x79b890: 0x43880b  movn        $s1, $v0, $v1
    ctx->pc = 0x79b890u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x79b894: 0xd1102b  sltu        $v0, $a2, $s1
    ctx->pc = 0x79b894u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x79b898: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x79B898u;
    {
        const bool branch_taken_0x79b898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B898u;
        // 0x79b89c: 0x42078  dsll        $a0, $a0, 1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b898) {
            ctx->pc = 0x79B880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b880;
        }
    }
    ctx->pc = 0x79B8A0u;
    // 0x79b8a0: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x79b8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
    // 0x79b8a4: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x79b8a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_79b8a8:
    // 0x79b8a8: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x79b8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x79b8ac: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x79B8ACu;
    {
        const bool branch_taken_0x79b8ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x79b8ac) {
            ctx->pc = 0x79B8B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B8ACu;
            // 0x79b8b0: 0xffb10050  sd          $s1, 0x50($sp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B8D0u;
            goto label_79b8d0;
        }
    }
    ctx->pc = 0x79B8B4u;
    // 0x79b8b4: 0x32220100  andi        $v0, $s1, 0x100
    ctx->pc = 0x79b8b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)256);
    // 0x79b8b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79B8B8u;
    {
        const bool branch_taken_0x79b8b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B8B8u;
        // 0x79b8bc: 0x66220080  daddiu      $v0, $s1, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b8b8) {
            ctx->pc = 0x79B8C8u;
            goto label_79b8c8;
        }
    }
    ctx->pc = 0x79B8C0u;
    // 0x79b8c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x79B8C0u;
    {
        const bool branch_taken_0x79b8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B8C0u;
        // 0x79b8c4: 0x66310080  daddiu      $s1, $s1, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b8c0) {
            ctx->pc = 0x79B8CCu;
            goto label_79b8cc;
        }
    }
    ctx->pc = 0x79B8C8u;
label_79b8c8:
    // 0x79b8c8: 0x44880b  movn        $s1, $v0, $a0
    ctx->pc = 0x79b8c8u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
label_79b8cc:
    // 0x79b8cc: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x79b8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
label_79b8d0:
    // 0x79b8d0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x79b8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79b8d4: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x79b8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x79b8d8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x79b8d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_79b8dc:
    // 0x79b8dc: 0xc1e6c66  jal         func_79B198
    ctx->pc = 0x79B8DCu;
    SET_GPR_U32(ctx, 31, 0x79B8E4u);
    ctx->pc = 0x79B198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B198u, 0x79B8DCu, 0x79B8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B8E4u;
label_79b8e4:
    // 0x79b8e4: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x79b8e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x79b8e8: 0xdfb700e0  ld          $s7, 0xE0($sp)
    ctx->pc = 0x79b8e8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x79b8ec: 0xdfb600d0  ld          $s6, 0xD0($sp)
    ctx->pc = 0x79b8ecu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x79b8f0: 0xdfb500c0  ld          $s5, 0xC0($sp)
    ctx->pc = 0x79b8f0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x79b8f4: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x79b8f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x79b8f8: 0xdfb300a0  ld          $s3, 0xA0($sp)
    ctx->pc = 0x79b8f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x79b8fc: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x79b8fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x79b900: 0xdfb10080  ld          $s1, 0x80($sp)
    ctx->pc = 0x79b900u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x79b904: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x79b904u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x79b908: 0x3e00008  jr          $ra
    ctx->pc = 0x79B908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B908u;
        // 0x79b90c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B910u;
}
} // namespace gh_r505
