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

// Function: func_003A7D08
// Address: 0x3a7d08 - 0x3a8048
void func_003A7D08_0x3a7d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003A7D08_0x3a7d08");
#endif

    switch (ctx->pc) {
        case 0x3a7d5cu: goto label_3a7d5c;
        case 0x3a7d74u: goto label_3a7d74;
        case 0x3a7db0u: goto label_3a7db0;
        case 0x3a7decu: goto label_3a7dec;
        case 0x3a7e44u: goto label_3a7e44;
        case 0x3a7e78u: goto label_3a7e78;
        default: break;
    }

    ctx->pc = 0x3a7d08u;

    // 0x3a7d08: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3a7d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3a7d0c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3a7d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3a7d10: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3a7d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x3a7d14: 0x3a0982d  daddu       $s3, $sp, $zero
    ctx->pc = 0x3a7d14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7d18: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3a7d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x3a7d1c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3a7d1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7d20: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3a7d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x3a7d24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3a7d24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7d28: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x3a7d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x3a7d2c: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x3a7d2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7d30: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3a7d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3a7d34: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x3a7d34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7d38: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A7D38u;
    {
        const bool branch_taken_0x3a7d38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7D38u;
        // 0x3a7d3c: 0xa5980b  movn        $s3, $a1, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7d38) {
            ctx->pc = 0x3A7D48u;
            goto label_3a7d48;
        }
    }
    ctx->pc = 0x3A7D40u;
    // 0x3a7d40: 0x128000b8  beqz        $s4, . + 4 + (0xB8 << 2)
    ctx->pc = 0x3A7D40u;
    {
        const bool branch_taken_0x3a7d40 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7D40u;
        // 0x3a7d44: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7d40) {
            ctx->pc = 0x3A8024u;
            goto label_3a8024;
        }
    }
    ctx->pc = 0x3A7D48u;
label_3a7d48:
    // 0x3a7d48: 0x8e240034  lw          $a0, 0x34($s1)
    ctx->pc = 0x3a7d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x3a7d4c: 0x108000af  beqz        $a0, . + 4 + (0xAF << 2)
    ctx->pc = 0x3A7D4Cu;
    {
        const bool branch_taken_0x3a7d4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a7d4c) {
            ctx->pc = 0x3A800Cu;
            goto label_3a800c;
        }
    }
    ctx->pc = 0x3A7D54u;
    // 0x3a7d54: 0xc0e9637  jal         func_3A58DC
    ctx->pc = 0x3A7D54u;
    SET_GPR_U32(ctx, 31, 0x3A7D5Cu);
    ctx->pc = 0x3A58DCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A58DCu, 0x3A7D54u, 0x3A7D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7D5Cu;
label_3a7d5c:
    // 0x3a7d5c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x3a7d5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3a7d60: 0x144000aa  bnez        $v0, . + 4 + (0xAA << 2)
    ctx->pc = 0x3A7D60u;
    {
        const bool branch_taken_0x3a7d60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A7D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7D60u;
        // 0x3a7d64: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7d60) {
            ctx->pc = 0x3A800Cu;
            goto label_3a800c;
        }
    }
    ctx->pc = 0x3A7D68u;
    // 0x3a7d68: 0x8e240034  lw          $a0, 0x34($s1)
    ctx->pc = 0x3a7d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x3a7d6c: 0xc0e959e  jal         func_3A5678
    ctx->pc = 0x3A7D6Cu;
    SET_GPR_U32(ctx, 31, 0x3A7D74u);
    ctx->pc = 0x3A7D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7D6Cu;
    // 0x3a7d70: 0x24a5f5f0  addiu       $a1, $a1, -0xA10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5678u, 0x3A7D6Cu, 0x3A7D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7D74u;
