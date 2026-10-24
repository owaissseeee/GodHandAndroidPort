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

// Function: func_002C9950
// Address: 0x2c9950 - 0x2c9a90
void func_002C9950_0x2c9950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002C9950_0x2c9950");
#endif

    switch (ctx->pc) {
        case 0x2c9970u: goto label_2c9970;
        case 0x2c9990u: goto label_2c9990;
        case 0x2c9a08u: goto label_2c9a08;
        default: break;
    }

    ctx->pc = 0x2c9950u;

    // 0x2c9950: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x2c9950u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9954: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x2c9954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2c9958: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x2C9958u;
    {
        const bool branch_taken_0x2c9958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9958) {
            ctx->pc = 0x2C9A64u;
            goto label_2c9a64;
        }
    }
    ctx->pc = 0x2C9960u;
    // 0x2c9960: 0x8d420010  lw          $v0, 0x10($t2)
    ctx->pc = 0x2c9960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x2c9964: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x2C9964u;
    {
        const bool branch_taken_0x2c9964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9964) {
            ctx->pc = 0x2C9A64u;
            goto label_2c9a64;
        }
    }
    ctx->pc = 0x2C996Cu;
    // 0x2c996c: 0x0  nop
    ctx->pc = 0x2c996cu;
    // NOP
label_2c9970:
    // 0x2c9970: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2c9970u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9974: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2c9974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2c9978: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2C9978u;
    {
        const bool branch_taken_0x2c9978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C997Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9978u;
        // 0x2c997c: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9978) {
            ctx->pc = 0x2C99ECu;
            goto label_2c99ec;
        }
    }
    ctx->pc = 0x2C9980u;
    // 0x2c9980: 0x254c0014  addiu       $t4, $t2, 0x14
    ctx->pc = 0x2c9980u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), 20));
    // 0x2c9984: 0x240e0024  addiu       $t6, $zero, 0x24
    ctx->pc = 0x2c9984u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2c9988: 0x24690001  addiu       $t1, $v1, 0x1
    ctx->pc = 0x2c9988u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2c998c: 0x0  nop
    ctx->pc = 0x2c998cu;
    // NOP
label_2c9990:
    // 0x2c9990: 0x1833821  addu        $a3, $t4, $v1
    ctx->pc = 0x2c9990u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x2c9994: 0x1893021  addu        $a2, $t4, $t1
    ctx->pc = 0x2c9994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 9)));
    // 0x2c9998: 0x80e80000  lb          $t0, 0x0($a3)
    ctx->pc = 0x2c9998u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2c999c: 0x80c40000  lb          $a0, 0x0($a2)
    ctx->pc = 0x2c999cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2c99a0: 0x10e1818  mult        $v1, $t0, $t6
    ctx->pc = 0x2c99a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2c99a4: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x2c99a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2c99a8: 0x8e2818  mult        $a1, $a0, $t6
    ctx->pc = 0x2c99a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2c99ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c99acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c99b0: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x2c99b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2c99b4: 0x84650014  lh          $a1, 0x14($v1)
    ctx->pc = 0x2c99b4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2c99b8: 0x84820014  lh          $v0, 0x14($a0)
    ctx->pc = 0x2c99b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2c99bc: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x2c99bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2c99c0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C99C0u;
    {
        const bool branch_taken_0x2c99c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C99C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C99C0u;
        // 0x2c99c4: 0x90cb0000  lbu         $t3, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c99c0) {
            ctx->pc = 0x2C99D4u;
            goto label_2c99d4;
        }
    }
    ctx->pc = 0x2C99C8u;
    // 0x2c99c8: 0xa0eb0000  sb          $t3, 0x0($a3)
    ctx->pc = 0x2c99c8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 11));
    // 0x2c99cc: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x2c99ccu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c99d0: 0xa0c80000  sb          $t0, 0x0($a2)
    ctx->pc = 0x2c99d0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 8));
label_2c99d4:
    // 0x2c99d4: 0x8d420010  lw          $v0, 0x10($t2)
    ctx->pc = 0x2c99d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x2c99d8: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x2c99d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c99dc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2c99dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2c99e0: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2c99e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c99e4: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2C99E4u;
    {
        const bool branch_taken_0x2c99e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C99E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C99E4u;
        // 0x2c99e8: 0x24690001  addiu       $t1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c99e4) {
            ctx->pc = 0x2C9990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c9990;
        }
    }
    ctx->pc = 0x2C99ECu;
