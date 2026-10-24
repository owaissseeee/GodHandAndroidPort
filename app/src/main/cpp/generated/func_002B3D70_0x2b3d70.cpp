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

// Function: func_002B3D70
// Address: 0x2b3d70 - 0x2b3ec8
void func_002B3D70_0x2b3d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B3D70_0x2b3d70");
#endif

    switch (ctx->pc) {
        case 0x2b3e80u: goto label_2b3e80;
        case 0x2b3eb4u: goto label_2b3eb4;
        default: break;
    }

    ctx->pc = 0x2b3d70u;

    // 0x2b3d70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b3d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b3d74: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2b3d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2b3d78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b3d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b3d7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b3d7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3d80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b3d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b3d84: 0x9203000d  lbu         $v1, 0xD($s0)
    ctx->pc = 0x2b3d84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
    // 0x2b3d88: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B3D88u;
    {
        const bool branch_taken_0x2b3d88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3D88u;
        // 0x2b3d8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3d88) {
            ctx->pc = 0x2B3DA0u;
            goto label_2b3da0;
        }
    }
    ctx->pc = 0x2B3D90u;
    // 0x2b3d90: 0x5062000e  beql        $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2B3D90u;
    {
        const bool branch_taken_0x2b3d90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b3d90) {
            ctx->pc = 0x2B3D94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3D90u;
            // 0x2b3d94: 0x920200b2  lbu         $v0, 0xB2($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 178)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3DCCu;
            goto label_2b3dcc;
        }
    }
    ctx->pc = 0x2B3D98u;
    // 0x2b3d98: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x2B3D98u;
    {
        const bool branch_taken_0x2b3d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3D98u;
        // 0x2b3d9c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3d98) {
            ctx->pc = 0x2B3EB8u;
            goto label_2b3eb8;
        }
    }
    ctx->pc = 0x2B3DA0u;
label_2b3da0:
    // 0x2b3da0: 0x9602002e  lhu         $v0, 0x2E($s0)
    ctx->pc = 0x2b3da0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 46)));
    // 0x2b3da4: 0x54400044  bnel        $v0, $zero, . + 4 + (0x44 << 2)
    ctx->pc = 0x2B3DA4u;
    {
        const bool branch_taken_0x2b3da4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b3da4) {
            ctx->pc = 0x2B3DA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3DA4u;
            // 0x2b3da8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3EB8u;
            goto label_2b3eb8;
        }
    }
    ctx->pc = 0x2B3DACu;
    // 0x2b3dac: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2b3dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2b3db0: 0x9203000d  lbu         $v1, 0xD($s0)
    ctx->pc = 0x2b3db0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
    // 0x2b3db4: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x2b3db4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x2b3db8: 0xa20000b2  sb          $zero, 0xB2($s0)
    ctx->pc = 0x2b3db8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 178), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b3dbc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2b3dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2b3dc0: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x2b3dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x2b3dc4: 0xa203000d  sb          $v1, 0xD($s0)
    ctx->pc = 0x2b3dc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b3dc8: 0x920200b2  lbu         $v0, 0xB2($s0)
    ctx->pc = 0x2b3dc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 178)));
label_2b3dcc:
    // 0x2b3dcc: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2b3dccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x2b3dd0: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x2b3dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x2b3dd4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2b3dd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3dd8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b3dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2b3ddc: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x2b3ddcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3de0: 0xa20200b2  sb          $v0, 0xB2($s0)
    ctx->pc = 0x2b3de0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 178), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b3de4: 0x24667a84  addiu       $a2, $v1, 0x7A84
    ctx->pc = 0x2b3de4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 31364));
    // 0x2b3de8: 0x8ca42550  lw          $a0, 0x2550($a1)
    ctx->pc = 0x2b3de8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2550u));
    // 0x2b3dec: 0x8c627a84  lw          $v0, 0x7A84($v1)
    ctx->pc = 0x2b3decu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A84u));
    // 0x2b3df0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2b3df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2b3df4: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x2b3df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x2b3df8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b3df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b3dfc: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2B3DFCu;
    {
        const bool branch_taken_0x2b3dfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3DFCu;
        // 0x2b3e00: 0xaca42550  sw          $a0, 0x2550($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 9552), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3dfc) {
            ctx->pc = 0x2B3EB4u;
            goto label_2b3eb4;
        }
    }
    ctx->pc = 0x2B3E04u;
    // 0x2b3e04: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x2b3e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2b3e08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b3e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b3e0c: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B3E0Cu;
    {
        const bool branch_taken_0x2b3e0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b3e0c) {
            ctx->pc = 0x2B3E10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3E0Cu;
            // 0x2b3e10: 0x24c5fa1c  addiu       $a1, $a2, -0x5E4 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965788));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3E28u;
            goto label_2b3e28;
        }
    }
    ctx->pc = 0x2B3E14u;
    // 0x2b3e14: 0x2882005a  slti        $v0, $a0, 0x5A
    ctx->pc = 0x2b3e14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)90) ? 1 : 0);
    // 0x2b3e18: 0x54400027  bnel        $v0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x2B3E18u;
    {
        const bool branch_taken_0x2b3e18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b3e18) {
            ctx->pc = 0x2B3E1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3E18u;
            // 0x2b3e1c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3EB8u;
            goto label_2b3eb8;
        }
    }
    ctx->pc = 0x2B3E20u;
    // 0x2b3e20: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2B3E20u;
    {
        const bool branch_taken_0x2b3e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3E20u;
        // 0x2b3e24: 0xace02550  sw          $zero, 0x2550($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 9552), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3e20) {
            ctx->pc = 0x2B3E58u;
            goto label_2b3e58;
        }
    }
    ctx->pc = 0x2B3E28u;
