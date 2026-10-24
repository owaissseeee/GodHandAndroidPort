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

// Function: rint
// Address: 0x3a4af0 - 0x3a4cf0
void rint_0x3a4af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("rint_0x3a4af0");
#endif

    switch (ctx->pc) {
        case 0x3a4bb4u: goto label_3a4bb4;
        case 0x3a4bc0u: goto label_3a4bc0;
        case 0x3a4c54u: goto label_3a4c54;
        case 0x3a4cc4u: goto label_3a4cc4;
        case 0x3a4cd0u: goto label_3a4cd0;
        default: break;
    }

    ctx->pc = 0x3a4af0u;

    // 0x3a4af0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3a4af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3a4af4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3a4af4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4af8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3a4af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3a4afc: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x3a4afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x3a4b00: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x3a4b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x3a4b04: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x3a4b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x3a4b08: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3a4b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3a4b0c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x3a4b0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4b10: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x3a4b10u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3a4b14: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x3a4b14u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x3a4b18: 0x2303f  dsra32      $a2, $v0, 0
    ctx->pc = 0x3a4b18u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3a4b1c: 0x61503  sra         $v0, $a2, 20
    ctx->pc = 0x3a4b1cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 20));
    // 0x3a4b20: 0x304307ff  andi        $v1, $v0, 0x7FF
    ctx->pc = 0x3a4b20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x3a4b24: 0x2468fc01  addiu       $t0, $v1, -0x3FF
    ctx->pc = 0x3a4b24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966273));
    // 0x3a4b28: 0x29020014  slti        $v0, $t0, 0x14
    ctx->pc = 0x3a4b28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x3a4b2c: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x3A4B2Cu;
    {
        const bool branch_taken_0x3a4b2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4B2Cu;
        // 0x3a4b30: 0x69fc2  srl         $s3, $a2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4b2c) {
            ctx->pc = 0x3A4C34u;
            goto label_3a4c34;
        }
    }
    ctx->pc = 0x3A4B34u;
    // 0x3a4b34: 0x501002c  bgez        $t0, . + 4 + (0x2C << 2)
    ctx->pc = 0x3A4B34u;
    {
        const bool branch_taken_0x3a4b34 = (GPR_S64(ctx, 8) >= 0);
        ctx->pc = 0x3A4B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4B34u;
        // 0x3a4b38: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4b34) {
            ctx->pc = 0x3A4BE8u;
            goto label_3a4be8;
        }
    }
    ctx->pc = 0x3A4B3Cu;
    // 0x3a4b3c: 0x3c127fff  lui         $s2, 0x7FFF
    ctx->pc = 0x3a4b3cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32767 << 16));
    // 0x3a4b40: 0x3652ffff  ori         $s2, $s2, 0xFFFF
    ctx->pc = 0x3a4b40u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x3a4b44: 0xd21024  and         $v0, $a2, $s2
    ctx->pc = 0x3a4b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 18));
    // 0x3a4b48: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x3a4b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x3a4b4c: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x3A4B4Cu;
    {
        const bool branch_taken_0x3a4b4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4B4Cu;
        // 0x3a4b50: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4b4c) {
            ctx->pc = 0x3A4C74u;
            goto label_3a4c74;
        }
    }
    ctx->pc = 0x3A4B54u;
    // 0x3a4b54: 0x3c03fffe  lui         $v1, 0xFFFE
    ctx->pc = 0x3a4b54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65534 << 16));
    // 0x3a4b58: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3a4b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3a4b5c: 0x3c040008  lui         $a0, 0x8
    ctx->pc = 0x3a4b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8 << 16));
    // 0x3a4b60: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x3a4b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x3a4b64: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x3a4b64u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x3a4b68: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x3a4b68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x3a4b6c: 0x71023  negu        $v0, $a3
    ctx->pc = 0x3a4b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x3a4b70: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x3a4b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x3a4b74: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x3a4b74u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x3a4b78: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x3a4b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x3a4b7c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x3a4b7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x3a4b80: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x3a4b80u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4b84: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x3a4b84u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x3a4b88: 0x11883e  dsrl32      $s1, $s1, 0
    ctx->pc = 0x3a4b88u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> (32 + 0));
    // 0x3a4b8c: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x3a4b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x3a4b90: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x3a4b90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x3a4b94: 0x622825  or          $a1, $v1, $v0
    ctx->pc = 0x3a4b94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3a4b98: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x3a4b98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x3a4b9c: 0x2484f028  addiu       $a0, $a0, -0xFD8
    ctx->pc = 0x3a4b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963240));
    // 0x3a4ba0: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x3a4ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x3a4ba4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3a4ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3a4ba8: 0xdc500000  ld          $s0, 0x0($v0)
    ctx->pc = 0x3a4ba8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a4bac: 0xc0c78a2  jal         func_31E288
    ctx->pc = 0x3A4BACu;
    SET_GPR_U32(ctx, 31, 0x3A4BB4u);
    ctx->pc = 0x3A4BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4BACu;
    // 0x3a4bb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E288u, 0x3A4BACu, 0x3A4BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4BB4u;