label_2c99ec:
    // 0x2c99ec: 0x11a0001d  beqz        $t5, . + 4 + (0x1D << 2)
    ctx->pc = 0x2C99ECu;
    {
        const bool branch_taken_0x2c99ec = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C99F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C99ECu;
        // 0x2c99f0: 0x2c620002  sltiu       $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c99ec) {
            ctx->pc = 0x2C9A64u;
            goto label_2c9a64;
        }
    }
    ctx->pc = 0x2C99F4u;
    // 0x2c99f4: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2C99F4u;
    {
        const bool branch_taken_0x2c99f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C99F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C99F4u;
        // 0x2c99f8: 0x2469ffff  addiu       $t1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c99f4) {
            ctx->pc = 0x2C9A5Cu;
            goto label_2c9a5c;
        }
    }
    ctx->pc = 0x2C99FCu;
    // 0x2c99fc: 0x254b0014  addiu       $t3, $t2, 0x14
    ctx->pc = 0x2c99fcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 20));
    // 0x2c9a00: 0x240e0024  addiu       $t6, $zero, 0x24
    ctx->pc = 0x2c9a00u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2c9a04: 0x0  nop
    ctx->pc = 0x2c9a04u;
    // NOP
label_2c9a08:
    // 0x2c9a08: 0x1633821  addu        $a3, $t3, $v1
    ctx->pc = 0x2c9a08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x2c9a0c: 0x1693021  addu        $a2, $t3, $t1
    ctx->pc = 0x2c9a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x2c9a10: 0x80e80000  lb          $t0, 0x0($a3)
    ctx->pc = 0x2c9a10u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2c9a14: 0x80c50000  lb          $a1, 0x0($a2)
    ctx->pc = 0x2c9a14u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2c9a18: 0x10e2018  mult        $a0, $t0, $t6
    ctx->pc = 0x2c9a18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2c9a1c: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x2c9a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2c9a20: 0xae1018  mult        $v0, $a1, $t6
    ctx->pc = 0x2c9a20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2c9a24: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2c9a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2c9a28: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2c9a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c9a2c: 0x84820014  lh          $v0, 0x14($a0)
    ctx->pc = 0x2c9a2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2c9a30: 0x84a30014  lh          $v1, 0x14($a1)
    ctx->pc = 0x2c9a30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x2c9a34: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2c9a34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2c9a38: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C9A38u;
    {
        const bool branch_taken_0x2c9a38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9A38u;
        // 0x2c9a3c: 0x90cc0000  lbu         $t4, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9a38) {
            ctx->pc = 0x2C9A4Cu;
            goto label_2c9a4c;
        }
    }
    ctx->pc = 0x2C9A40u;
    // 0x2c9a40: 0xa0ec0000  sb          $t4, 0x0($a3)
    ctx->pc = 0x2c9a40u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 12));
    // 0x2c9a44: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x2c9a44u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c9a48: 0xa0c80000  sb          $t0, 0x0($a2)
    ctx->pc = 0x2c9a48u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 8));
label_2c9a4c:
    // 0x2c9a4c: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x2c9a4cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9a50: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x2c9a50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2c9a54: 0x1040ffec  beqz        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2C9A54u;
    {
        const bool branch_taken_0x2c9a54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9A54u;
        // 0x2c9a58: 0x2469ffff  addiu       $t1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9a54) {
            ctx->pc = 0x2C9A08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c9a08;
        }
    }
    ctx->pc = 0x2C9A5Cu;
label_2c9a5c:
    // 0x2c9a5c: 0x55a0ffc4  bnel        $t5, $zero, . + 4 + (-0x3C << 2)
    ctx->pc = 0x2C9A5Cu;
    {
        const bool branch_taken_0x2c9a5c = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c9a5c) {
            ctx->pc = 0x2C9A60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9A5Cu;
            // 0x2c9a60: 0x8d420010  lw          $v0, 0x10($t2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C9970u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c9970;
        }
    }
    ctx->pc = 0x2C9A64u;
label_2c9a64:
    // 0x2c9a64: 0x3e00008  jr          $ra
    ctx->pc = 0x2C9A64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C9A64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C9A6Cu;
    // 0x2c9a6c: 0x0  nop
    ctx->pc = 0x2c9a6cu;
    // NOP
    // 0x2c9a70: 0x0  nop
    ctx->pc = 0x2c9a70u;
    // NOP
    // 0x2c9a74: 0x0  nop
    ctx->pc = 0x2c9a74u;
    // NOP
    // 0x2c9a78: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2c9a78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c9a7c: 0x0  nop
    ctx->pc = 0x2c9a7cu;
    // NOP
    // 0x2c9a80: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2c9a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c9a84: 0x0  nop
    ctx->pc = 0x2c9a84u;
    // NOP
    // 0x2c9a88: 0x0  nop
    ctx->pc = 0x2c9a88u;
    // NOP
    // 0x2c9a8c: 0x0  nop
    ctx->pc = 0x2c9a8cu;
    // NOP
    ctx->pc = 0x2c9a90u;
}
