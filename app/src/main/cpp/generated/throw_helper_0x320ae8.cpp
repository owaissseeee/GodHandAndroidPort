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

// Function: throw_helper
// Address: 0x320ae8 - 0x320e18
void throw_helper_0x320ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("throw_helper_0x320ae8");
#endif

    switch (ctx->pc) {
        case 0x320b50u: goto label_320b50;
        case 0x320b94u: goto label_320b94;
        case 0x320bbcu: goto label_320bbc;
        case 0x320bd0u: goto label_320bd0;
        case 0x320bf8u: goto label_320bf8;
        case 0x320c70u: goto label_320c70;
        case 0x320c94u: goto label_320c94;
        case 0x320cc4u: goto label_320cc4;
        case 0x320cd4u: goto label_320cd4;
        case 0x320cfcu: goto label_320cfc;
        case 0x320d50u: goto label_320d50;
        case 0x320d60u: goto label_320d60;
        case 0x320d78u: goto label_320d78;
        case 0x320d98u: goto label_320d98;
        case 0x320db4u: goto label_320db4;
        default: break;
    }

    ctx->pc = 0x320ae8u;

    // 0x320ae8: 0x27bdf960  addiu       $sp, $sp, -0x6A0
    ctx->pc = 0x320ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965600));
    // 0x320aec: 0xffbe0680  sd          $fp, 0x680($sp)
    ctx->pc = 0x320aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1664), GPR_U64(ctx, 30));
    // 0x320af0: 0xffb60660  sd          $s6, 0x660($sp)
    ctx->pc = 0x320af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1632), GPR_U64(ctx, 22));
    // 0x320af4: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x320af4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320af8: 0xffb50650  sd          $s5, 0x650($sp)
    ctx->pc = 0x320af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1616), GPR_U64(ctx, 21));
    // 0x320afc: 0xffb40640  sd          $s4, 0x640($sp)
    ctx->pc = 0x320afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1600), GPR_U64(ctx, 20));
    // 0x320b00: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x320b00u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320b04: 0xffb30630  sd          $s3, 0x630($sp)
    ctx->pc = 0x320b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1584), GPR_U64(ctx, 19));
    // 0x320b08: 0x3a0a02d  daddu       $s4, $sp, $zero
    ctx->pc = 0x320b08u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320b0c: 0xffb00600  sd          $s0, 0x600($sp)
    ctx->pc = 0x320b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1536), GPR_U64(ctx, 16));
    // 0x320b10: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x320b10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320b14: 0xffbf0690  sd          $ra, 0x690($sp)
    ctx->pc = 0x320b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1680), GPR_U64(ctx, 31));
    // 0x320b18: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x320b18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320b1c: 0xffb70670  sd          $s7, 0x670($sp)
    ctx->pc = 0x320b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1648), GPR_U64(ctx, 23));
    // 0x320b20: 0xffb20620  sd          $s2, 0x620($sp)
    ctx->pc = 0x320b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1568), GPR_U64(ctx, 18));
    // 0x320b24: 0xffb10610  sd          $s1, 0x610($sp)
    ctx->pc = 0x320b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1552), GPR_U64(ctx, 17));
    // 0x320b28: 0xafa705e4  sw          $a3, 0x5E4($sp)
    ctx->pc = 0x320b28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1508), GPR_U32(ctx, 7));
    // 0x320b2c: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x320b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x320b30: 0x8e770008  lw          $s7, 0x8($s3)
    ctx->pc = 0x320b30u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x320b34: 0xafb005e8  sw          $s0, 0x5E8($sp)
    ctx->pc = 0x320b34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1512), GPR_U32(ctx, 16));
    // 0x320b38: 0x2b02b  sltu        $s6, $zero, $v0
    ctx->pc = 0x320b38u;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x320b3c: 0x8cf10000  lw          $s1, 0x0($a3)
    ctx->pc = 0x320b3cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x320b40: 0xafa005f4  sw          $zero, 0x5F4($sp)
    ctx->pc = 0x320b40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1524), GPR_U32(ctx, 0));
    // 0x320b44: 0xafa005f8  sw          $zero, 0x5F8($sp)
    ctx->pc = 0x320b44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1528), GPR_U32(ctx, 0));
    // 0x320b48: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x320B48u;
    {
        const bool branch_taken_0x320b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320B48u;
        // 0x320b4c: 0xafa005e0  sw          $zero, 0x5E0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1504), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320b48) {
            ctx->pc = 0x320C80u;
            goto label_320c80;
        }
    }
    ctx->pc = 0x320B50u;