label_3a7d74:
    // 0x3a7d74: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x3A7D74u;
    {
        const bool branch_taken_0x3a7d74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a7d74) {
            ctx->pc = 0x3A7D78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A7D74u;
            // 0x3a7d78: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A7DE0u;
            goto label_3a7de0;
        }
    }
    ctx->pc = 0x3A7D7Cu;
    // 0x3a7d7c: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x3a7d7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3a7d80: 0x120000a8  beqz        $s0, . + 4 + (0xA8 << 2)
    ctx->pc = 0x3A7D80u;
    {
        const bool branch_taken_0x3a7d80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7D80u;
        // 0x3a7d84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7d80) {
            ctx->pc = 0x3A8024u;
            goto label_3a8024;
        }
    }
    ctx->pc = 0x3A7D88u;
    // 0x3a7d88: 0x2462ff7f  addiu       $v0, $v1, -0x81
    ctx->pc = 0x3a7d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967167));
    // 0x3a7d8c: 0x2c42001f  sltiu       $v0, $v0, 0x1F
    ctx->pc = 0x3a7d8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
    // 0x3a7d90: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A7D90u;
    {
        const bool branch_taken_0x3a7d90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A7D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7D90u;
        // 0x3a7d94: 0x2e820002  sltiu       $v0, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7d90) {
            ctx->pc = 0x3A7DA8u;
            goto label_3a7da8;
        }
    }
    ctx->pc = 0x3A7D98u;
    // 0x3a7d98: 0x2462ff20  addiu       $v0, $v1, -0xE0
    ctx->pc = 0x3a7d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967072));
    // 0x3a7d9c: 0x2c420010  sltiu       $v0, $v0, 0x10
    ctx->pc = 0x3a7d9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x3a7da0: 0x1040009a  beqz        $v0, . + 4 + (0x9A << 2)
    ctx->pc = 0x3A7DA0u;
    {
        const bool branch_taken_0x3a7da0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7DA0u;
        // 0x3a7da4: 0x2e820002  sltiu       $v0, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7da0) {
            ctx->pc = 0x3A800Cu;
            goto label_3a800c;
        }
    }
    ctx->pc = 0x3A7DA8u;
label_3a7da8:
    // 0x3a7da8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A7DA8u;
    {
        const bool branch_taken_0x3a7da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7DA8u;
        // 0x3a7dac: 0x92060001  lbu         $a2, 0x1($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7da8) {
            ctx->pc = 0x3A7DB8u;
            goto label_3a7db8;
        }
    }
    ctx->pc = 0x3A7DB0u;
label_3a7db0:
    // 0x3a7db0: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x3A7DB0u;
    {
        const bool branch_taken_0x3a7db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7DB0u;
        // 0x3a7db4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7db0) {
            ctx->pc = 0x3A8024u;
            goto label_3a8024;
        }
    }
    ctx->pc = 0x3A7DB8u;
label_3a7db8:
    // 0x3a7db8: 0x24c2ffc0  addiu       $v0, $a2, -0x40
    ctx->pc = 0x3a7db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967232));
    // 0x3a7dbc: 0x2c42003f  sltiu       $v0, $v0, 0x3F
    ctx->pc = 0x3a7dbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)63) ? 1 : 0);
    // 0x3a7dc0: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3A7DC0u;
    {
        const bool branch_taken_0x3a7dc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A7DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7DC0u;
        // 0x3a7dc4: 0x31a00  sll         $v1, $v1, 8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7dc0) {
            ctx->pc = 0x3A7E28u;
            goto label_3a7e28;
        }
    }
    ctx->pc = 0x3A7DC8u;
    // 0x3a7dc8: 0x24c2ff80  addiu       $v0, $a2, -0x80
    ctx->pc = 0x3a7dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967168));
    // 0x3a7dcc: 0x2c42007d  sltiu       $v0, $v0, 0x7D
    ctx->pc = 0x3a7dccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)125) ? 1 : 0);
    // 0x3a7dd0: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3A7DD0u;
    {
        const bool branch_taken_0x3a7dd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A7DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7DD0u;
        // 0x3a7dd4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7dd0) {
            ctx->pc = 0x3A7E2Cu;
            goto label_3a7e2c;
        }
    }
    ctx->pc = 0x3A7DD8u;
    // 0x3a7dd8: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x3A7DD8u;
    {
        const bool branch_taken_0x3a7dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7DD8u;
        // 0x3a7ddc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7dd8) {
            ctx->pc = 0x3A8024u;
            goto label_3a8024;
        }
    }
    ctx->pc = 0x3A7DE0u;
