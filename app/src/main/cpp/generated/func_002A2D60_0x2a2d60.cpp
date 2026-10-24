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

// Function: func_002A2D60
// Address: 0x2a2d60 - 0x2a2ed0
void func_002A2D60_0x2a2d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002A2D60_0x2a2d60");
#endif

    switch (ctx->pc) {
        case 0x2a2dd0u: goto label_2a2dd0;
        case 0x2a2de8u: goto label_2a2de8;
        case 0x2a2e18u: goto label_2a2e18;
        case 0x2a2e94u: goto label_2a2e94;
        case 0x2a2eb0u: goto label_2a2eb0;
        default: break;
    }

    ctx->pc = 0x2a2d60u;

label_2a2d60:
    // 0x2a2d60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a2d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2a2d64: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x2a2d64u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2d68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a2d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a2d6c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2a2d6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2d70: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2a2d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2a2d74: 0x1521021  addu        $v0, $t2, $s2
    ctx->pc = 0x2a2d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 18)));
    // 0x2a2d78: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a2d78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2d7c: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x2a2d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2a2d80: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2a2d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2a2d84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a2d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a2d88: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2a2d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2a2d8c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2a2d8cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2a2d90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a2d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a2d94: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2a2d94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2a2d98: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2a2d98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2d9c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2a2d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2a2da0: 0x123080  sll         $a2, $s2, 2
    ctx->pc = 0x2a2da0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2a2da4: 0x122840  sll         $a1, $s2, 1
    ctx->pc = 0x2a2da4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x2a2da8: 0xa2080  sll         $a0, $t2, 2
    ctx->pc = 0x2a2da8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x2a2dac: 0xa1840  sll         $v1, $t2, 1
    ctx->pc = 0x2a2dacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x2a2db0: 0x84490000  lh          $t1, 0x0($v0)
    ctx->pc = 0x2a2db0u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a2db4: 0xd33021  addu        $a2, $a2, $s3
    ctx->pc = 0x2a2db4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x2a2db8: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x2a2db8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x2a2dbc: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x2a2dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x2a2dc0: 0x714021  addu        $t0, $v1, $s1
    ctx->pc = 0x2a2dc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2a2dc4: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x2a2dc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2dc8: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x2a2dc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2dcc: 0x0  nop
    ctx->pc = 0x2a2dccu;
    // NOP
label_2a2dd0:
    // 0x2a2dd0: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x2a2dd0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2a2dd4: 0x49102a  slt         $v0, $v0, $t1
    ctx->pc = 0x2a2dd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x2a2dd8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2A2DD8u;
    {
        const bool branch_taken_0x2a2dd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2DD8u;
        // 0x2a2ddc: 0x71040  sll         $v0, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2dd8) {
            ctx->pc = 0x2A2E04u;
            goto label_2a2e04;
        }
    }
    ctx->pc = 0x2A2DE0u;
    // 0x2a2de0: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x2a2de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2a2de4: 0x0  nop
    ctx->pc = 0x2a2de4u;
    // NOP
label_2a2de8:
    // 0x2a2de8: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x2a2de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x2a2dec: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2a2decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2a2df0: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x2a2df0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a2df4: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x2a2df4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x2a2df8: 0x49102a  slt         $v0, $v0, $t1
    ctx->pc = 0x2a2df8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x2a2dfc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2A2DFCu;
    {
        const bool branch_taken_0x2a2dfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A2E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2DFCu;
        // 0x2a2e00: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2dfc) {
            ctx->pc = 0x2A2DE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a2de8;
        }
    }
    ctx->pc = 0x2A2E04u;
label_2a2e04:
    // 0x2a2e04: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x2a2e04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2a2e08: 0x122102a  slt         $v0, $t1, $v0
    ctx->pc = 0x2a2e08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a2e0c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A2E0Cu;
    {
        const bool branch_taken_0x2a2e0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2E0Cu;
        // 0x2a2e10: 0x101040  sll         $v0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2e0c) {
            ctx->pc = 0x2A2E34u;
            goto label_2a2e34;
        }
    }
    ctx->pc = 0x2A2E14u;
    // 0x2a2e14: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x2a2e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2a2e18:
    // 0x2a2e18: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x2a2e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x2a2e1c: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x2a2e1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x2a2e20: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x2a2e20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a2e24: 0x24a5fffe  addiu       $a1, $a1, -0x2
    ctx->pc = 0x2a2e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
    // 0x2a2e28: 0x122102a  slt         $v0, $t1, $v0
    ctx->pc = 0x2a2e28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a2e2c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2A2E2Cu;
    {
        const bool branch_taken_0x2a2e2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A2E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2E2Cu;
        // 0x2a2e30: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2e2c) {
            ctx->pc = 0x2A2E18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a2e18;
        }
    }
    ctx->pc = 0x2A2E34u;