label_320b50:
    // 0x320b50: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x320b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x320b54: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x320B54u;
    {
        const bool branch_taken_0x320b54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x320b54) {
            ctx->pc = 0x320B58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x320B54u;
            // 0x320b58: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x320B64u;
            goto label_320b64;
        }
    }
    ctx->pc = 0x320B5Cu;
    // 0x320b5c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x320B5Cu;
    {
        const bool branch_taken_0x320b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320B5Cu;
        // 0x320b60: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320b5c) {
            ctx->pc = 0x320B74u;
            goto label_320b74;
        }
    }
    ctx->pc = 0x320B64u;
label_320b64:
    // 0x320b64: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x320b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x320b68: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x320b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x320b6c: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x320b6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x320b70: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x320b70u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_320b74:
    // 0x320b74: 0x12c0000a  beqz        $s6, . + 4 + (0xA << 2)
    ctx->pc = 0x320B74u;
    {
        const bool branch_taken_0x320b74 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x320B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320B74u;
        // 0x320b78: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320b74) {
            ctx->pc = 0x320BA0u;
            goto label_320ba0;
        }
    }
    ctx->pc = 0x320B7Cu;
    // 0x320b7c: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x320b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x320b80: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x320b80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x320b84: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x320b84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x320b88: 0x27a805e0  addiu       $t0, $sp, 0x5E0
    ctx->pc = 0x320b88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1504));
    // 0x320b8c: 0xc0c8200  jal         func_320800
    ctx->pc = 0x320B8Cu;
    SET_GPR_U32(ctx, 31, 0x320B94u);
    ctx->pc = 0x320B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320B8Cu;
    // 0x320b90: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320800u, 0x320B8Cu, 0x320B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320B94u;
label_320b94:
    // 0x320b94: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x320b94u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320b98: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x320B98u;
    {
        const bool branch_taken_0x320b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320B98u;
        // 0x320b9c: 0xae60000c  sw          $zero, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320b98) {
            ctx->pc = 0x320BD4u;
            goto label_320bd4;
        }
    }
    ctx->pc = 0x320BA0u;
label_320ba0:
    // 0x320ba0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x320BA0u;
    {
        const bool branch_taken_0x320ba0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x320BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320BA0u;
        // 0x320ba4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320ba0) {
            ctx->pc = 0x320BC4u;
            goto label_320bc4;
        }
    }
    ctx->pc = 0x320BA8u;
    // 0x320ba8: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x320ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x320bac: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x320bacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320bb0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x320bb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320bb4: 0xc0c8200  jal         func_320800
    ctx->pc = 0x320BB4u;
    SET_GPR_U32(ctx, 31, 0x320BBCu);
    ctx->pc = 0x320BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320BB4u;
    // 0x320bb8: 0x27a805e0  addiu       $t0, $sp, 0x5E0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320800u, 0x320BB4u, 0x320BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320BBCu;
label_320bbc:
    // 0x320bbc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x320BBCu;
    {
        const bool branch_taken_0x320bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320BBCu;
        // 0x320bc0: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320bbc) {
            ctx->pc = 0x320BD4u;
            goto label_320bd4;
        }
    }
    ctx->pc = 0x320BC4u;
label_320bc4:
    // 0x320bc4: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x320bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x320bc8: 0xc0c81ca  jal         func_320728
    ctx->pc = 0x320BC8u;
    SET_GPR_U32(ctx, 31, 0x320BD0u);
    ctx->pc = 0x320BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320BC8u;
    // 0x320bcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320728u, 0x320BC8u, 0x320BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320BD0u;
