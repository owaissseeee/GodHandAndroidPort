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

// Function: func_001BE950
// Address: 0x1be950 - 0x1bea18
void func_001BE950_0x1be950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001BE950_0x1be950");
#endif

    switch (ctx->pc) {
        case 0x1be950u: goto label_1be950;
        case 0x1be954u: goto label_1be954;
        case 0x1be958u: goto label_1be958;
        case 0x1be95cu: goto label_1be95c;
        case 0x1be960u: goto label_1be960;
        case 0x1be964u: goto label_1be964;
        case 0x1be968u: goto label_1be968;
        case 0x1be96cu: goto label_1be96c;
        case 0x1be970u: goto label_1be970;
        case 0x1be974u: goto label_1be974;
        case 0x1be978u: goto label_1be978;
        case 0x1be97cu: goto label_1be97c;
        case 0x1be980u: goto label_1be980;
        case 0x1be984u: goto label_1be984;
        case 0x1be988u: goto label_1be988;
        case 0x1be98cu: goto label_1be98c;
        case 0x1be990u: goto label_1be990;
        case 0x1be994u: goto label_1be994;
        case 0x1be998u: goto label_1be998;
        case 0x1be99cu: goto label_1be99c;
        case 0x1be9a0u: goto label_1be9a0;
        case 0x1be9a4u: goto label_1be9a4;
        case 0x1be9a8u: goto label_1be9a8;
        case 0x1be9acu: goto label_1be9ac;
        case 0x1be9b0u: goto label_1be9b0;
        case 0x1be9b4u: goto label_1be9b4;
        case 0x1be9b8u: goto label_1be9b8;
        case 0x1be9bcu: goto label_1be9bc;
        case 0x1be9c0u: goto label_1be9c0;
        case 0x1be9c4u: goto label_1be9c4;
        case 0x1be9c8u: goto label_1be9c8;
        case 0x1be9ccu: goto label_1be9cc;
        case 0x1be9d0u: goto label_1be9d0;
        case 0x1be9d4u: goto label_1be9d4;
        case 0x1be9d8u: goto label_1be9d8;
        case 0x1be9dcu: goto label_1be9dc;
        case 0x1be9e0u: goto label_1be9e0;
        case 0x1be9e4u: goto label_1be9e4;
        case 0x1be9e8u: goto label_1be9e8;
        case 0x1be9ecu: goto label_1be9ec;
        case 0x1be9f0u: goto label_1be9f0;
        case 0x1be9f4u: goto label_1be9f4;
        case 0x1be9f8u: goto label_1be9f8;
        case 0x1be9fcu: goto label_1be9fc;
        case 0x1bea00u: goto label_1bea00;
        case 0x1bea04u: goto label_1bea04;
        case 0x1bea08u: goto label_1bea08;
        case 0x1bea0cu: goto label_1bea0c;
        case 0x1bea10u: goto label_1bea10;
        case 0x1bea14u: goto label_1bea14;
        default: break;
    }

    ctx->pc = 0x1be950u;

label_1be950:
    // 0x1be950: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1be950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1be954:
    // 0x1be954: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1be954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1be958:
    // 0x1be958: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1be958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1be95c:
    // 0x1be95c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1be95cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1be960:
    // 0x1be960: 0xc06ddac  jal         func_1B76B0
label_1be964:
    if (ctx->pc == 0x1BE964u) {
        ctx->pc = 0x1BE964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE960u;
        // 0x1be964: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE968u;
        goto label_1be968;
    }
    ctx->pc = 0x1BE960u;
    SET_GPR_U32(ctx, 31, 0x1BE968u);
    ctx->pc = 0x1BE964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE960u;
    // 0x1be964: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76B0u, 0x1BE960u, 0x1BE968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE968u;
label_1be968:
    // 0x1be968: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_1be96c:
    if (ctx->pc == 0x1BE96Cu) {
        ctx->pc = 0x1BE96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE968u;
        // 0x1be96c: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE970u;
        goto label_1be970;
    }
    ctx->pc = 0x1BE968u;
    {
        const bool branch_taken_0x1be968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE968u;
        // 0x1be96c: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be968) {
            ctx->pc = 0x1BEA04u;
            goto label_1bea04;
        }
    }
    ctx->pc = 0x1BE970u;
label_1be970:
    // 0x1be970: 0x920302f4  lbu         $v1, 0x2F4($s0)
    ctx->pc = 0x1be970u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_1be974:
    // 0x1be974: 0x2446de08  addiu       $a2, $v0, -0x21F8
    ctx->pc = 0x1be974u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958600));
label_1be978:
    // 0x1be978: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1be978u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1be97c:
    // 0x1be97c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1be97cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1be980:
    // 0x1be980: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x1be980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1be984:
    // 0x1be984: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x1be984u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_1be988:
    // 0x1be988: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_1be98c:
    if (ctx->pc == 0x1BE98Cu) {
        ctx->pc = 0x1BE98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE988u;
        // 0x1be98c: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE990u;
        goto label_1be990;
    }
    ctx->pc = 0x1BE988u;
    {
        const bool branch_taken_0x1be988 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1BE98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE988u;
        // 0x1be98c: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be988) {
            ctx->pc = 0x1BE9B4u;
            goto label_1be9b4;
        }
    }
    ctx->pc = 0x1BE990u;