label_3a4bb4:
    // 0x3a4bb4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3a4bb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4bb8: 0xc0c78b8  jal         func_31E2E0
    ctx->pc = 0x3A4BB8u;
    SET_GPR_U32(ctx, 31, 0x3A4BC0u);
    ctx->pc = 0x3A4BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4BB8u;
    // 0x3a4bbc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E2E0u, 0x3A4BB8u, 0x3A4BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4BC0u;
label_3a4bc0:
    // 0x3a4bc0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a4bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4bc4: 0x2303f  dsra32      $a2, $v0, 0
    ctx->pc = 0x3a4bc4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3a4bc8: 0xd21824  and         $v1, $a2, $s2
    ctx->pc = 0x3a4bc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 18));
    // 0x3a4bcc: 0x1317c0  sll         $v0, $s3, 31
    ctx->pc = 0x3a4bccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 31));
    // 0x3a4bd0: 0x912024  and         $a0, $a0, $s1
    ctx->pc = 0x3a4bd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 17));
    // 0x3a4bd4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3a4bd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3a4bd8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3a4bd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3a4bdc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3a4bdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3a4be0: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x3A4BE0u;
    {
        const bool branch_taken_0x3a4be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4BE0u;
        // 0x3a4be4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4be0) {
            ctx->pc = 0x3A4CD0u;
            goto label_3a4cd0;
        }
    }
    ctx->pc = 0x3A4BE8u;
label_3a4be8:
    // 0x3a4be8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3a4be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3a4bec: 0x1022007  srav        $a0, $v0, $t0
    ctx->pc = 0x3a4becu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x3a4bf0: 0xc41824  and         $v1, $a2, $a0
    ctx->pc = 0x3a4bf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x3a4bf4: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x3a4bf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x3a4bf8: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x3A4BF8u;
    {
        const bool branch_taken_0x3a4bf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4BF8u;
        // 0x3a4bfc: 0x42042  srl         $a0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4bf8) {
            ctx->pc = 0x3A4C74u;
            goto label_3a4c74;
        }
    }
    ctx->pc = 0x3A4C00u;
    // 0x3a4c00: 0xc41024  and         $v0, $a2, $a0
    ctx->pc = 0x3a4c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x3a4c04: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x3a4c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x3a4c08: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x3A4C08u;
    {
        const bool branch_taken_0x3a4c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4C08u;
        // 0x3a4c0c: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4c08) {
            ctx->pc = 0x3A4C98u;
            goto label_3a4c98;
        }
    }
    ctx->pc = 0x3A4C10u;
    // 0x3a4c10: 0x15020003  bne         $t0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A4C10u;
    {
        const bool branch_taken_0x3a4c10 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A4C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4C10u;
        // 0x3a4c14: 0x41827  nor         $v1, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4c10) {
            ctx->pc = 0x3A4C20u;
            goto label_3a4c20;
        }
    }
    ctx->pc = 0x3A4C18u;
    // 0x3a4c18: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x3A4C18u;
    {
        const bool branch_taken_0x3a4c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4C18u;
        // 0x3a4c1c: 0x3c074000  lui         $a3, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4c18) {
            ctx->pc = 0x3A4C98u;
            goto label_3a4c98;
        }
    }
    ctx->pc = 0x3A4C20u;
label_3a4c20:
    // 0x3a4c20: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x3a4c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x3a4c24: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x3a4c24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x3a4c28: 0x1021007  srav        $v0, $v0, $t0
    ctx->pc = 0x3a4c28u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x3a4c2c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x3A4C2Cu;
    {
        const bool branch_taken_0x3a4c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4C2Cu;
        // 0x3a4c30: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4c2c) {
            ctx->pc = 0x3A4C98u;
            goto label_3a4c98;
        }
    }
    ctx->pc = 0x3A4C34u;
label_3a4c34:
    // 0x3a4c34: 0x29020034  slti        $v0, $t0, 0x34
    ctx->pc = 0x3a4c34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)52) ? 1 : 0);
    // 0x3a4c38: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A4C38u;
    {
        const bool branch_taken_0x3a4c38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a4c38) {
            ctx->pc = 0x3A4C3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A4C38u;
            // 0x3a4c3c: 0x2468fbed  addiu       $t0, $v1, -0x413 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966253));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A4C5Cu;
            goto label_3a4c5c;
        }
    }
    ctx->pc = 0x3A4C40u;
    // 0x3a4c40: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x3a4c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x3a4c44: 0x15020022  bne         $t0, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x3A4C44u;
    {
        const bool branch_taken_0x3a4c44 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A4C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4C44u;
        // 0x3a4c48: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4c44) {
            ctx->pc = 0x3A4CD0u;
            goto label_3a4cd0;
        }
    }
    ctx->pc = 0x3A4C4Cu;
    // 0x3a4c4c: 0xc0c78a2  jal         func_31E288
    ctx->pc = 0x3A4C4Cu;
    SET_GPR_U32(ctx, 31, 0x3A4C54u);
    ctx->pc = 0x3A4C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4C4Cu;
    // 0x3a4c50: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E288u, 0x3A4C4Cu, 0x3A4C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4C54u;