label_320bd0:
    // 0x320bd0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x320bd0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_320bd4:
    // 0x320bd4: 0x12a00022  beqz        $s5, . + 4 + (0x22 << 2)
    ctx->pc = 0x320BD4u;
    {
        const bool branch_taken_0x320bd4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x320BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320BD4u;
        // 0x320bd8: 0x8fa205e0  lw          $v0, 0x5E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320bd4) {
            ctx->pc = 0x320C60u;
            goto label_320c60;
        }
    }
    ctx->pc = 0x320BDCu;
    // 0x320bdc: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x320BDCu;
    {
        const bool branch_taken_0x320bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x320BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320BDCu;
        // 0x320be0: 0x8fa205f8  lw          $v0, 0x5F8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320bdc) {
            ctx->pc = 0x320C58u;
            goto label_320c58;
        }
    }
    ctx->pc = 0x320BE4u;
    // 0x320be4: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x320BE4u;
    {
        const bool branch_taken_0x320be4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x320be4) {
            ctx->pc = 0x320BE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x320BE4u;
            // 0x320be8: 0x9624029a  lhu         $a0, 0x29A($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 666)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x320C64u;
            goto label_320c64;
        }
    }
    ctx->pc = 0x320BECu;
    // 0x320bec: 0x27a302f0  addiu       $v1, $sp, 0x2F0
    ctx->pc = 0x320becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
    // 0x320bf0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x320bf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320bf4: 0x262402e0  addiu       $a0, $s1, 0x2E0
    ctx->pc = 0x320bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 736));
label_320bf8:
    // 0x320bf8: 0xdc450000  ld          $a1, 0x0($v0)
    ctx->pc = 0x320bf8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x320bfc: 0xdc460008  ld          $a2, 0x8($v0)
    ctx->pc = 0x320bfcu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x320c00: 0xdc470010  ld          $a3, 0x10($v0)
    ctx->pc = 0x320c00u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x320c04: 0xdc480018  ld          $t0, 0x18($v0)
    ctx->pc = 0x320c04u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x320c08: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x320c08u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
    // 0x320c0c: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x320c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x320c10: 0xfc670010  sd          $a3, 0x10($v1)
    ctx->pc = 0x320c10u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 7));
    // 0x320c14: 0xfc680018  sd          $t0, 0x18($v1)
    ctx->pc = 0x320c14u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 8));
    // 0x320c18: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x320c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x320c1c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x320c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x320c20: 0x0  nop
    ctx->pc = 0x320c20u;
    // NOP
    // 0x320c24: 0x1444fff4  bne         $v0, $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x320C24u;
    {
        const bool branch_taken_0x320c24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x320c24) {
            ctx->pc = 0x320BF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_320bf8;
        }
    }
    ctx->pc = 0x320C2Cu;
    // 0x320c2c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x320c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x320c30: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x320c30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x320c34: 0xafb005f0  sw          $s0, 0x5F0($sp)
    ctx->pc = 0x320c34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1520), GPR_U32(ctx, 16));
    // 0x320c38: 0xafb505ec  sw          $s5, 0x5EC($sp)
    ctx->pc = 0x320c38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1516), GPR_U32(ctx, 21));
    // 0x320c3c: 0xafa405f8  sw          $a0, 0x5F8($sp)
    ctx->pc = 0x320c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1528), GPR_U32(ctx, 4));
    // 0x320c40: 0xafa505f4  sw          $a1, 0x5F4($sp)
    ctx->pc = 0x320c40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1524), GPR_U32(ctx, 5));
    // 0x320c44: 0xdc460000  ld          $a2, 0x0($v0)
    ctx->pc = 0x320c44u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x320c48: 0xdc470008  ld          $a3, 0x8($v0)
    ctx->pc = 0x320c48u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x320c4c: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x320c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
    // 0x320c50: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x320C50u;
    {
        const bool branch_taken_0x320c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320C50u;
        // 0x320c54: 0xfc670008  sd          $a3, 0x8($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320c50) {
            ctx->pc = 0x320C60u;
            goto label_320c60;
        }
    }
    ctx->pc = 0x320C58u;
label_320c58:
    // 0x320c58: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x320C58u;
    {
        const bool branch_taken_0x320c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320C58u;
        // 0x320c5c: 0xafa005f4  sw          $zero, 0x5F4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1524), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320c58) {
            ctx->pc = 0x320CA0u;
            goto label_320ca0;
        }
    }
    ctx->pc = 0x320C60u;
label_320c60:
    // 0x320c60: 0x9624029a  lhu         $a0, 0x29A($s1)
    ctx->pc = 0x320c60u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 666)));
label_320c64:
    // 0x320c64: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x320c64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320c68: 0xc0c8252  jal         func_320948
    ctx->pc = 0x320C68u;
    SET_GPR_U32(ctx, 31, 0x320C70u);
    ctx->pc = 0x320C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320C68u;
    // 0x320c6c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320948u, 0x320C68u, 0x320C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320C70u;
