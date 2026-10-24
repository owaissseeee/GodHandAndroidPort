#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: workInit__7cMcSave
// Address: 0x7c3ae8 - 0x7c3c40
void workInit__7cMcSave_0x7c3ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("workInit__7cMcSave_0x7c3ae8");
#endif

    switch (ctx->pc) {
        case 0x7c3b34u: goto label_7c3b34;
        case 0x7c3b40u: goto label_7c3b40;
        case 0x7c3b4cu: goto label_7c3b4c;
        case 0x7c3b54u: goto label_7c3b54;
        case 0x7c3b6cu: goto label_7c3b6c;
        case 0x7c3b84u: goto label_7c3b84;
        case 0x7c3b9cu: goto label_7c3b9c;
        case 0x7c3bc0u: goto label_7c3bc0;
        case 0x7c3bf0u: goto label_7c3bf0;
        case 0x7c3bf8u: goto label_7c3bf8;
        case 0x7c3c08u: goto label_7c3c08;
        case 0x7c3c1cu: goto label_7c3c1c;
        default: break;
    }

    ctx->pc = 0x7c3ae8u;

    // 0x7c3ae8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x7c3ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x7c3aec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x7c3aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c3af0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x7c3af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x7c3af4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7c3af4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c3af8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x7c3af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x7c3afc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x7c3afcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c3b00: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x7c3b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x7c3b04: 0x3c10005d  lui         $s0, 0x5D
    ctx->pc = 0x7c3b04u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)93 << 16));
    // 0x7c3b08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c3b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c3b0c: 0x2604ac90  addiu       $a0, $s0, -0x5370
    ctx->pc = 0x7c3b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945936));
    // 0x7c3b10: 0xa220000c  sb          $zero, 0xC($s1)
    ctx->pc = 0x7c3b10u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x7c3b14: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x7c3b14u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x7c3b18: 0xa220000d  sb          $zero, 0xD($s1)
    ctx->pc = 0x7c3b18u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 13), (uint8_t)GPR_U32(ctx, 0));
    // 0x7c3b1c: 0xae200104  sw          $zero, 0x104($s1)
    ctx->pc = 0x7c3b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 0));
    // 0x7c3b20: 0xae2000e8  sw          $zero, 0xE8($s1)
    ctx->pc = 0x7c3b20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
    // 0x7c3b24: 0xae200080  sw          $zero, 0x80($s1)
    ctx->pc = 0x7c3b24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 0));
    // 0x7c3b28: 0xae200100  sw          $zero, 0x100($s1)
    ctx->pc = 0x7c3b28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 0));
    // 0x7c3b2c: 0xc0a9b06  jal         func_2A6C18
    ctx->pc = 0x7C3B2Cu;
    SET_GPR_U32(ctx, 31, 0x7C3B34u);
    ctx->pc = 0x7C3B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C3B2Cu;
    // 0x7c3b30: 0xae22007c  sw          $v0, 0x7C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6C18u, 0x7C3B2Cu, 0x7C3B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C3B34u;
label_7c3b34:
    // 0x7c3b34: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x7C3B34u;
    {
        const bool branch_taken_0x7c3b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C3B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C3B34u;
        // 0x7c3b38: 0x3c120075  lui         $s2, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c3b34) {
            ctx->pc = 0x7C3B4Cu;
            goto label_7c3b4c;
        }
    }
    ctx->pc = 0x7C3B3Cu;
    // 0x7c3b3c: 0x0  nop
    ctx->pc = 0x7c3b3cu;
    // NOP
label_7c3b40:
    // 0x7c3b40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c3b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c3b44: 0xc1f22ca  jal         func_7C8B28
    ctx->pc = 0x7C3B44u;
    SET_GPR_U32(ctx, 31, 0x7C3B4Cu);
    ctx->pc = 0x7C3B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C3B44u;
    // 0x7c3b48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8B28u, 0x7C3B44u, 0x7C3B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C3B4Cu;