label_3a7de0:
    // 0x3a7de0: 0x8e240034  lw          $a0, 0x34($s1)
    ctx->pc = 0x3a7de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x3a7de4: 0xc0e959e  jal         func_3A5678
    ctx->pc = 0x3A7DE4u;
    SET_GPR_U32(ctx, 31, 0x3A7DECu);
    ctx->pc = 0x3A7DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7DE4u;
    // 0x3a7de8: 0x24a5f5f8  addiu       $a1, $a1, -0xA08 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5678u, 0x3A7DE4u, 0x3A7DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7DECu;
label_3a7dec:
    // 0x3a7dec: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x3A7DECu;
    {
        const bool branch_taken_0x3a7dec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a7dec) {
            ctx->pc = 0x3A7DF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A7DECu;
            // 0x3a7df0: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A7E38u;
            goto label_3a7e38;
        }
    }
    ctx->pc = 0x3A7DF4u;
    // 0x3a7df4: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x3a7df4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3a7df8: 0x1200008a  beqz        $s0, . + 4 + (0x8A << 2)
    ctx->pc = 0x3A7DF8u;
    {
        const bool branch_taken_0x3a7df8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7DF8u;
        // 0x3a7dfc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7df8) {
            ctx->pc = 0x3A8024u;
            goto label_3a8024;
        }
    }
    ctx->pc = 0x3A7E00u;
    // 0x3a7e00: 0x2462ff5f  addiu       $v0, $v1, -0xA1
    ctx->pc = 0x3a7e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967135));
    // 0x3a7e04: 0x2c42005e  sltiu       $v0, $v0, 0x5E
    ctx->pc = 0x3a7e04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)94) ? 1 : 0);
    // 0x3a7e08: 0x10400080  beqz        $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x3A7E08u;
    {
        const bool branch_taken_0x3a7e08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7E08u;
        // 0x3a7e0c: 0x2e820002  sltiu       $v0, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7e08) {
            ctx->pc = 0x3A800Cu;
            goto label_3a800c;
        }
    }
    ctx->pc = 0x3A7E10u;
    // 0x3a7e10: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x3A7E10u;
    {
        const bool branch_taken_0x3a7e10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A7E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7E10u;
        // 0x3a7e14: 0x92060001  lbu         $a2, 0x1($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7e10) {
            ctx->pc = 0x3A7DB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a7db0;
        }
    }
    ctx->pc = 0x3A7E18u;
    // 0x3a7e18: 0x24c2ff5f  addiu       $v0, $a2, -0xA1
    ctx->pc = 0x3a7e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967135));
    // 0x3a7e1c: 0x2c42005e  sltiu       $v0, $v0, 0x5E
    ctx->pc = 0x3a7e1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)94) ? 1 : 0);
    // 0x3a7e20: 0x1040ffe3  beqz        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x3A7E20u;
    {
        const bool branch_taken_0x3a7e20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7E20u;
        // 0x3a7e24: 0x31a00  sll         $v1, $v1, 8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7e20) {
            ctx->pc = 0x3A7DB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a7db0;
        }
    }
    ctx->pc = 0x3A7E28u;
label_3a7e28:
    // 0x3a7e28: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3a7e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3a7e2c:
    // 0x3a7e2c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x3a7e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3a7e30: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x3A7E30u;
    {
        const bool branch_taken_0x3a7e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7E30u;
        // 0x3a7e34: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7e30) {
            ctx->pc = 0x3A8024u;
            goto label_3a8024;
        }
    }
    ctx->pc = 0x3A7E38u;
label_3a7e38:
    // 0x3a7e38: 0x8e240034  lw          $a0, 0x34($s1)
    ctx->pc = 0x3a7e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x3a7e3c: 0xc0e959e  jal         func_3A5678
    ctx->pc = 0x3A7E3Cu;
    SET_GPR_U32(ctx, 31, 0x3A7E44u);
    ctx->pc = 0x3A7E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7E3Cu;
    // 0x3a7e40: 0x24a5f600  addiu       $a1, $a1, -0xA00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5678u, 0x3A7E3Cu, 0x3A7E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7E44u;