label_2b3e28:
    // 0x2b3e28: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2b3e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2b3e2c: 0xdc443d48  ld          $a0, 0x3D48($v0)
    ctx->pc = 0x2b3e2cu;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x3C3D48u));
    // 0x2b3e30: 0xdca30178  ld          $v1, 0x178($a1)
    ctx->pc = 0x2b3e30u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 376)));
    // 0x2b3e34: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2b3e34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2b3e38: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B3E38u;
    {
        const bool branch_taken_0x2b3e38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b3e38) {
            ctx->pc = 0x2B3E3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3E38u;
            // 0x2b3e3c: 0xace02550  sw          $zero, 0x2550($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 9552), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3E58u;
            goto label_2b3e58;
        }
    }
    ctx->pc = 0x2B3E40u;
    // 0x2b3e40: 0xdca201a0  ld          $v0, 0x1A0($a1)
    ctx->pc = 0x2b3e40u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 416)));
    // 0x2b3e44: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2b3e44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2b3e48: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b3e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b3e4c: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x2B3E4Cu;
    {
        const bool branch_taken_0x2b3e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3e4c) {
            ctx->pc = 0x2B3E50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3E4Cu;
            // 0x2b3e50: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3EB8u;
            goto label_2b3eb8;
        }
    }
    ctx->pc = 0x2B3E54u;
    // 0x2b3e54: 0xace02550  sw          $zero, 0x2550($a3)
    ctx->pc = 0x2b3e54u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 9552), GPR_U32(ctx, 0));
label_2b3e58:
    // 0x2b3e58: 0x2403ff7f  addiu       $v1, $zero, -0x81
    ctx->pc = 0x2b3e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x2b3e5c: 0x2407fffe  addiu       $a3, $zero, -0x2
    ctx->pc = 0x2b3e5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2b3e60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b3e60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3e64: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2b3e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2b3e68: 0x26050090  addiu       $a1, $s0, 0x90
    ctx->pc = 0x2b3e68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x2b3e6c: 0x2606008c  addiu       $a2, $s0, 0x8C
    ctx->pc = 0x2b3e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 140));
    // 0x2b3e70: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b3e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b3e74: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x2b3e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x2b3e78: 0xc0ad1da  jal         func_2B4768
    ctx->pc = 0x2B3E78u;
    SET_GPR_U32(ctx, 31, 0x2B3E80u);
    ctx->pc = 0x2B3E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3E78u;
    // 0x2b3e7c: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4768u, 0x2B3E78u, 0x2B3E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3E80u;
label_2b3e80:
    // 0x2b3e80: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b3e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b3e84: 0xa200000f  sb          $zero, 0xF($s0)
    ctx->pc = 0x2b3e84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b3e88: 0xa202000c  sb          $v0, 0xC($s0)
    ctx->pc = 0x2b3e88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b3e8c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x2b3e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x2b3e90: 0xa200000d  sb          $zero, 0xD($s0)
    ctx->pc = 0x2b3e90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b3e94: 0xa200000e  sb          $zero, 0xE($s0)
    ctx->pc = 0x2b3e94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 14), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b3e98: 0x8e227a84  lw          $v0, 0x7A84($s1)
    ctx->pc = 0x2b3e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 31364)));
    // 0x2b3e9c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b3e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b3ea0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B3EA0u;
    {
        const bool branch_taken_0x2b3ea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3EA0u;
        // 0x2b3ea4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3ea0) {
            ctx->pc = 0x2B3EB8u;
            goto label_2b3eb8;
        }
    }
    ctx->pc = 0x2B3EA8u;
    // 0x2b3ea8: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x2b3ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x2b3eac: 0xc0a5efe  jal         func_297BF8
    ctx->pc = 0x2B3EACu;
    SET_GPR_U32(ctx, 31, 0x2B3EB4u);
    ctx->pc = 0x2B3EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3EACu;
    // 0x2b3eb0: 0x24846af0  addiu       $a0, $a0, 0x6AF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297BF8u, 0x2B3EACu, 0x2B3EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3EB4u;
label_2b3eb4:
    // 0x2b3eb4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2b3eb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2b3eb8:
    // 0x2b3eb8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b3eb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b3ebc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b3ebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b3ec0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B3EC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3EC0u;
        // 0x2b3ec4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3EC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3EC8u;
}