label_7c3b4c:
    // 0x7c3b4c: 0xc0a9b14  jal         func_2A6C50
    ctx->pc = 0x7C3B4Cu;
    SET_GPR_U32(ctx, 31, 0x7C3B54u);
    ctx->pc = 0x7C3B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C3B4Cu;
    // 0x7c3b50: 0x2604ac90  addiu       $a0, $s0, -0x5370 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6C50u, 0x7C3B4Cu, 0x7C3B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C3B54u;
label_7c3b54:
    // 0x7c3b54: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x7C3B54u;
    {
        const bool branch_taken_0x7c3b54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C3B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C3B54u;
        // 0x7c3b58: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c3b54) {
            ctx->pc = 0x7C3B40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7c3b40;
        }
    }
    ctx->pc = 0x7C3B5Cu;
    // 0x7c3b5c: 0x26504220  addiu       $s0, $s2, 0x4220
    ctx->pc = 0x7c3b5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16928));
    // 0x7c3b60: 0x24045000  addiu       $a0, $zero, 0x5000
    ctx->pc = 0x7c3b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20480));
    // 0x7c3b64: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x7C3B64u;
    SET_GPR_U32(ctx, 31, 0x7C3B6Cu);
    ctx->pc = 0x7C3B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C3B64u;
    // 0x7c3b68: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x7C3B64u, 0x7C3B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C3B6Cu;
label_7c3b6c:
    // 0x7c3b6c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x7C3B6Cu;
    {
        const bool branch_taken_0x7c3b6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C3B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C3B6Cu;
        // 0x7c3b70: 0xae220080  sw          $v0, 0x80($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c3b6c) {
            ctx->pc = 0x7C3BA4u;
            goto label_7c3ba4;
        }
    }
    ctx->pc = 0x7C3B74u;
    // 0x7c3b74: 0x3404b400  ori         $a0, $zero, 0xB400
    ctx->pc = 0x7c3b74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)46080);
    // 0x7c3b78: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x7c3b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x7c3b7c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x7C3B7Cu;
    SET_GPR_U32(ctx, 31, 0x7C3B84u);
    ctx->pc = 0x7C3B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C3B7Cu;
    // 0x7c3b80: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x7C3B7Cu, 0x7C3B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C3B84u;
label_7c3b84:
    // 0x7c3b84: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x7C3B84u;
    {
        const bool branch_taken_0x7c3b84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C3B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C3B84u;
        // 0x7c3b88: 0xae2200f8  sw          $v0, 0xF8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 248), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c3b84) {
            ctx->pc = 0x7C3BA4u;
            goto label_7c3ba4;
        }
    }
    ctx->pc = 0x7C3B8Cu;
    // 0x7c3b8c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x7c3b8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c3b90: 0x3404b400  ori         $a0, $zero, 0xB400
    ctx->pc = 0x7c3b90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)46080);
    // 0x7c3b94: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x7C3B94u;
    SET_GPR_U32(ctx, 31, 0x7C3B9Cu);
    ctx->pc = 0x7C3B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C3B94u;
    // 0x7c3b98: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x7C3B94u, 0x7C3B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C3B9Cu;
label_7c3b9c:
    // 0x7c3b9c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x7C3B9Cu;
    {
        const bool branch_taken_0x7c3b9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C3BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C3B9Cu;
        // 0x7c3ba0: 0xae2200fc  sw          $v0, 0xFC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 252), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c3b9c) {
            ctx->pc = 0x7C3BB0u;
            goto label_7c3bb0;
        }
    }
    ctx->pc = 0x7C3BA4u;
label_7c3ba4:
    // 0x7c3ba4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7c3ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c3ba8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x7C3BA8u;
    {
        const bool branch_taken_0x7c3ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C3BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C3BA8u;
        // 0x7c3bac: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c3ba8) {
            ctx->pc = 0x7C3C28u;
            goto label_7c3c28;
        }
    }
    ctx->pc = 0x7C3BB0u;