label_320c70:
    // 0x320c70: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x320c70u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x320c74: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x320c74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x320c78: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x320c78u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x320c7c: 0x2470ffff  addiu       $s0, $v1, -0x1
    ctx->pc = 0x320c7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_320c80:
    // 0x320c80: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x320c80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320c84: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x320c84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320c88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x320c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320c8c: 0xc0c8294  jal         func_320A50
    ctx->pc = 0x320C8Cu;
    SET_GPR_U32(ctx, 31, 0x320C94u);
    ctx->pc = 0x320C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320C8Cu;
    // 0x320c90: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320A50u, 0x320C8Cu, 0x320C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320C94u;
label_320c94:
    // 0x320c94: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x320c94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320c98: 0x1620ffad  bnez        $s1, . + 4 + (-0x53 << 2)
    ctx->pc = 0x320C98u;
    {
        const bool branch_taken_0x320c98 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x320C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320C98u;
        // 0x320c9c: 0x240a02d  daddu       $s4, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320c98) {
            ctx->pc = 0x320B50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_320b50;
        }
    }
    ctx->pc = 0x320CA0u;
label_320ca0:
    // 0x320ca0: 0x8fa505f8  lw          $a1, 0x5F8($sp)
    ctx->pc = 0x320ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1528)));
    // 0x320ca4: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x320CA4u;
    {
        const bool branch_taken_0x320ca4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x320CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320CA4u;
        // 0x320ca8: 0x8fa605f4  lw          $a2, 0x5F4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320ca4) {
            ctx->pc = 0x320CC4u;
            goto label_320cc4;
        }
    }
    ctx->pc = 0x320CACu;
    // 0x320cac: 0x27b102f0  addiu       $s1, $sp, 0x2F0
    ctx->pc = 0x320cacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
    // 0x320cb0: 0x8fb505ec  lw          $s5, 0x5EC($sp)
    ctx->pc = 0x320cb0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1516)));
    // 0x320cb4: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x320CB4u;
    {
        const bool branch_taken_0x320cb4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x320CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320CB4u;
        // 0x320cb8: 0x8fb005f0  lw          $s0, 0x5F0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320cb4) {
            ctx->pc = 0x320CC4u;
            goto label_320cc4;
        }
    }
    ctx->pc = 0x320CBCu;
    // 0x320cbc: 0xc0c82b8  jal         func_320AE0
    ctx->pc = 0x320CBCu;
    SET_GPR_U32(ctx, 31, 0x320CC4u);
    ctx->pc = 0x320AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320AE0u, 0x320CBCu, 0x320CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320CC4u;
label_320cc4:
    // 0x320cc4: 0x56a00004  bnel        $s5, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x320CC4u;
    {
        const bool branch_taken_0x320cc4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x320cc4) {
            ctx->pc = 0x320CC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x320CC4u;
            // 0x320cc8: 0xae750000  sw          $s5, 0x0($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x320CD8u;
            goto label_320cd8;
        }
    }
    ctx->pc = 0x320CCCu;
    // 0x320ccc: 0xc0c80a0  jal         func_320280
    ctx->pc = 0x320CCCu;
    SET_GPR_U32(ctx, 31, 0x320CD4u);
    ctx->pc = 0x320280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320280u, 0x320CCCu, 0x320CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320CD4u;
label_320cd4:
    // 0x320cd4: 0xae750000  sw          $s5, 0x0($s3)
    ctx->pc = 0x320cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
label_320cd8:
    // 0x320cd8: 0x8fa705e8  lw          $a3, 0x5E8($sp)
    ctx->pc = 0x320cd8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1512)));
    // 0x320cdc: 0x16070003  bne         $s0, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x320CDCu;
    {
        const bool branch_taken_0x320cdc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 7));
        ctx->pc = 0x320CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320CDCu;
        // 0x320ce0: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320cdc) {
            ctx->pc = 0x320CECu;
            goto label_320cec;
        }
    }
    ctx->pc = 0x320CE4u;
    // 0x320ce4: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x320CE4u;
    {
        const bool branch_taken_0x320ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320CE4u;
        // 0x320ce8: 0x3c0882d  daddu       $s1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320ce4) {
            ctx->pc = 0x320DDCu;
            goto label_320ddc;
        }
    }
    ctx->pc = 0x320CECu;