label_3a4c54:
    // 0x3a4c54: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x3A4C54u;
    {
        const bool branch_taken_0x3a4c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4C54u;
        // 0x3a4c58: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4c54) {
            ctx->pc = 0x3A4CD4u;
            goto label_3a4cd4;
        }
    }
    ctx->pc = 0x3A4C5Cu;
label_3a4c5c:
    // 0x3a4c5c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3a4c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3a4c60: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3a4c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3a4c64: 0x1022006  srlv        $a0, $v0, $t0
    ctx->pc = 0x3a4c64u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x3a4c68: 0xe41824  and         $v1, $a3, $a0
    ctx->pc = 0x3a4c68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x3a4c6c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A4C6Cu;
    {
        const bool branch_taken_0x3a4c6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A4C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4C6Cu;
        // 0x3a4c70: 0x42042  srl         $a0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4c6c) {
            ctx->pc = 0x3A4C7Cu;
            goto label_3a4c7c;
        }
    }
    ctx->pc = 0x3A4C74u;
label_3a4c74:
    // 0x3a4c74: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x3A4C74u;
    {
        const bool branch_taken_0x3a4c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4C74u;
        // 0x3a4c78: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4c74) {
            ctx->pc = 0x3A4CD0u;
            goto label_3a4cd0;
        }
    }
    ctx->pc = 0x3A4C7Cu;
label_3a4c7c:
    // 0x3a4c7c: 0xe41024  and         $v0, $a3, $a0
    ctx->pc = 0x3a4c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x3a4c80: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A4C80u;
    {
        const bool branch_taken_0x3a4c80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4C80u;
        // 0x3a4c84: 0x41827  nor         $v1, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4c80) {
            ctx->pc = 0x3A4C98u;
            goto label_3a4c98;
        }
    }
    ctx->pc = 0x3A4C88u;
    // 0x3a4c88: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3a4c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x3a4c8c: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x3a4c8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x3a4c90: 0x1021007  srav        $v0, $v0, $t0
    ctx->pc = 0x3a4c90u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x3a4c94: 0x623825  or          $a3, $v1, $v0
    ctx->pc = 0x3a4c94u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3a4c98:
    // 0x3a4c98: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x3a4c98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x3a4c9c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3a4c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3a4ca0: 0x6483c  dsll32      $t1, $a2, 0
    ctx->pc = 0x3a4ca0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) << (32 + 0));
    // 0x3a4ca4: 0x1222825  or          $a1, $t1, $v0
    ctx->pc = 0x3a4ca4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x3a4ca8: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x3a4ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x3a4cac: 0x2463f028  addiu       $v1, $v1, -0xFD8
    ctx->pc = 0x3a4cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963240));
    // 0x3a4cb0: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x3a4cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x3a4cb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a4cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3a4cb8: 0xdc500000  ld          $s0, 0x0($v0)
    ctx->pc = 0x3a4cb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a4cbc: 0xc0c78a2  jal         func_31E288
    ctx->pc = 0x3A4CBCu;
    SET_GPR_U32(ctx, 31, 0x3A4CC4u);
    ctx->pc = 0x3A4CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4CBCu;
    // 0x3a4cc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E288u, 0x3A4CBCu, 0x3A4CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4CC4u;
label_3a4cc4:
    // 0x3a4cc4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a4cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4cc8: 0xc0c78b8  jal         func_31E2E0
    ctx->pc = 0x3A4CC8u;
    SET_GPR_U32(ctx, 31, 0x3A4CD0u);
    ctx->pc = 0x3A4CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4CC8u;
    // 0x3a4ccc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E2E0u, 0x3A4CC8u, 0x3A4CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4CD0u;
label_3a4cd0:
    // 0x3a4cd0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3a4cd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3a4cd4:
    // 0x3a4cd4: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x3a4cd4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3a4cd8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x3a4cd8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a4cdc: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x3a4cdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a4ce0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3a4ce0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a4ce4: 0x3e00008  jr          $ra
    ctx->pc = 0x3A4CE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A4CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4CE4u;
        // 0x3a4ce8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A4CE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A4CECu;
    // 0x3a4cec: 0x0  nop
    ctx->pc = 0x3a4cecu;
    // NOP
    ctx->pc = 0x3a4cf0u;
}
