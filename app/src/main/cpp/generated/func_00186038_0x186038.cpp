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

// Function: func_00186038
// Address: 0x186038 - 0x186398
void func_00186038_0x186038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00186038_0x186038");
#endif

    switch (ctx->pc) {
        case 0x186214u: goto label_186214;
        case 0x186234u: goto label_186234;
        case 0x186258u: goto label_186258;
        case 0x18626cu: goto label_18626c;
        case 0x186280u: goto label_186280;
        case 0x186294u: goto label_186294;
        case 0x186304u: goto label_186304;
        case 0x186310u: goto label_186310;
        case 0x18631cu: goto label_18631c;
        case 0x18632cu: goto label_18632c;
        case 0x186338u: goto label_186338;
        case 0x186344u: goto label_186344;
        case 0x18636cu: goto label_18636c;
        default: break;
    }

    ctx->pc = 0x186038u;

    // 0x186038: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x186038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x18603c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x18603cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x186040: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x186040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x186044: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x186044u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186048: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x186048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x18604c: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x18604cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x186050: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x186050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x186054: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x186054u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186058: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x186058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x18605c: 0x2e620015  sltiu       $v0, $s3, 0x15
    ctx->pc = 0x18605cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
    // 0x186060: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x186060u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x186064: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x186064u;
    {
        const bool branch_taken_0x186064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x186068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186064u;
        // 0x186068: 0xe7b40090  swc1        $f20, 0x90($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x186064) {
            ctx->pc = 0x186124u;
            goto label_186124;
        }
    }
    ctx->pc = 0x18606Cu;
    // 0x18606c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x18606cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x186070: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x186070u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x186074: 0x24422e60  addiu       $v0, $v0, 0x2E60
    ctx->pc = 0x186074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11872));
    // 0x186078: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x186078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18607c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x18607cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x186080: 0x800008  jr          $a0
    ctx->pc = 0x186080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x186088u: goto label_186088;
            case 0x186090u: goto label_186090;
            case 0x186098u: goto label_186098;
            case 0x1860A0u: goto label_1860a0;
            case 0x1860A8u: goto label_1860a8;
            case 0x1860B0u: goto label_1860b0;
            case 0x1860B8u: goto label_1860b8;
            case 0x1860C0u: goto label_1860c0;
            case 0x1860C8u: goto label_1860c8;
            case 0x1860D0u: goto label_1860d0;
            case 0x1860D8u: goto label_1860d8;
            case 0x1860E0u: goto label_1860e0;
            case 0x1860E8u: goto label_1860e8;
            case 0x1860F0u: goto label_1860f0;
            case 0x1860F8u: goto label_1860f8;
            case 0x186100u: goto label_186100;
            case 0x186108u: goto label_186108;
            case 0x186110u: goto label_186110;
            case 0x186118u: goto label_186118;
            case 0x186120u: goto label_186120;
            case 0x186124u: goto label_186124;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186080u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x186088u;
label_186088:
    // 0x186088: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x186088u;
    {
        const bool branch_taken_0x186088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18608Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186088u;
        // 0x18608c: 0x2410001e  addiu       $s0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186088) {
            ctx->pc = 0x186124u;
            goto label_186124;
        }
    }
    ctx->pc = 0x186090u;
label_186090:
    // 0x186090: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x186090u;
    {
        const bool branch_taken_0x186090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186090u;
        // 0x186094: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186090) {
            ctx->pc = 0x186124u;
            goto label_186124;
        }
    }
    ctx->pc = 0x186098u;
label_186098:
    // 0x186098: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x186098u;
    {
        const bool branch_taken_0x186098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18609Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186098u;
        // 0x18609c: 0x24100007  addiu       $s0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186098) {
            ctx->pc = 0x186124u;
            goto label_186124;
        }
    }
    ctx->pc = 0x1860A0u;
label_1860a0:
    // 0x1860a0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1860A0u;
    {
        const bool branch_taken_0x1860a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1860A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1860A0u;
        // 0x1860a4: 0x24100009  addiu       $s0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1860a0) {
            ctx->pc = 0x186124u;
            goto label_186124;
        }
    }
    ctx->pc = 0x1860A8u;