label_320cec:
    // 0x320cec: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x320cecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320cf0: 0x8fb005e8  lw          $s0, 0x5E8($sp)
    ctx->pc = 0x320cf0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1512)));
    // 0x320cf4: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x320cf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320cf8: 0x27c402e0  addiu       $a0, $fp, 0x2E0
    ctx->pc = 0x320cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 736));
label_320cfc:
    // 0x320cfc: 0xdc480000  ld          $t0, 0x0($v0)
    ctx->pc = 0x320cfcu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x320d00: 0xdc450008  ld          $a1, 0x8($v0)
    ctx->pc = 0x320d00u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x320d04: 0xdc460010  ld          $a2, 0x10($v0)
    ctx->pc = 0x320d04u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x320d08: 0xdc470018  ld          $a3, 0x18($v0)
    ctx->pc = 0x320d08u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x320d0c: 0xfc680000  sd          $t0, 0x0($v1)
    ctx->pc = 0x320d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 8));
    // 0x320d10: 0xfc650008  sd          $a1, 0x8($v1)
    ctx->pc = 0x320d10u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 5));
    // 0x320d14: 0xfc660010  sd          $a2, 0x10($v1)
    ctx->pc = 0x320d14u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 6));
    // 0x320d18: 0xfc670018  sd          $a3, 0x18($v1)
    ctx->pc = 0x320d18u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 7));
    // 0x320d1c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x320d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x320d20: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x320d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x320d24: 0x0  nop
    ctx->pc = 0x320d24u;
    // NOP
    // 0x320d28: 0x1444fff4  bne         $v0, $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x320D28u;
    {
        const bool branch_taken_0x320d28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x320d28) {
            ctx->pc = 0x320CFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_320cfc;
        }
    }
    ctx->pc = 0x320D30u;
    // 0x320d30: 0xdc480000  ld          $t0, 0x0($v0)
    ctx->pc = 0x320d30u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x320d34: 0xdc440008  ld          $a0, 0x8($v0)
    ctx->pc = 0x320d34u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x320d38: 0xfc680000  sd          $t0, 0x0($v1)
    ctx->pc = 0x320d38u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 8));
    // 0x320d3c: 0xfc640008  sd          $a0, 0x8($v1)
    ctx->pc = 0x320d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 4));
    // 0x320d40: 0x8fa705e8  lw          $a3, 0x5E8($sp)
    ctx->pc = 0x320d40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1512)));
    // 0x320d44: 0x50f60022  beql        $a3, $s6, . + 4 + (0x22 << 2)
    ctx->pc = 0x320D44u;
    {
        const bool branch_taken_0x320d44 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 22));
        if (branch_taken_0x320d44) {
            ctx->pc = 0x320D48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x320D44u;
            // 0x320d48: 0x9622029a  lhu         $v0, 0x29A($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 666)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x320DD0u;
            goto label_320dd0;
        }
    }
    ctx->pc = 0x320D4Cu;
    // 0x320d4c: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x320d4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_320d50:
    // 0x320d50: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x320d50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320d54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x320d54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320d58: 0xc0c8294  jal         func_320A50
    ctx->pc = 0x320D58u;
    SET_GPR_U32(ctx, 31, 0x320D60u);
    ctx->pc = 0x320D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320D58u;
    // 0x320d5c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320A50u, 0x320D58u, 0x320D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320D60u;
label_320d60:
    // 0x320d60: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x320d60u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320d64: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x320d64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320d68: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x320d68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320d6c: 0x9624029a  lhu         $a0, 0x29A($s1)
    ctx->pc = 0x320d6cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 666)));
    // 0x320d70: 0x2633029c  addiu       $s3, $s1, 0x29C
    ctx->pc = 0x320d70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 668));
    // 0x320d74: 0x0  nop
    ctx->pc = 0x320d74u;
    // NOP
label_320d78:
    // 0x320d78: 0x12040008  beq         $s0, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x320D78u;
    {
        const bool branch_taken_0x320d78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x320D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320D78u;
        // 0x320d7c: 0x2701021  addu        $v0, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320d78) {
            ctx->pc = 0x320D9Cu;
            goto label_320d9c;
        }
    }
    ctx->pc = 0x320D80u;
    // 0x320d80: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x320d80u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x320d84: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x320D84u;
    {
        const bool branch_taken_0x320d84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x320D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320D84u;
        // 0x320d88: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320d84) {
            ctx->pc = 0x320D9Cu;
            goto label_320d9c;
        }
    }
    ctx->pc = 0x320D8Cu;
    // 0x320d8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x320d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320d90: 0xc0c8274  jal         func_3209D0
    ctx->pc = 0x320D90u;
    SET_GPR_U32(ctx, 31, 0x320D98u);
    ctx->pc = 0x320D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320D90u;
    // 0x320d94: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3209D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3209D0u, 0x320D90u, 0x320D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320D98u;