label_7c3bb0:
    // 0x7c3bb0: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x7c3bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x7c3bb4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x7c3bb4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c3bb8: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x7c3bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x7c3bbc: 0x26220088  addiu       $v0, $s1, 0x88
    ctx->pc = 0x7c3bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 136));
label_7c3bc0:
    // 0x7c3bc0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x7c3bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x7c3bc4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x7c3bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x7c3bc8: 0x0  nop
    ctx->pc = 0x7c3bc8u;
    // NOP
    // 0x7c3bcc: 0x0  nop
    ctx->pc = 0x7c3bccu;
    // NOP
    // 0x7c3bd0: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x7C3BD0u;
    {
        const bool branch_taken_0x7c3bd0 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x7C3BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C3BD0u;
        // 0x7c3bd4: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c3bd0) {
            ctx->pc = 0x7C3BC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7c3bc0;
        }
    }
    ctx->pc = 0x7C3BD8u;
    // 0x7c3bd8: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x7c3bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x7c3bdc: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x7C3BDCu;
    {
        const bool branch_taken_0x7c3bdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C3BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C3BDCu;
        // 0x7c3be0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c3bdc) {
            ctx->pc = 0x7C3C14u;
            goto label_7c3c14;
        }
    }
    ctx->pc = 0x7C3BE4u;
    // 0x7c3be4: 0x24065000  addiu       $a2, $zero, 0x5000
    ctx->pc = 0x7c3be4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20480));
    // 0x7c3be8: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x7C3BE8u;
    SET_GPR_U32(ctx, 31, 0x7C3BF0u);
    ctx->pc = 0x7C3BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C3BE8u;
    // 0x7c3bec: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x7C3BE8u, 0x7C3BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C3BF0u;
label_7c3bf0:
    // 0x7c3bf0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7c3bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c3bf4: 0x0  nop
    ctx->pc = 0x7c3bf4u;
    // NOP
label_7c3bf8:
    // 0x7c3bf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c3bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c3bfc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x7c3bfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c3c00: 0xc1f23de  jal         func_7C8F78
    ctx->pc = 0x7C3C00u;
    SET_GPR_U32(ctx, 31, 0x7C3C08u);
    ctx->pc = 0x7C3C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C3C00u;
    // 0x7c3c04: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8F78u, 0x7C3C00u, 0x7C3C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C3C08u;
label_7c3c08:
    // 0x7c3c08: 0x2a020014  slti        $v0, $s0, 0x14
    ctx->pc = 0x7c3c08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x7c3c0c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x7C3C0Cu;
    {
        const bool branch_taken_0x7c3c0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C3C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C3C0Cu;
        // 0x7c3c10: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c3c0c) {
            ctx->pc = 0x7C3BF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7c3bf8;
        }
    }
    ctx->pc = 0x7C3C14u;
label_7c3c14:
    // 0x7c3c14: 0xc1f2336  jal         func_7C8CD8
    ctx->pc = 0x7C3C14u;
    SET_GPR_U32(ctx, 31, 0x7C3C1Cu);
    ctx->pc = 0x7C3C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C3C14u;
    // 0x7c3c18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8CD8u, 0x7C3C14u, 0x7C3C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C3C1Cu;
label_7c3c1c:
    // 0x7c3c1c: 0xae2000e8  sw          $zero, 0xE8($s1)
    ctx->pc = 0x7c3c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
    // 0x7c3c20: 0xae2000f0  sw          $zero, 0xF0($s1)
    ctx->pc = 0x7c3c20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 0));
    // 0x7c3c24: 0xae2000f4  sw          $zero, 0xF4($s1)
    ctx->pc = 0x7c3c24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 0));
label_7c3c28:
    // 0x7c3c28: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x7c3c28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7c3c2c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x7c3c2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7c3c30: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x7c3c30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c3c34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c3c34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c3c38: 0x3e00008  jr          $ra
    ctx->pc = 0x7C3C38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C3C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C3C38u;
        // 0x7c3c3c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C3C38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C3C40u;
}
} // namespace gh_mcport