label_1be990:
    // 0x1be990: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x1be990u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_1be994:
    // 0x1be994: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1be994u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1be998:
    // 0x1be998: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1be998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1be99c:
    // 0x1be99c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1be99cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1be9a0:
    // 0x1be9a0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1be9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1be9a4:
    // 0x1be9a4: 0xdc71fff8  ld          $s1, -0x8($v1)
    ctx->pc = 0x1be9a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_1be9a8:
    // 0x1be9a8: 0x11303f  dsra32      $a2, $s1, 0
    ctx->pc = 0x1be9a8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 17) >> (32 + 0));
label_1be9ac:
    // 0x1be9ac: 0x10000004  b           . + 4 + (0x4 << 2)
label_1be9b0:
    if (ctx->pc == 0x1BE9B0u) {
        ctx->pc = 0x1BE9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE9ACu;
        // 0x1be9b0: 0x2503de08  addiu       $v1, $t0, -0x21F8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958600));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE9B4u;
        goto label_1be9b4;
    }
    ctx->pc = 0x1BE9ACu;
    {
        const bool branch_taken_0x1be9ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE9ACu;
        // 0x1be9b0: 0x2503de08  addiu       $v1, $t0, -0x21F8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be9ac) {
            ctx->pc = 0x1BE9C0u;
            goto label_1be9c0;
        }
    }
    ctx->pc = 0x1BE9B4u;
label_1be9b4:
    // 0x1be9b4: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1be9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1be9b8:
    // 0x1be9b8: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1be9b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1be9bc:
    // 0x1be9bc: 0x2503de08  addiu       $v1, $t0, -0x21F8
    ctx->pc = 0x1be9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958600));
label_1be9c0:
    // 0x1be9c0: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x1be9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_1be9c4:
    // 0x1be9c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1be9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1be9c8:
    // 0x1be9c8: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_1be9cc:
    if (ctx->pc == 0x1BE9CCu) {
        ctx->pc = 0x1BE9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE9C8u;
        // 0x1be9cc: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE9D0u;
        goto label_1be9d0;
    }
    ctx->pc = 0x1BE9C8u;
    {
        const bool branch_taken_0x1be9c8 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1BE9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE9C8u;
        // 0x1be9cc: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be9c8) {
            ctx->pc = 0x1BE9E4u;
            goto label_1be9e4;
        }
    }
    ctx->pc = 0x1BE9D0u;
label_1be9d0:
    // 0x1be9d0: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x1be9d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_1be9d4:
    // 0x1be9d4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1be9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1be9d8:
    // 0x1be9d8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1be9d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_1be9dc:
    // 0x1be9dc: 0x10000002  b           . + 4 + (0x2 << 2)
label_1be9e0:
    if (ctx->pc == 0x1BE9E0u) {
        ctx->pc = 0x1BE9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE9DCu;
        // 0x1be9e0: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE9E4u;
        goto label_1be9e4;
    }
    ctx->pc = 0x1BE9DCu;
    {
        const bool branch_taken_0x1be9dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE9DCu;
        // 0x1be9e0: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be9dc) {
            ctx->pc = 0x1BE9E8u;
            goto label_1be9e8;
        }
    }
    ctx->pc = 0x1BE9E4u;
label_1be9e4:
    // 0x1be9e4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1be9e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1be9e8:
    // 0x1be9e8: 0xc0f809  jalr        $a2
label_1be9ec:
    if (ctx->pc == 0x1BE9ECu) {
        ctx->pc = 0x1BE9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE9E8u;
        // 0x1be9ec: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE9F0u;
        goto label_1be9f0;
    }
    ctx->pc = 0x1BE9E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1BE9F0u);
        ctx->pc = 0x1BE9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE9E8u;
        // 0x1be9ec: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE9E8u, 0x1BE9F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BE9F0u;
label_1be9f0:
    // 0x1be9f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1be9f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1be9f4:
    // 0x1be9f4: 0xc0aa1fa  jal         func_2A87E8
label_1be9f8:
    if (ctx->pc == 0x1BE9F8u) {
        ctx->pc = 0x1BE9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE9F4u;
        // 0x1be9f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE9FCu;
        goto label_1be9fc;
    }
    ctx->pc = 0x1BE9F4u;
    SET_GPR_U32(ctx, 31, 0x1BE9FCu);
    ctx->pc = 0x1BE9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE9F4u;
    // 0x1be9f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A87E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A87E8u, 0x1BE9F4u, 0x1BE9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE9FCu;
label_1be9fc:
    // 0x1be9fc: 0xc06ddb6  jal         func_1B76D8
label_1bea00:
    if (ctx->pc == 0x1BEA00u) {
        ctx->pc = 0x1BEA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE9FCu;
        // 0x1bea00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEA04u;
        goto label_1bea04;
    }
    ctx->pc = 0x1BE9FCu;
    SET_GPR_U32(ctx, 31, 0x1BEA04u);
    ctx->pc = 0x1BEA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE9FCu;
    // 0x1bea00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76D8u, 0x1BE9FCu, 0x1BEA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEA04u;
label_1bea04:
    // 0x1bea04: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1bea04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1bea08:
    // 0x1bea08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bea08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1bea0c:
    // 0x1bea0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bea0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bea10:
    // 0x1bea10: 0x3e00008  jr          $ra
label_1bea14:
    if (ctx->pc == 0x1BEA14u) {
        ctx->pc = 0x1BEA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEA10u;
        // 0x1bea14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEA18u;
        goto label_fallthrough_0x1bea10;
    }
    ctx->pc = 0x1BEA10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BEA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEA10u;
        // 0x1bea14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BEA10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1bea10:
    ctx->pc = 0x1BEA18u;
}
