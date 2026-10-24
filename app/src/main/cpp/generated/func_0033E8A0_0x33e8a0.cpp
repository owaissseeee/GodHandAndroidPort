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

// Function: func_0033E8A0
// Address: 0x33e8a0 - 0x33e9a0
void func_0033E8A0_0x33e8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033E8A0_0x33e8a0");
#endif

    ctx->pc = 0x33e8a0u;

    // 0x33e8a0: 0x28a50010  slti        $a1, $a1, 0x10
    ctx->pc = 0x33e8a0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x33e8a4: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x33e8a4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e8a8: 0x8fad0008  lw          $t5, 0x8($sp)
    ctx->pc = 0x33e8a8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33e8ac: 0x14a0003a  bnez        $a1, . + 4 + (0x3A << 2)
    ctx->pc = 0x33E8ACu;
    {
        const bool branch_taken_0x33e8ac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x33E8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E8ACu;
        // 0x33e8b0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e8ac) {
            ctx->pc = 0x33E998u;
            goto label_33e998;
        }
    }
    ctx->pc = 0x33E8B4u;
    // 0x33e8b4: 0x91830000  lbu         $v1, 0x0($t4)
    ctx->pc = 0x33e8b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x33e8b8: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x33e8b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x33e8bc: 0x91840001  lbu         $a0, 0x1($t4)
    ctx->pc = 0x33e8bcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 1)));
    // 0x33e8c0: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x33e8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x33e8c4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x33e8c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x33e8c8: 0x14850033  bne         $a0, $a1, . + 4 + (0x33 << 2)
    ctx->pc = 0x33E8C8u;
    {
        const bool branch_taken_0x33e8c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x33E8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E8C8u;
        // 0x33e8cc: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e8c8) {
            ctx->pc = 0x33E998u;
            goto label_33e998;
        }
    }
    ctx->pc = 0x33E8D0u;
    // 0x33e8d0: 0x91830002  lbu         $v1, 0x2($t4)
    ctx->pc = 0x33e8d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 2)));
    // 0x33e8d4: 0x91820003  lbu         $v0, 0x3($t4)
    ctx->pc = 0x33e8d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 3)));
    // 0x33e8d8: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x33e8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x33e8dc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33e8dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33e8e0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x33e8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x33e8e4: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x33e8e4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x33e8e8: 0x91830004  lbu         $v1, 0x4($t4)
    ctx->pc = 0x33e8e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x33e8ec: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x33e8ecu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x33e8f0: 0x91820005  lbu         $v0, 0x5($t4)
    ctx->pc = 0x33e8f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 5)));
    // 0x33e8f4: 0xa1220000  sb          $v0, 0x0($t1)
    ctx->pc = 0x33e8f4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x33e8f8: 0x91830006  lbu         $v1, 0x6($t4)
    ctx->pc = 0x33e8f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 6)));
    // 0x33e8fc: 0xa1030000  sb          $v1, 0x0($t0)
    ctx->pc = 0x33e8fcu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x33e900: 0x91840007  lbu         $a0, 0x7($t4)
    ctx->pc = 0x33e900u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 7)));
    // 0x33e904: 0xa1440000  sb          $a0, 0x0($t2)
    ctx->pc = 0x33e904u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x33e908: 0x91820008  lbu         $v0, 0x8($t4)
    ctx->pc = 0x33e908u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x33e90c: 0x9183000a  lbu         $v1, 0xA($t4)
    ctx->pc = 0x33e90cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 10)));
    // 0x33e910: 0x91840009  lbu         $a0, 0x9($t4)
    ctx->pc = 0x33e910u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 9)));
    // 0x33e914: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x33e914u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x33e918: 0x9185000b  lbu         $a1, 0xB($t4)
    ctx->pc = 0x33e918u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 11)));
    // 0x33e91c: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x33e91cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x33e920: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x33e920u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x33e924: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x33e924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x33e928: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x33e928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x33e92c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33e92cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33e930: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x33e930u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
    // 0x33e934: 0x9183000d  lbu         $v1, 0xD($t4)
    ctx->pc = 0x33e934u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 13)));
    // 0x33e938: 0x9182000c  lbu         $v0, 0xC($t4)
    ctx->pc = 0x33e938u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x33e93c: 0x9184000e  lbu         $a0, 0xE($t4)
    ctx->pc = 0x33e93cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 14)));
    // 0x33e940: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x33e940u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x33e944: 0x9185000f  lbu         $a1, 0xF($t4)
    ctx->pc = 0x33e944u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 15)));
    // 0x33e948: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x33e948u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x33e94c: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x33e94cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x33e950: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x33e950u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x33e954: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x33e954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33e958: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x33e958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x33e95c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x33e95cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x33e960: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x33e960u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x33e964: 0x81080000  lb          $t0, 0x0($t0)
    ctx->pc = 0x33e964u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x33e968: 0x55000003  bnel        $t0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x33E968u;
    {
        const bool branch_taken_0x33e968 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x33e968) {
            ctx->pc = 0x33E96Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33E968u;
            // 0x33e96c: 0x81220000  lb          $v0, 0x0($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33E978u;
            goto label_33e978;
        }
    }
    ctx->pc = 0x33E970u;
    // 0x33e970: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33E970u;
    {
        const bool branch_taken_0x33e970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E970u;
        // 0x33e974: 0xada00000  sw          $zero, 0x0($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e970) {
            ctx->pc = 0x33E994u;
            goto label_33e994;
        }
    }
    ctx->pc = 0x33E978u;
label_33e978:
    // 0x33e978: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x33E978u;
    {
        const bool branch_taken_0x33e978 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x33e978) {
            ctx->pc = 0x33E97Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33E978u;
            // 0x33e97c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33E980u;
            goto label_33e980;
        }
    }
    ctx->pc = 0x33E980u;
label_33e980:
    // 0x33e980: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x33e980u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x33e984: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x33e984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x33e988: 0x48001a  div         $zero, $v0, $t0
    ctx->pc = 0x33e988u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x33e98c: 0x1012  mflo        $v0
    ctx->pc = 0x33e98cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x33e990: 0xada20000  sw          $v0, 0x0($t5)
    ctx->pc = 0x33e990u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 2));
label_33e994:
    // 0x33e994: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x33e994u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33e998:
    // 0x33e998: 0x3e00008  jr          $ra
    ctx->pc = 0x33E998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33E9A0u;
}