label_1860a8:
    // 0x1860a8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1860A8u;
    {
        const bool branch_taken_0x1860a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1860ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1860A8u;
        // 0x1860ac: 0x2410000a  addiu       $s0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1860a8) {
            ctx->pc = 0x186124u;
            goto label_186124;
        }
    }
    ctx->pc = 0x1860B0u;
label_1860b0:
    // 0x1860b0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1860B0u;
    {
        const bool branch_taken_0x1860b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1860B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1860B0u;
        // 0x1860b4: 0x2410000b  addiu       $s0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1860b0) {
            ctx->pc = 0x186124u;
            goto label_186124;
        }
    }
    ctx->pc = 0x1860B8u;
label_1860b8:
    // 0x1860b8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1860B8u;
    {
        const bool branch_taken_0x1860b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1860BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1860B8u;
        // 0x1860bc: 0x2410000c  addiu       $s0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1860b8) {
            ctx->pc = 0x186124u;
            goto label_186124;
        }
    }
    ctx->pc = 0x1860C0u;
label_1860c0:
    // 0x1860c0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1860C0u;
    {
        const bool branch_taken_0x1860c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1860C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1860C0u;
        // 0x1860c4: 0x24100023  addiu       $s0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1860c0) {
            ctx->pc = 0x186124u;
            goto label_186124;
        }
    }
    ctx->pc = 0x1860C8u;
label_1860c8:
    // 0x1860c8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1860C8u;
    {
        const bool branch_taken_0x1860c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1860CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1860C8u;
        // 0x1860cc: 0x24100017  addiu       $s0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1860c8) {
            ctx->pc = 0x186124u;
            goto label_186124;
        }
    }
    ctx->pc = 0x1860D0u;
label_1860d0:
    // 0x1860d0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1860D0u;
    {
        const bool branch_taken_0x1860d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1860D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1860D0u;
        // 0x1860d4: 0x24100018  addiu       $s0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1860d0) {
            ctx->pc = 0x186124u;
            goto label_186124;
        }
    }
    ctx->pc = 0x1860D8u;
label_1860d8:
    // 0x1860d8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1860D8u;
    {
        const bool branch_taken_0x1860d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1860DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1860D8u;
        // 0x1860dc: 0x24100019  addiu       $s0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1860d8) {
            ctx->pc = 0x186124u;
            goto label_186124;
        }
    }
    ctx->pc = 0x1860E0u;
label_1860e0:
    // 0x1860e0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1860E0u;
    {
        const bool branch_taken_0x1860e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1860E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1860E0u;
        // 0x1860e4: 0x2410001a  addiu       $s0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1860e0) {
            ctx->pc = 0x186124u;
            goto label_186124;
        }
    }
    ctx->pc = 0x1860E8u;
label_1860e8:
    // 0x1860e8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1860E8u;
    {
        const bool branch_taken_0x1860e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1860ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1860E8u;
        // 0x1860ec: 0x2410001f  addiu       $s0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1860e8) {
            ctx->pc = 0x186124u;
            goto label_186124;
        }
    }
    ctx->pc = 0x1860F0u;
label_1860f0:
    // 0x1860f0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1860F0u;
    {
        const bool branch_taken_0x1860f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1860F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1860F0u;
        // 0x1860f4: 0x24100021  addiu       $s0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1860f0) {
            ctx->pc = 0x186124u;
            goto label_186124;
        }
    }
    ctx->pc = 0x1860F8u;
label_1860f8:
    // 0x1860f8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1860F8u;
    {
        const bool branch_taken_0x1860f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1860FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1860F8u;
        // 0x1860fc: 0x24100020  addiu       $s0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1860f8) {
            ctx->pc = 0x186124u;
            goto label_186124;
        }
    }
    ctx->pc = 0x186100u;
label_186100:
    // 0x186100: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x186100u;
    {
        const bool branch_taken_0x186100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186100u;
        // 0x186104: 0x24100022  addiu       $s0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186100) {
            ctx->pc = 0x186124u;
            goto label_186124;
        }
    }
    ctx->pc = 0x186108u;
label_186108:
    // 0x186108: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x186108u;
    {
        const bool branch_taken_0x186108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18610Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186108u;
        // 0x18610c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186108) {
            ctx->pc = 0x186124u;
            goto label_186124;
        }
    }
    ctx->pc = 0x186110u;