label_3a7e44:
    // 0x3a7e44: 0x14400071  bnez        $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x3A7E44u;
    {
        const bool branch_taken_0x3a7e44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a7e44) {
            ctx->pc = 0x3A800Cu;
            goto label_3a800c;
        }
    }
    ctx->pc = 0x3A7E4Cu;
    // 0x3a7e4c: 0x56000004  bnel        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A7E4Cu;
    {
        const bool branch_taken_0x3a7e4c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a7e4c) {
            ctx->pc = 0x3A7E50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A7E4Cu;
            // 0x3a7e50: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A7E60u;
            goto label_3a7e60;
        }
    }
    ctx->pc = 0x3A7E54u;
    // 0x3a7e54: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x3a7e54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x3a7e58: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x3A7E58u;
    {
        const bool branch_taken_0x3a7e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7E58u;
        // 0x3a7e5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7e58) {
            ctx->pc = 0x3A8024u;
            goto label_3a8024;
        }
    }
    ctx->pc = 0x3A7E60u;
label_3a7e60:
    // 0x3a7e60: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x3a7e60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a7e64: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3a7e64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7e68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a7e68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7e6c: 0x1280ffd0  beqz        $s4, . + 4 + (-0x30 << 2)
    ctx->pc = 0x3A7E6Cu;
    {
        const bool branch_taken_0x3a7e6c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7E6Cu;
        // 0x3a7e70: 0x2480a  movz        $t1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7e6c) {
            ctx->pc = 0x3A7DB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a7db0;
        }
    }
    ctx->pc = 0x3A7E74u;
    // 0x3a7e74: 0x2061021  addu        $v0, $s0, $a2
    ctx->pc = 0x3a7e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_3a7e78:
    // 0x3a7e78: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x3a7e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x3a7e7c: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x3a7e7cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a7e80: 0x10830024  beq         $a0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x3A7E80u;
    {
        const bool branch_taken_0x3a7e80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3A7E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7E80u;
        // 0x3a7e84: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7e80) {
            ctx->pc = 0x3A7F14u;
            goto label_3a7f14;
        }
    }
    ctx->pc = 0x3A7E88u;
    // 0x3a7e88: 0x28820029  slti        $v0, $a0, 0x29
    ctx->pc = 0x3a7e88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x3a7e8c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3A7E8Cu;
    {
        const bool branch_taken_0x3a7e8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7E8Cu;
        // 0x3a7e90: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7e8c) {
            ctx->pc = 0x3A7EC4u;
            goto label_3a7ec4;
        }
    }
    ctx->pc = 0x3A7E94u;
    // 0x3a7e94: 0x10820019  beq         $a0, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3A7E94u;
    {
        const bool branch_taken_0x3a7e94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A7E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7E94u;
        // 0x3a7e98: 0x2882001c  slti        $v0, $a0, 0x1C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)28) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7e94) {
            ctx->pc = 0x3A7EFCu;
            goto label_3a7efc;
        }
    }
    ctx->pc = 0x3A7E9Cu;
    // 0x3a7e9c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A7E9Cu;
    {
        const bool branch_taken_0x3a7e9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7E9Cu;
        // 0x3a7ea0: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7e9c) {
            ctx->pc = 0x3A7EB4u;
            goto label_3a7eb4;
        }
    }
    ctx->pc = 0x3A7EA4u;
    // 0x3a7ea4: 0x10800021  beqz        $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x3A7EA4u;
    {
        const bool branch_taken_0x3a7ea4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7EA4u;
        // 0x3a7ea8: 0x2482ffdf  addiu       $v0, $a0, -0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967263));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7ea4) {
            ctx->pc = 0x3A7F2Cu;
            goto label_3a7f2c;
        }
    }
    ctx->pc = 0x3A7EACu;
    // 0x3a7eac: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x3A7EACu;
    {
        const bool branch_taken_0x3a7eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7EACu;
        // 0x3a7eb0: 0x2403005d  addiu       $v1, $zero, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7eac) {
            ctx->pc = 0x3A7F34u;
            goto label_3a7f34;
        }
    }
    ctx->pc = 0x3A7EB4u;