label_2a2e34:
    // 0x2a2e34: 0xf0102a  slt         $v0, $a3, $s0
    ctx->pc = 0x2a2e34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2a2e38: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2A2E38u;
    {
        const bool branch_taken_0x2a2e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2e38) {
            ctx->pc = 0x2A2E3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A2E38u;
            // 0x2a2e3c: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A2E7Cu;
            goto label_2a2e7c;
        }
    }
    ctx->pc = 0x2A2E40u;
    // 0x2a2e40: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x2a2e40u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2a2e44: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2a2e44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2a2e48: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x2a2e48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2a2e4c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2a2e4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2a2e50: 0xa5030000  sh          $v1, 0x0($t0)
    ctx->pc = 0x2a2e50u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a2e54: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x2a2e54u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a2e58: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x2a2e58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x2a2e5c: 0x24a5fffe  addiu       $a1, $a1, -0x2
    ctx->pc = 0x2a2e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
    // 0x2a2e60: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2a2e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2a2e64: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2a2e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a2e68: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2a2e68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2a2e6c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x2a2e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x2a2e70: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2a2e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2a2e74: 0x1000ffd6  b           . + 4 + (-0x2A << 2)
    ctx->pc = 0x2A2E74u;
    {
        const bool branch_taken_0x2a2e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2E74u;
        // 0x2a2e78: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2e74) {
            ctx->pc = 0x2A2DD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a2dd0;
        }
    }
    ctx->pc = 0x2A2E7Cu;
label_2a2e7c:
    // 0x2a2e7c: 0x147102a  slt         $v0, $t2, $a3
    ctx->pc = 0x2a2e7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2a2e80: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A2E80u;
    {
        const bool branch_taken_0x2a2e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2E80u;
        // 0x2a2e84: 0x140302d  daddu       $a2, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2e80) {
            ctx->pc = 0x2A2E94u;
            goto label_2a2e94;
        }
    }
    ctx->pc = 0x2A2E88u;
    // 0x2a2e88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a2e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2e8c: 0xc0a8b58  jal         func_2A2D60
    ctx->pc = 0x2A2E8Cu;
    SET_GPR_U32(ctx, 31, 0x2A2E94u);
    ctx->pc = 0x2A2E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2E8Cu;
    // 0x2a2e90: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2D60u;
    goto label_2a2d60;
    ctx->pc = 0x2A2E94u;
label_2a2e94:
    // 0x2a2e94: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x2a2e94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2a2e98: 0xd2102a  slt         $v0, $a2, $s2
    ctx->pc = 0x2a2e98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2a2e9c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A2E9Cu;
    {
        const bool branch_taken_0x2a2e9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2E9Cu;
        // 0x2a2ea0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2e9c) {
            ctx->pc = 0x2A2EB0u;
            goto label_2a2eb0;
        }
    }
    ctx->pc = 0x2A2EA4u;
    // 0x2a2ea4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2a2ea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2ea8: 0xc0a8b58  jal         func_2A2D60
    ctx->pc = 0x2A2EA8u;
    SET_GPR_U32(ctx, 31, 0x2A2EB0u);
    ctx->pc = 0x2A2EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2EA8u;
    // 0x2a2eac: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2D60u;
    goto label_2a2d60;
    ctx->pc = 0x2A2EB0u;
label_2a2eb0:
    // 0x2a2eb0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2a2eb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a2eb4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2a2eb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a2eb8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a2eb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a2ebc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2a2ebcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a2ec0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a2ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a2ec4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A2EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A2EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2EC4u;
        // 0x2a2ec8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2EC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A2ECCu;
    // 0x2a2ecc: 0x0  nop
    ctx->pc = 0x2a2eccu;
    // NOP
    ctx->pc = 0x2a2ed0u;
}