label_186110:
    // 0x186110: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x186110u;
    {
        const bool branch_taken_0x186110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186110u;
        // 0x186114: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186110) {
            ctx->pc = 0x186124u;
            goto label_186124;
        }
    }
    ctx->pc = 0x186118u;
label_186118:
    // 0x186118: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x186118u;
    {
        const bool branch_taken_0x186118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18611Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186118u;
        // 0x18611c: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186118) {
            ctx->pc = 0x186124u;
            goto label_186124;
        }
    }
    ctx->pc = 0x186120u;
label_186120:
    // 0x186120: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x186120u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_186124:
    // 0x186124: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x186124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x186128: 0x12020091  beq         $s0, $v0, . + 4 + (0x91 << 2)
    ctx->pc = 0x186128u;
    {
        const bool branch_taken_0x186128 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x18612Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186128u;
        // 0x18612c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186128) {
            ctx->pc = 0x186370u;
            goto label_186370;
        }
    }
    ctx->pc = 0x186130u;
    // 0x186130: 0x924302b4  lbu         $v1, 0x2B4($s2)
    ctx->pc = 0x186130u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x186134: 0x6000002  bltz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x186134u;
    {
        const bool branch_taken_0x186134 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x186138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186134u;
        // 0x186138: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186134) {
            ctx->pc = 0x186140u;
            goto label_186140;
        }
    }
    ctx->pc = 0x18613Cu;
    // 0x18613c: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x18613cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_186140:
    // 0x186140: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x186140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x186144: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x186144u;
    {
        const bool branch_taken_0x186144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x186148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186144u;
        // 0x186148: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186144) {
            ctx->pc = 0x18615Cu;
            goto label_18615c;
        }
    }
    ctx->pc = 0x18614Cu;
    // 0x18614c: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x18614cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x186150: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x186150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x186154: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x186154u;
    {
        const bool branch_taken_0x186154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186154u;
        // 0x186158: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186154) {
            ctx->pc = 0x186160u;
            goto label_186160;
        }
    }
    ctx->pc = 0x18615Cu;
label_18615c:
    // 0x18615c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18615cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_186160:
    // 0x186160: 0x10400083  beqz        $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x186160u;
    {
        const bool branch_taken_0x186160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x186164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186160u;
        // 0x186164: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186160) {
            ctx->pc = 0x186370u;
            goto label_186370;
        }
    }
    ctx->pc = 0x186168u;
    // 0x186168: 0x924302b4  lbu         $v1, 0x2B4($s2)
    ctx->pc = 0x186168u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x18616c: 0x6000002  bltz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18616Cu;
    {
        const bool branch_taken_0x18616c = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x186170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18616Cu;
        // 0x186170: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18616c) {
            ctx->pc = 0x186178u;
            goto label_186178;
        }
    }
    ctx->pc = 0x186174u;
    // 0x186174: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x186174u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_186178:
    // 0x186178: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x186178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18617c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18617Cu;
    {
        const bool branch_taken_0x18617c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x186180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18617Cu;
        // 0x186180: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18617c) {
            ctx->pc = 0x186194u;
            goto label_186194;
        }
    }
    ctx->pc = 0x186184u;
    // 0x186184: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x186184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x186188: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x186188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18618c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18618Cu;
    {
        const bool branch_taken_0x18618c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18618Cu;
        // 0x186190: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18618c) {
            ctx->pc = 0x186198u;
            goto label_186198;
        }
    }
    ctx->pc = 0x186194u;