label_3a7eb4:
    // 0x3a7eb4: 0x10820013  beq         $a0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3A7EB4u;
    {
        const bool branch_taken_0x3a7eb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A7EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7EB4u;
        // 0x3a7eb8: 0x2482ffdf  addiu       $v0, $a0, -0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967263));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7eb4) {
            ctx->pc = 0x3A7F04u;
            goto label_3a7f04;
        }
    }
    ctx->pc = 0x3A7EBCu;
    // 0x3a7ebc: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x3A7EBCu;
    {
        const bool branch_taken_0x3a7ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7EBCu;
        // 0x3a7ec0: 0x2403005d  addiu       $v1, $zero, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7ebc) {
            ctx->pc = 0x3A7F34u;
            goto label_3a7f34;
        }
    }
    ctx->pc = 0x3A7EC4u;
label_3a7ec4:
    // 0x3a7ec4: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x3a7ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x3a7ec8: 0x10820014  beq         $a0, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3A7EC8u;
    {
        const bool branch_taken_0x3a7ec8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A7ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7EC8u;
        // 0x3a7ecc: 0x28820043  slti        $v0, $a0, 0x43 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)67) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7ec8) {
            ctx->pc = 0x3A7F1Cu;
            goto label_3a7f1c;
        }
    }
    ctx->pc = 0x3A7ED0u;
    // 0x3a7ed0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A7ED0u;
    {
        const bool branch_taken_0x3a7ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7ED0u;
        // 0x3a7ed4: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7ed0) {
            ctx->pc = 0x3A7EE8u;
            goto label_3a7ee8;
        }
    }
    ctx->pc = 0x3A7ED8u;
    // 0x3a7ed8: 0x1082000c  beq         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3A7ED8u;
    {
        const bool branch_taken_0x3a7ed8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A7EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7ED8u;
        // 0x3a7edc: 0x2482ffdf  addiu       $v0, $a0, -0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967263));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7ed8) {
            ctx->pc = 0x3A7F0Cu;
            goto label_3a7f0c;
        }
    }
    ctx->pc = 0x3A7EE0u;
    // 0x3a7ee0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3A7EE0u;
    {
        const bool branch_taken_0x3a7ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7EE0u;
        // 0x3a7ee4: 0x2403005d  addiu       $v1, $zero, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7ee0) {
            ctx->pc = 0x3A7F34u;
            goto label_3a7f34;
        }
    }
    ctx->pc = 0x3A7EE8u;
label_3a7ee8:
    // 0x3a7ee8: 0x2402004a  addiu       $v0, $zero, 0x4A
    ctx->pc = 0x3a7ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x3a7eec: 0x1082000d  beq         $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3A7EECu;
    {
        const bool branch_taken_0x3a7eec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A7EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7EECu;
        // 0x3a7ef0: 0x2482ffdf  addiu       $v0, $a0, -0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967263));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7eec) {
            ctx->pc = 0x3A7F24u;
            goto label_3a7f24;
        }
    }
    ctx->pc = 0x3A7EF4u;
    // 0x3a7ef4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3A7EF4u;
    {
        const bool branch_taken_0x3a7ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7EF4u;
        // 0x3a7ef8: 0x2403005d  addiu       $v1, $zero, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7ef4) {
            ctx->pc = 0x3A7F34u;
            goto label_3a7f34;
        }
    }
    ctx->pc = 0x3A7EFCu;
label_3a7efc:
    // 0x3a7efc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3A7EFCu;
    {
        const bool branch_taken_0x3a7efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7EFCu;
        // 0x3a7f00: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7efc) {
            ctx->pc = 0x3A7F44u;
            goto label_3a7f44;
        }
    }
    ctx->pc = 0x3A7F04u;
