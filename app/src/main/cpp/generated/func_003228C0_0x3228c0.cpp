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

// Function: func_003228C0
// Address: 0x3228c0 - 0x322978
void func_003228C0_0x3228c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003228C0_0x3228c0");
#endif

    ctx->pc = 0x3228c0u;

    // 0x3228c0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x3228c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x3228c4: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x3228c4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3228c8: 0x244cb830  addiu       $t4, $v0, -0x47D0
    ctx->pc = 0x3228c8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948912));
    // 0x3228cc: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x3228ccu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3228d0: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x3228d0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EB830u));
    // 0x3228d4: 0xa4840  sll         $t1, $t2, 1
    ctx->pc = 0x3228d4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x3228d8: 0x3c0b003f  lui         $t3, 0x3F
    ctx->pc = 0x3228d8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)63 << 16));
    // 0x3228dc: 0x256bb810  addiu       $t3, $t3, -0x47F0
    ctx->pc = 0x3228dcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294948880));
    // 0x3228e0: 0x1695821  addu        $t3, $t3, $t1
    ctx->pc = 0x3228e0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x3228e4: 0x2465000f  addiu       $a1, $v1, 0xF
    ctx->pc = 0x3228e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x3228e8: 0x28640000  slti        $a0, $v1, 0x0
    ctx->pc = 0x3228e8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x3228ec: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3228ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3228f0: 0xa4100b  movn        $v0, $a1, $a0
    ctx->pc = 0x3228f0u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x3228f4: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x3228f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x3228f8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3228f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3228fc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x3228fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x322900: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x322900u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x322904: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x322904u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x322908: 0x24a5b710  addiu       $a1, $a1, -0x48F0
    ctx->pc = 0x322908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948624));
    // 0x32290c: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x32290cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x322910: 0x15a00007  bnez        $t5, . + 4 + (0x7 << 2)
    ctx->pc = 0x322910u;
    {
        const bool branch_taken_0x322910 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x322914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322910u;
        // 0x322914: 0xad830000  sw          $v1, 0x0($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322910) {
            ctx->pc = 0x322930u;
            goto label_322930;
        }
    }
    ctx->pc = 0x322918u;
    // 0x322918: 0x95620000  lhu         $v0, 0x0($t3)
    ctx->pc = 0x322918u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x32291c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x32291cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x322920: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x322920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x322924: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x322924u;
    {
        const bool branch_taken_0x322924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x322928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322924u;
        // 0x322928: 0xa5620000  sh          $v0, 0x0($t3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322924) {
            ctx->pc = 0x322938u;
            goto label_322938;
        }
    }
    ctx->pc = 0x32292Cu;
    // 0x32292c: 0x0  nop
    ctx->pc = 0x32292cu;
    // NOP
label_322930:
    // 0x322930: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x322930u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x322934: 0xa4840  sll         $t1, $t2, 1
    ctx->pc = 0x322934u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
label_322938:
    // 0x322938: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x322938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x32293c: 0x2484b810  addiu       $a0, $a0, -0x47F0
    ctx->pc = 0x32293cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948880));
    // 0x322940: 0xa0aa0000  sb          $t2, 0x0($a1)
    ctx->pc = 0x322940u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 10));
    // 0x322944: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x322944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x322948: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x322948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x32294c: 0xa0ad0001  sb          $t5, 0x1($a1)
    ctx->pc = 0x32294cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 13));
    // 0x322950: 0xaca8000c  sw          $t0, 0xC($a1)
    ctx->pc = 0x322950u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 8));
    // 0x322954: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x322954u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
    // 0x322958: 0xaca70008  sw          $a3, 0x8($a1)
    ctx->pc = 0x322958u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 7));
    // 0x32295c: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x32295cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x322960: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x322960u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x322964: 0x3e00008  jr          $ra
    ctx->pc = 0x322964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322964u;
        // 0x322968: 0xa4a20002  sh          $v0, 0x2($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32296Cu;
    // 0x32296c: 0x0  nop
    ctx->pc = 0x32296cu;
    // NOP
    // 0x322970: 0x0  nop
    ctx->pc = 0x322970u;
    // NOP
    // 0x322974: 0x0  nop
    ctx->pc = 0x322974u;
    // NOP
    ctx->pc = 0x322978u;
}