label_186194:
    // 0x186194: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x186194u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_186198:
    // 0x186198: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x186198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x18619c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18619cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1861a0: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1861a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1861a4: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x1861a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x1861a8: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x1861a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x1861ac: 0x6000003  bltz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1861ACu;
    {
        const bool branch_taken_0x1861ac = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x1861B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1861ACu;
        // 0x1861b0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1861ac) {
            ctx->pc = 0x1861BCu;
            goto label_1861bc;
        }
    }
    ctx->pc = 0x1861B4u;
    // 0x1861b4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1861b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1861b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1861b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1861bc:
    // 0x1861bc: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1861bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1861c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1861C0u;
    {
        const bool branch_taken_0x1861c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1861C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1861C0u;
        // 0x1861c4: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1861c0) {
            ctx->pc = 0x1861D8u;
            goto label_1861d8;
        }
    }
    ctx->pc = 0x1861C8u;
    // 0x1861c8: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x1861c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x1861cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1861ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1861d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1861D0u;
    {
        const bool branch_taken_0x1861d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1861D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1861D0u;
        // 0x1861d4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1861d0) {
            ctx->pc = 0x1861DCu;
            goto label_1861dc;
        }
    }
    ctx->pc = 0x1861D8u;
label_1861d8:
    // 0x1861d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1861d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1861dc:
    // 0x1861dc: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x1861dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x1861e0: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x1861e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x1861e4: 0x24637b00  addiu       $v1, $v1, 0x7B00
    ctx->pc = 0x1861e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31488));
    // 0x1861e8: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1861e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1861ec: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x1861ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x1861f0: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1861f0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x747B00u));
    // 0x1861f4: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1861f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1861f8: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1861f8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x747B00u));
    // 0x1861fc: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1861fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x186200: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x186200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x186204: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x186204u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x186208: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x186208u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x18620c: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x18620Cu;
    SET_GPR_U32(ctx, 31, 0x186214u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x18620Cu, 0x186214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186214u;
label_186214:
    // 0x186214: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x186214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x186218: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x186218u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x18621c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x18621cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x186220: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x186220u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x186224: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x186224u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x186228: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x186228u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18622c: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x18622Cu;
    SET_GPR_U32(ctx, 31, 0x186234u);
    ctx->pc = 0x186230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18622Cu;
    // 0x186230: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x18622Cu, 0x186234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186234u;
label_186234:
    // 0x186234: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x186234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x186238: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x186238u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x18623c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x18623cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x186240: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x186240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x186244: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x186244u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x186248: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x186248u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x18624c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x18624cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x186250: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x186250u;
    SET_GPR_U32(ctx, 31, 0x186258u);
    ctx->pc = 0x186254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186250u;
    // 0x186254: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x186250u, 0x186258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186258u;
label_186258:
    // 0x186258: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x186258u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x18625c: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x18625cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x186260: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x186260u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x186264: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x186264u;
    SET_GPR_U32(ctx, 31, 0x18626Cu);
    ctx->pc = 0x186268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186264u;
    // 0x186268: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x186264u, 0x18626Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18626Cu;
label_18626c:
    // 0x18626c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x18626cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x186270: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x186270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x186274: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x186274u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x186278: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x186278u;
    SET_GPR_U32(ctx, 31, 0x186280u);
    ctx->pc = 0x18627Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186278u;
    // 0x18627c: 0xe7a10020  swc1        $f1, 0x20($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x186278u, 0x186280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186280u;
label_186280:
    // 0x186280: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x186280u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x186284: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x186284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x186288: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x186288u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18628c: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x18628Cu;
    SET_GPR_U32(ctx, 31, 0x186294u);
    ctx->pc = 0x186290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18628Cu;
    // 0x186290: 0xe7a10024  swc1        $f1, 0x24($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x18628Cu, 0x186294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186294u;
label_186294:
    // 0x186294: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x186294u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x186298: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x186298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18629c: 0x924302b4  lbu         $v1, 0x2B4($s2)
    ctx->pc = 0x18629cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x1862a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1862a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1862a4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1862a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1862a8: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1862a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1862ac: 0x6000002  bltz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1862ACu;
    {
        const bool branch_taken_0x1862ac = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x1862B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1862ACu;
        // 0x1862b0: 0xe7a10028  swc1        $f1, 0x28($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1862ac) {
            ctx->pc = 0x1862B8u;
            goto label_1862b8;
        }
    }
    ctx->pc = 0x1862B4u;
    // 0x1862b4: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x1862b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1862b8:
    // 0x1862b8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1862b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1862bc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1862BCu;
    {
        const bool branch_taken_0x1862bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1862C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1862BCu;
        // 0x1862c0: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1862bc) {
            ctx->pc = 0x1862D4u;
            goto label_1862d4;
        }
    }
    ctx->pc = 0x1862C4u;
    // 0x1862c4: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x1862c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x1862c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1862c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1862cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1862CCu;
    {
        const bool branch_taken_0x1862cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1862D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1862CCu;
        // 0x1862d0: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1862cc) {
            ctx->pc = 0x1862D8u;
            goto label_1862d8;
        }
    }
    ctx->pc = 0x1862D4u;