label_3a7f04:
    // 0x3a7f04: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3A7F04u;
    {
        const bool branch_taken_0x3a7f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7F04u;
        // 0x3a7f08: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7f04) {
            ctx->pc = 0x3A7F44u;
            goto label_3a7f44;
        }
    }
    ctx->pc = 0x3A7F0Cu;
label_3a7f0c:
    // 0x3a7f0c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3A7F0Cu;
    {
        const bool branch_taken_0x3a7f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7F0Cu;
        // 0x3a7f10: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7f0c) {
            ctx->pc = 0x3A7F44u;
            goto label_3a7f44;
        }
    }
    ctx->pc = 0x3A7F14u;
label_3a7f14:
    // 0x3a7f14: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3A7F14u;
    {
        const bool branch_taken_0x3a7f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7F14u;
        // 0x3a7f18: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7f14) {
            ctx->pc = 0x3A7F44u;
            goto label_3a7f44;
        }
    }
    ctx->pc = 0x3A7F1Cu;
label_3a7f1c:
    // 0x3a7f1c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3A7F1Cu;
    {
        const bool branch_taken_0x3a7f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7F1Cu;
        // 0x3a7f20: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7f1c) {
            ctx->pc = 0x3A7F44u;
            goto label_3a7f44;
        }
    }
    ctx->pc = 0x3A7F24u;
label_3a7f24:
    // 0x3a7f24: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3A7F24u;
    {
        const bool branch_taken_0x3a7f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7F24u;
        // 0x3a7f28: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7f24) {
            ctx->pc = 0x3A7F44u;
            goto label_3a7f44;
        }
    }
    ctx->pc = 0x3A7F2Cu;
label_3a7f2c:
    // 0x3a7f2c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3A7F2Cu;
    {
        const bool branch_taken_0x3a7f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7F2Cu;
        // 0x3a7f30: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7f2c) {
            ctx->pc = 0x3A7F44u;
            goto label_3a7f44;
        }
    }
    ctx->pc = 0x3A7F34u;
label_3a7f34:
    // 0x3a7f34: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x3a7f34u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3a7f38: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x3a7f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3a7f3c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x3a7f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3a7f40: 0x43200a  movz        $a0, $v0, $v1
    ctx->pc = 0x3a7f40u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_3a7f44:
    // 0x3a7f44: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x3a7f44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x3a7f48: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3a7f48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3a7f4c: 0x1252818  mult        $a1, $t1, $a1
    ctx->pc = 0x3a7f4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3a7f50: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3a7f50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3a7f54: 0x2463a7e0  addiu       $v1, $v1, -0x5820
    ctx->pc = 0x3a7f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944736));
    // 0x3a7f58: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3a7f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3a7f5c: 0x2442a630  addiu       $v0, $v0, -0x59D0
    ctx->pc = 0x3a7f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944304));
    // 0x3a7f60: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3a7f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3a7f64: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3a7f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3a7f68: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3a7f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a7f6c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3a7f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3a7f70: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x3a7f70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x3a7f74: 0x1040ff8e  beqz        $v0, . + 4 + (-0x72 << 2)
    ctx->pc = 0x3A7F74u;
    {
        const bool branch_taken_0x3a7f74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7F74u;
        // 0x3a7f78: 0x8c890000  lw          $t1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7f74) {
            ctx->pc = 0x3A7DB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a7db0;
        }
    }
    ctx->pc = 0x3A7F7Cu;
    // 0x3a7f7c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3a7f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3a7f80: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a7f80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a7f84: 0x2442f610  addiu       $v0, $v0, -0x9F0
    ctx->pc = 0x3a7f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964752));
    // 0x3a7f88: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3a7f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3a7f8c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3a7f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a7f90: 0x800008  jr          $a0
    ctx->pc = 0x3A7F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3A7DB0u: goto label_3a7db0;
            case 0x3A7F98u: goto label_3a7f98;
            case 0x3A7FA8u: goto label_3a7fa8;
            case 0x3A7FBCu: goto label_3a7fbc;
            case 0x3A7FC8u: goto label_3a7fc8;
            case 0x3A7FF0u: goto label_3a7ff0;
            case 0x3A7FF4u: goto label_3a7ff4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A7F90u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3A7F98u;