label_320d98:
    // 0x320d98: 0x9624029a  lhu         $a0, 0x29A($s1)
    ctx->pc = 0x320d98u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 666)));
label_320d9c:
    // 0x320d9c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x320d9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x320da0: 0x2a02004f  slti        $v0, $s0, 0x4F
    ctx->pc = 0x320da0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)79) ? 1 : 0);
    // 0x320da4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x320DA4u;
    {
        const bool branch_taken_0x320da4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x320DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320DA4u;
        // 0x320da8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320da4) {
            ctx->pc = 0x320D78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_320d78;
        }
    }
    ctx->pc = 0x320DACu;
    // 0x320dac: 0xc0c8252  jal         func_320948
    ctx->pc = 0x320DACu;
    SET_GPR_U32(ctx, 31, 0x320DB4u);
    ctx->pc = 0x320DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320DACu;
    // 0x320db0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320948u, 0x320DACu, 0x320DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320DB4u;
label_320db4:
    // 0x320db4: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x320db4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x320db8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x320db8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x320dbc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x320dbcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x320dc0: 0x2470ffff  addiu       $s0, $v1, -0x1
    ctx->pc = 0x320dc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x320dc4: 0x1616ffe2  bne         $s0, $s6, . + 4 + (-0x1E << 2)
    ctx->pc = 0x320DC4u;
    {
        const bool branch_taken_0x320dc4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 22));
        ctx->pc = 0x320DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320DC4u;
        // 0x320dc8: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320dc4) {
            ctx->pc = 0x320D50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_320d50;
        }
    }
    ctx->pc = 0x320DCCu;
    // 0x320dcc: 0x9622029a  lhu         $v0, 0x29A($s1)
    ctx->pc = 0x320dccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 666)));
label_320dd0:
    // 0x320dd0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x320dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x320dd4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x320dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x320dd8: 0x8043029c  lb          $v1, 0x29C($v0)
    ctx->pc = 0x320dd8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 668)));
label_320ddc:
    // 0x320ddc: 0x8fa805e4  lw          $t0, 0x5E4($sp)
    ctx->pc = 0x320ddcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1508)));
    // 0x320de0: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x320de0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320de4: 0xdfbf0690  ld          $ra, 0x690($sp)
    ctx->pc = 0x320de4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1680)));
    // 0x320de8: 0xad110000  sw          $s1, 0x0($t0)
    ctx->pc = 0x320de8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 17));
    // 0x320dec: 0xdfbe0680  ld          $fp, 0x680($sp)
    ctx->pc = 0x320decu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 1664)));
    // 0x320df0: 0xdfb70670  ld          $s7, 0x670($sp)
    ctx->pc = 0x320df0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 1648)));
    // 0x320df4: 0xdfb60660  ld          $s6, 0x660($sp)
    ctx->pc = 0x320df4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 1632)));
    // 0x320df8: 0xdfb50650  ld          $s5, 0x650($sp)
    ctx->pc = 0x320df8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 1616)));
    // 0x320dfc: 0xdfb40640  ld          $s4, 0x640($sp)
    ctx->pc = 0x320dfcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1600)));
    // 0x320e00: 0xdfb30630  ld          $s3, 0x630($sp)
    ctx->pc = 0x320e00u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1584)));
    // 0x320e04: 0xdfb20620  ld          $s2, 0x620($sp)
    ctx->pc = 0x320e04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1568)));
    // 0x320e08: 0xdfb10610  ld          $s1, 0x610($sp)
    ctx->pc = 0x320e08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1552)));
    // 0x320e0c: 0xdfb00600  ld          $s0, 0x600($sp)
    ctx->pc = 0x320e0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1536)));
    // 0x320e10: 0x3e00008  jr          $ra
    ctx->pc = 0x320E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320E10u;
        // 0x320e14: 0x27bd06a0  addiu       $sp, $sp, 0x6A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1696));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320E10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320E18u;
}