label_1862d4:
    // 0x1862d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1862d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1862d8:
    // 0x1862d8: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x1862d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1862dc: 0x24100060  addiu       $s0, $zero, 0x60
    ctx->pc = 0x1862dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1862e0: 0x2701018  mult        $v0, $s3, $s0
    ctx->pc = 0x1862e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1862e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1862e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1862e8: 0x3c01bc83  lui         $at, 0xBC83
    ctx->pc = 0x1862e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48259 << 16));
    // 0x1862ec: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1862ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1862f0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1862f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1862f4: 0x528021  addu        $s0, $v0, $s2
    ctx->pc = 0x1862f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1862f8: 0x26100670  addiu       $s0, $s0, 0x670
    ctx->pc = 0x1862f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1648));
    // 0x1862fc: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x1862FCu;
    SET_GPR_U32(ctx, 31, 0x186304u);
    ctx->pc = 0x186300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1862FCu;
    // 0x186300: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x1862FCu, 0x186304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186304u;
label_186304:
    // 0x186304: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x186304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186308: 0xc05ce66  jal         func_173998
    ctx->pc = 0x186308u;
    SET_GPR_U32(ctx, 31, 0x186310u);
    ctx->pc = 0x18630Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186308u;
    // 0x18630c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173998u, 0x186308u, 0x186310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186310u;
label_186310:
    // 0x186310: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x186310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186314: 0xc051f18  jal         func_147C60
    ctx->pc = 0x186314u;
    SET_GPR_U32(ctx, 31, 0x18631Cu);
    ctx->pc = 0x186318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186314u;
    // 0x186318: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x186314u, 0x18631Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18631Cu;
label_18631c:
    // 0x18631c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18631cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186320: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x186320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186324: 0xc051f22  jal         func_147C88
    ctx->pc = 0x186324u;
    SET_GPR_U32(ctx, 31, 0x18632Cu);
    ctx->pc = 0x186328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186324u;
    // 0x186328: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C88u, 0x186324u, 0x18632Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18632Cu;
label_18632c:
    // 0x18632c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x18632cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x186330: 0xc05ce42  jal         func_173908
    ctx->pc = 0x186330u;
    SET_GPR_U32(ctx, 31, 0x186338u);
    ctx->pc = 0x186334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186330u;
    // 0x186334: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173908u, 0x186330u, 0x186338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186338u;
label_186338:
    // 0x186338: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x186338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x18633c: 0xc05ce4e  jal         func_173938
    ctx->pc = 0x18633Cu;
    SET_GPR_U32(ctx, 31, 0x186344u);
    ctx->pc = 0x186340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18633Cu;
    // 0x186340: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173938u, 0x18633Cu, 0x186344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186344u;
label_186344:
    // 0x186344: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x186344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x186348: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x186348u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18634c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x18634cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x186350: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x186350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186354: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x186354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186358: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x186358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x18635c: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x18635cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x186360: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x186360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x186364: 0xc05ce5a  jal         func_173968
    ctx->pc = 0x186364u;
    SET_GPR_U32(ctx, 31, 0x18636Cu);
    ctx->pc = 0x186368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186364u;
    // 0x186368: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x173968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173968u, 0x186364u, 0x18636Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18636Cu;
label_18636c:
    // 0x18636c: 0xe6140058  swc1        $f20, 0x58($s0)
    ctx->pc = 0x18636cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
label_186370:
    // 0x186370: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x186370u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x186374: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x186374u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x186378: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x186378u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18637c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x18637cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x186380: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x186380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x186384: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x186384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x186388: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x186388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18638c: 0x3e00008  jr          $ra
    ctx->pc = 0x18638Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18638Cu;
        // 0x186390: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18638Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x186394u;
    // 0x186394: 0x0  nop
    ctx->pc = 0x186394u;
    // NOP
    ctx->pc = 0x186398u;
}