label_3a7f98:
    // 0x3a7f98: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x3a7f98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x3a7f9c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x3a7f9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7fa0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x3A7FA0u;
    {
        const bool branch_taken_0x3a7fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7FA0u;
        // 0x3a7fa4: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7fa0) {
            ctx->pc = 0x3A8024u;
            goto label_3a8024;
        }
    }
    ctx->pc = 0x3A7FA8u;
label_3a7fa8:
    // 0x3a7fa8: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x3a7fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x3a7fac: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x3a7facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3a7fb0: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x3a7fb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3a7fb4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x3A7FB4u;
    {
        const bool branch_taken_0x3a7fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7FB4u;
        // 0x3a7fb8: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7fb4) {
            ctx->pc = 0x3A8024u;
            goto label_3a8024;
        }
    }
    ctx->pc = 0x3A7FBCu;
label_3a7fbc:
    // 0x3a7fbc: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x3a7fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x3a7fc0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3A7FC0u;
    {
        const bool branch_taken_0x3a7fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7FC0u;
        // 0x3a7fc4: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7fc0) {
            ctx->pc = 0x3A7FD8u;
            goto label_3a7fd8;
        }
    }
    ctx->pc = 0x3A7FC8u;
label_3a7fc8:
    // 0x3a7fc8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a7fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a7fcc: 0xf01023  subu        $v0, $a3, $s0
    ctx->pc = 0x3a7fccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
    // 0x3a7fd0: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x3a7fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x3a7fd4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x3a7fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_3a7fd8:
    // 0x3a7fd8: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x3a7fd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3a7fdc: 0x90e40001  lbu         $a0, 0x1($a3)
    ctx->pc = 0x3a7fdcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x3a7fe0: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x3a7fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x3a7fe4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3a7fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3a7fe8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3A7FE8u;
    {
        const bool branch_taken_0x3a7fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7FE8u;
        // 0x3a7fec: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7fe8) {
            ctx->pc = 0x3A8024u;
            goto label_3a8024;
        }
    }
    ctx->pc = 0x3A7FF0u;
label_3a7ff0:
    // 0x3a7ff0: 0x25070001  addiu       $a3, $t0, 0x1
    ctx->pc = 0x3a7ff0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_3a7ff4:
    // 0x3a7ff4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3a7ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3a7ff8: 0xd4102b  sltu        $v0, $a2, $s4
    ctx->pc = 0x3a7ff8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x3a7ffc: 0x1440ff9e  bnez        $v0, . + 4 + (-0x62 << 2)
    ctx->pc = 0x3A7FFCu;
    {
        const bool branch_taken_0x3a7ffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A8000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7FFCu;
        // 0x3a8000: 0x2061021  addu        $v0, $s0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7ffc) {
            ctx->pc = 0x3A7E78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a7e78;
        }
    }
    ctx->pc = 0x3A8004u;
    // 0x3a8004: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3A8004u;
    {
        const bool branch_taken_0x3a8004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8004u;
        // 0x3a8008: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8004) {
            ctx->pc = 0x3A8024u;
            goto label_3a8024;
        }
    }
    ctx->pc = 0x3A800Cu;
label_3a800c:
    // 0x3a800c: 0x52000005  beql        $s0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A800Cu;
    {
        const bool branch_taken_0x3a800c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a800c) {
            ctx->pc = 0x3A8010u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A800Cu;
            // 0x3a8010: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A8024u;
            goto label_3a8024;
        }
    }
    ctx->pc = 0x3A8014u;
    // 0x3a8014: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x3a8014u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3a8018: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x3a8018u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x3a801c: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x3a801cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3a8020: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3a8020u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3a8024:
    // 0x3a8024: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3a8024u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3a8028: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3a8028u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3a802c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3a802cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3a8030: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3a8030u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a8034: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x3a8034u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a8038: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a8038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a803c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A803Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A8040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A803Cu;
        // 0x3a8040: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A803Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A8044u;
    // 0x3a8044: 0x0  nop
    ctx->pc = 0x3a8044u;
    // NOP
    ctx->pc = 0x3a8048u;
}
