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

// Function: SJUNI_Create
// Address: 0x33a1e8 - 0x33a2d0
void SJUNI_Create_0x33a1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SJUNI_Create_0x33a1e8");
#endif

    switch (ctx->pc) {
        case 0x33a220u: goto label_33a220;
        case 0x33a2b8u: goto label_33a2b8;
        default: break;
    }

    ctx->pc = 0x33a1e8u;

    // 0x33a1e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33a1e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33a1ec: 0x3c08003e  lui         $t0, 0x3E
    ctx->pc = 0x33a1ecu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)62 << 16));
    // 0x33a1f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33a1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33a1f4: 0x25037ff0  addiu       $v1, $t0, 0x7FF0
    ctx->pc = 0x33a1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 32752));
    // 0x33a1f8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x33a1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x33a1fc: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x33a1fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a200: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x33a200u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a204: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x33a204u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a208: 0x80620004  lb          $v0, 0x4($v1)
    ctx->pc = 0x33a208u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x3E7FF4u));
    // 0x33a20c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x33A20Cu;
    {
        const bool branch_taken_0x33a20c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A20Cu;
        // 0x33a210: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a20c) {
            ctx->pc = 0x33A244u;
            goto label_33a244;
        }
    }
    ctx->pc = 0x33A214u;
    // 0x33a214: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x33a214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x33a218: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x33a218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x33a21c: 0x0  nop
    ctx->pc = 0x33a21cu;
    // NOP
label_33a220:
    // 0x33a220: 0x28820040  slti        $v0, $a0, 0x40
    ctx->pc = 0x33a220u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x33a224: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x33A224u;
    {
        const bool branch_taken_0x33a224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A224u;
        // 0x33a228: 0x24630030  addiu       $v1, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a224) {
            ctx->pc = 0x33A244u;
            goto label_33a244;
        }
    }
    ctx->pc = 0x33A22Cu;
    // 0x33a22c: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x33a22cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33a230: 0x0  nop
    ctx->pc = 0x33a230u;
    // NOP
    // 0x33a234: 0x0  nop
    ctx->pc = 0x33a234u;
    // NOP
    // 0x33a238: 0x0  nop
    ctx->pc = 0x33a238u;
    // NOP
    // 0x33a23c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x33A23Cu;
    {
        const bool branch_taken_0x33a23c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33a23c) {
            ctx->pc = 0x33A240u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33A23Cu;
            // 0x33a240: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33A220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33a220;
        }
    }
    ctx->pc = 0x33A244u;
label_33a244:
    // 0x33a244: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x33a244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x33a248: 0x1083001c  beq         $a0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x33A248u;
    {
        const bool branch_taken_0x33a248 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x33A24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A248u;
        // 0x33a24c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a248) {
            ctx->pc = 0x33A2BCu;
            goto label_33a2bc;
        }
    }
    ctx->pc = 0x33A250u;
    // 0x33a250: 0x48040  sll         $s0, $a0, 1
    ctx->pc = 0x33a250u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x33a254: 0x25037ff0  addiu       $v1, $t0, 0x7FF0
    ctx->pc = 0x33a254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 32752));
    // 0x33a258: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x33a258u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x33a25c: 0x24e4000f  addiu       $a0, $a3, 0xF
    ctx->pc = 0x33a25cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 15));
    // 0x33a260: 0x28e20000  slti        $v0, $a3, 0x0
    ctx->pc = 0x33a260u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x33a264: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x33a264u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x33a268: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x33a268u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x33a26c: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x33a26cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x33a270: 0x82380b  movn        $a3, $a0, $v0
    ctx->pc = 0x33a270u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 4));
    // 0x33a274: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33a274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33a278: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x33a278u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x33a27c: 0x3c060034  lui         $a2, 0x34
    ctx->pc = 0x33a27cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52 << 16));
    // 0x33a280: 0x24637fb8  addiu       $v1, $v1, 0x7FB8
    ctx->pc = 0x33a280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32696));
    // 0x33a284: 0x24a55ba8  addiu       $a1, $a1, 0x5BA8
    ctx->pc = 0x33a284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23464));
    // 0x33a288: 0x73903  sra         $a3, $a3, 4
    ctx->pc = 0x33a288u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 4));
    // 0x33a28c: 0x24c6a028  addiu       $a2, $a2, -0x5FD8
    ctx->pc = 0x33a28cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942760));
    // 0x33a290: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x33a290u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x33a294: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33a294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a298: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x33a298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x33a29c: 0xa2090005  sb          $t1, 0x5($s0)
    ctx->pc = 0x33a29cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 9));
    // 0x33a2a0: 0xae050008  sw          $a1, 0x8($s0)
    ctx->pc = 0x33a2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
    // 0x33a2a4: 0xae0a000c  sw          $t2, 0xC($s0)
    ctx->pc = 0x33a2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 10));
    // 0x33a2a8: 0xae070010  sw          $a3, 0x10($s0)
    ctx->pc = 0x33a2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
    // 0x33a2ac: 0xae060028  sw          $a2, 0x28($s0)
    ctx->pc = 0x33a2acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 6));
    // 0x33a2b0: 0xc0ce93e  jal         func_33A4F8
    ctx->pc = 0x33A2B0u;
    SET_GPR_U32(ctx, 31, 0x33A2B8u);
    ctx->pc = 0x33A2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A2B0u;
    // 0x33a2b4: 0xae10002c  sw          $s0, 0x2C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33A4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A4F8u, 0x33A2B0u, 0x33A2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A2B8u;
label_33a2b8:
    // 0x33a2b8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x33a2b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33a2bc:
    // 0x33a2bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33a2bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33a2c0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x33a2c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33a2c4: 0x3e00008  jr          $ra
    ctx->pc = 0x33A2C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33A2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A2C4u;
        // 0x33a2c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A2C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33A2CCu;
    // 0x33a2cc: 0x0  nop
    ctx->pc = 0x33a2ccu;
    // NOP
    ctx->pc = 0x33a2d0u;
}
