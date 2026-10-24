#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r020_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r020
{
// Function: MoveLogo__5cR020
// Address: 0x79bf00 - 0x79c510
void MoveLogo__5cR020_0x79bf00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MoveLogo__5cR020_0x79bf00");
#endif

    switch (ctx->pc) {
        case 0x79bf60u: goto label_79bf60;
        case 0x79bf8cu: goto label_79bf8c;
        case 0x79bfa0u: goto label_79bfa0;
        case 0x79bfe4u: goto label_79bfe4;
        case 0x79bff0u: goto label_79bff0;
        case 0x79c038u: goto label_79c038;
        case 0x79c04cu: goto label_79c04c;
        case 0x79c078u: goto label_79c078;
        case 0x79c104u: goto label_79c104;
        case 0x79c130u: goto label_79c130;
        case 0x79c144u: goto label_79c144;
        case 0x79c158u: goto label_79c158;
        case 0x79c1acu: goto label_79c1ac;
        case 0x79c1b8u: goto label_79c1b8;
        case 0x79c1d8u: goto label_79c1d8;
        case 0x79c210u: goto label_79c210;
        case 0x79c224u: goto label_79c224;
        case 0x79c2c0u: goto label_79c2c0;
        case 0x79c2ecu: goto label_79c2ec;
        case 0x79c300u: goto label_79c300;
        case 0x79c348u: goto label_79c348;
        case 0x79c354u: goto label_79c354;
        case 0x79c3acu: goto label_79c3ac;
        case 0x79c3c0u: goto label_79c3c0;
        case 0x79c45cu: goto label_79c45c;
        case 0x79c488u: goto label_79c488;
        case 0x79c49cu: goto label_79c49c;
        case 0x79c4b0u: goto label_79c4b0;
        case 0x79c4f4u: goto label_79c4f4;
        case 0x79c4fcu: goto label_79c4fc;
        default: break;
    }

    ctx->pc = 0x79bf00u;

    // 0x79bf00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79bf00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x79bf04: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x79bf04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x79bf08: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x79bf08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x79bf0c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x79bf0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bf10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79bf10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79bf14: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x79bf14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x79bf18: 0x2c62002c  sltiu       $v0, $v1, 0x2C
    ctx->pc = 0x79bf18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)44) ? 1 : 0);
    // 0x79bf1c: 0x10400170  beqz        $v0, . + 4 + (0x170 << 2)
    ctx->pc = 0x79BF1Cu;
    {
        const bool branch_taken_0x79bf1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BF1Cu;
        // 0x79bf20: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bf1c) {
            ctx->pc = 0x79C4E0u;
            goto label_79c4e0;
        }
    }
    ctx->pc = 0x79BF24u;
    // 0x79bf24: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x79bf24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x79bf28: 0x2442cc40  addiu       $v0, $v0, -0x33C0
    ctx->pc = 0x79bf28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954048));
    // 0x79bf2c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x79bf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x79bf30: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x79bf30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79bf34: 0x800008  jr          $a0
    ctx->pc = 0x79BF34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x79BF3Cu: goto label_79bf3c;
            case 0x79BF7Cu: goto label_79bf7c;
            case 0x79BFBCu: goto label_79bfbc;
            case 0x79C008u: goto label_79c008;
            case 0x79C094u: goto label_79c094;
            case 0x79C120u: goto label_79c120;
            case 0x79C180u: goto label_79c180;
            case 0x79C1E0u: goto label_79c1e0;
            case 0x79C24Cu: goto label_79c24c;
            case 0x79C2DCu: goto label_79c2dc;
            case 0x79C31Cu: goto label_79c31c;
            case 0x79C37Cu: goto label_79c37c;
            case 0x79C3E8u: goto label_79c3e8;
            case 0x79C478u: goto label_79c478;
            case 0x79C4DCu: goto label_79c4dc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BF34u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x79BF3Cu;
label_79bf3c:
    // 0x79bf3c: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x79bf3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x79bf40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79bf40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bf44: 0x24847470  addiu       $a0, $a0, 0x7470
    ctx->pc = 0x79bf44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29808));
    // 0x79bf48: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x79bf48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x79bf4c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79bf4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bf50: 0x3c08ff00  lui         $t0, 0xFF00
    ctx->pc = 0x79bf50u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65280 << 16));
    // 0x79bf54: 0x3c09ff00  lui         $t1, 0xFF00
    ctx->pc = 0x79bf54u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65280 << 16));
    // 0x79bf58: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x79BF58u;
    SET_GPR_U32(ctx, 31, 0x79BF60u);
    ctx->pc = 0x79BF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BF58u;
    // 0x79bf5c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x79BF58u, 0x79BF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BF60u;
label_79bf60:
    // 0x79bf60: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x79bf60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x79bf64: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x79bf64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x79bf68: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79bf68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79bf6c: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x79bf6cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x79bf70: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x79bf70u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x79bf74: 0xa2220001  sb          $v0, 0x1($s1)
    ctx->pc = 0x79bf74u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x79bf78: 0xa2200003  sb          $zero, 0x3($s1)
    ctx->pc = 0x79bf78u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 0));
label_79bf7c:
    // 0x79bf7c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x79bf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x79bf80: 0x24507470  addiu       $s0, $v0, 0x7470
    ctx->pc = 0x79bf80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29808));
    // 0x79bf84: 0xc0c1dc6  jal         func_307718
    ctx->pc = 0x79BF84u;
    SET_GPR_U32(ctx, 31, 0x79BF8Cu);
    ctx->pc = 0x79BF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BF84u;
    // 0x79bf88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307718u, 0x79BF84u, 0x79BF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BF8Cu;
label_79bf8c:
    // 0x79bf8c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x79bf8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x79bf90: 0x50400153  beql        $v0, $zero, . + 4 + (0x153 << 2)
    ctx->pc = 0x79BF90u;
    {
        const bool branch_taken_0x79bf90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79bf90) {
            ctx->pc = 0x79BF94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79BF90u;
            // 0x79bf94: 0x92230001  lbu         $v1, 0x1($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79C4E0u;
            goto label_79c4e0;
        }
    }
    ctx->pc = 0x79BF98u;
    // 0x79bf98: 0xc0c1dc6  jal         func_307718
    ctx->pc = 0x79BF98u;
    SET_GPR_U32(ctx, 31, 0x79BFA0u);
    ctx->pc = 0x79BF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BF98u;
    // 0x79bf9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307718u, 0x79BF98u, 0x79BFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BFA0u;
label_79bfa0:
    // 0x79bfa0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x79bfa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x79bfa4: 0x1040014d  beqz        $v0, . + 4 + (0x14D << 2)
    ctx->pc = 0x79BFA4u;
    {
        const bool branch_taken_0x79bfa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BFA4u;
        // 0x79bfa8: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bfa4) {
            ctx->pc = 0x79C4DCu;
            goto label_79c4dc;
        }
    }
    ctx->pc = 0x79BFACu;
    // 0x79bfac: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x79bfacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x79bfb0: 0xa2220001  sb          $v0, 0x1($s1)
    ctx->pc = 0x79bfb0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x79bfb4: 0x10000147  b           . + 4 + (0x147 << 2)
    ctx->pc = 0x79BFB4u;
    {
        const bool branch_taken_0x79bfb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BFB4u;
        // 0x79bfb8: 0xa2230000  sb          $v1, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bfb4) {
            ctx->pc = 0x79C4D4u;
            goto label_79c4d4;
        }
    }
    ctx->pc = 0x79BFBCu;
label_79bfbc:
    // 0x79bfbc: 0xa2200024  sb          $zero, 0x24($s1)
    ctx->pc = 0x79bfbcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 36), (uint8_t)GPR_U32(ctx, 0));
    // 0x79bfc0: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x79bfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x79bfc4: 0x24847470  addiu       $a0, $a0, 0x7470
    ctx->pc = 0x79bfc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29808));
    // 0x79bfc8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79bfc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bfcc: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x79bfccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x79bfd0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79bfd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bfd4: 0x3c08ff00  lui         $t0, 0xFF00
    ctx->pc = 0x79bfd4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65280 << 16));
    // 0x79bfd8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79bfd8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bfdc: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x79BFDCu;
    SET_GPR_U32(ctx, 31, 0x79BFE4u);
    ctx->pc = 0x79BFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BFDCu;
    // 0x79bfe0: 0x240a000f  addiu       $t2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x79BFDCu, 0x79BFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BFE4u;
label_79bfe4:
    // 0x79bfe4: 0x26240080  addiu       $a0, $s1, 0x80
    ctx->pc = 0x79bfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x79bfe8: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79BFE8u;
    SET_GPR_U32(ctx, 31, 0x79BFF0u);
    ctx->pc = 0x79BFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BFE8u;
    // 0x79bfec: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79BFE8u, 0x79BFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BFF0u;
label_79bff0:
    // 0x79bff0: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x79bff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x79bff4: 0x3c03dfff  lui         $v1, 0xDFFF
    ctx->pc = 0x79bff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57343 << 16));
    // 0x79bff8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x79bff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x79bffc: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x79bffcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x79c000: 0x100000d6  b           . + 4 + (0xD6 << 2)
    ctx->pc = 0x79C000u;
    {
        const bool branch_taken_0x79c000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C000u;
        // 0x79c004: 0xac44002c  sw          $a0, 0x2C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c000) {
            ctx->pc = 0x79C35Cu;
            goto label_79c35c;
        }
    }
    ctx->pc = 0x79C008u;
label_79c008:
    // 0x79c008: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x79c008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x79c00c: 0x34048030  ori         $a0, $zero, 0x8030
    ctx->pc = 0x79c00cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32816);
    // 0x79c010: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x79c010u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x79c014: 0xdc437640  ld          $v1, 0x7640($v0)
    ctx->pc = 0x79c014u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 30272)));
    // 0x79c018: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x79c018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x79c01c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x79C01Cu;
    {
        const bool branch_taken_0x79c01c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C01Cu;
        // 0x79c020: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c01c) {
            ctx->pc = 0x79C028u;
            goto label_79c028;
        }
    }
    ctx->pc = 0x79C024u;
    // 0x79c024: 0xa2220024  sb          $v0, 0x24($s1)
    ctx->pc = 0x79c024u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 36), (uint8_t)GPR_U32(ctx, 2));
label_79c028:
    // 0x79c028: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x79c028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x79c02c: 0x24507470  addiu       $s0, $v0, 0x7470
    ctx->pc = 0x79c02cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29808));
    // 0x79c030: 0xc0c1dc6  jal         func_307718
    ctx->pc = 0x79C030u;
    SET_GPR_U32(ctx, 31, 0x79C038u);
    ctx->pc = 0x79C034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C030u;
    // 0x79c034: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307718u, 0x79C030u, 0x79C038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C038u;
label_79c038:
    // 0x79c038: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x79c038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x79c03c: 0x50400128  beql        $v0, $zero, . + 4 + (0x128 << 2)
    ctx->pc = 0x79C03Cu;
    {
        const bool branch_taken_0x79c03c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79c03c) {
            ctx->pc = 0x79C040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79C03Cu;
            // 0x79c040: 0x92230001  lbu         $v1, 0x1($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79C4E0u;
            goto label_79c4e0;
        }
    }
    ctx->pc = 0x79C044u;
    // 0x79c044: 0xc0c1dc6  jal         func_307718
    ctx->pc = 0x79C044u;
    SET_GPR_U32(ctx, 31, 0x79C04Cu);
    ctx->pc = 0x79C048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C044u;
    // 0x79c048: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307718u, 0x79C044u, 0x79C04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C04Cu;
label_79c04c:
    // 0x79c04c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x79c04cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x79c050: 0x10400122  beqz        $v0, . + 4 + (0x122 << 2)
    ctx->pc = 0x79C050u;
    {
        const bool branch_taken_0x79c050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C050u;
        // 0x79c054: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c050) {
            ctx->pc = 0x79C4DCu;
            goto label_79c4dc;
        }
    }
    ctx->pc = 0x79C058u;
    // 0x79c058: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79c058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c05c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79c05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x79c060: 0x2406002d  addiu       $a2, $zero, 0x2D
    ctx->pc = 0x79c060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x79c064: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79c064u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79c068: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79c068u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79c06c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79c06cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c070: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x79C070u;
    SET_GPR_U32(ctx, 31, 0x79C078u);
    ctx->pc = 0x79C074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C070u;
    // 0x79c074: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79C070u, 0x79C078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C078u;
label_79c078:
    // 0x79c078: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x79c078u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x79c07c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x79c07cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x79c080: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x79c080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x79c084: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x79c084u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x79c088: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x79c088u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x79c08c: 0x10000111  b           . + 4 + (0x111 << 2)
    ctx->pc = 0x79C08Cu;
    {
        const bool branch_taken_0x79c08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C08Cu;
        // 0x79c090: 0xa2230001  sb          $v1, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c08c) {
            ctx->pc = 0x79C4D4u;
            goto label_79c4d4;
        }
    }
    ctx->pc = 0x79C094u;
label_79c094:
    // 0x79c094: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x79c094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x79c098: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x79c098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x79c09c: 0x28430079  slti        $v1, $v0, 0x79
    ctx->pc = 0x79c09cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)121) ? 1 : 0);
    // 0x79c0a0: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x79C0A0u;
    {
        const bool branch_taken_0x79c0a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C0A0u;
        // 0x79c0a4: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c0a0) {
            ctx->pc = 0x79C0E0u;
            goto label_79c0e0;
        }
    }
    ctx->pc = 0x79C0A8u;
    // 0x79c0a8: 0x24820002  addiu       $v0, $a0, 0x2
    ctx->pc = 0x79c0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x79c0ac: 0x28430002  slti        $v1, $v0, 0x2
    ctx->pc = 0x79c0acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x79c0b0: 0x1460010a  bnez        $v1, . + 4 + (0x10A << 2)
    ctx->pc = 0x79C0B0u;
    {
        const bool branch_taken_0x79c0b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C0B0u;
        // 0x79c0b4: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c0b0) {
            ctx->pc = 0x79C4DCu;
            goto label_79c4dc;
        }
    }
    ctx->pc = 0x79C0B8u;
    // 0x79c0b8: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x79c0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x79c0bc: 0x34048030  ori         $a0, $zero, 0x8030
    ctx->pc = 0x79c0bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32816);
    // 0x79c0c0: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x79c0c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x79c0c4: 0xdc437640  ld          $v1, 0x7640($v0)
    ctx->pc = 0x79c0c4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 30272)));
    // 0x79c0c8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x79c0c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x79c0cc: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x79C0CCu;
    {
        const bool branch_taken_0x79c0cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C0CCu;
        // 0x79c0d0: 0x3c040074  lui         $a0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c0cc) {
            ctx->pc = 0x79C0E4u;
            goto label_79c0e4;
        }
    }
    ctx->pc = 0x79C0D4u;
    // 0x79c0d4: 0x92220024  lbu         $v0, 0x24($s1)
    ctx->pc = 0x79c0d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x79c0d8: 0x50400101  beql        $v0, $zero, . + 4 + (0x101 << 2)
    ctx->pc = 0x79C0D8u;
    {
        const bool branch_taken_0x79c0d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79c0d8) {
            ctx->pc = 0x79C0DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79C0D8u;
            // 0x79c0dc: 0x92230001  lbu         $v1, 0x1($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79C4E0u;
            goto label_79c4e0;
        }
    }
    ctx->pc = 0x79C0E0u;
label_79c0e0:
    // 0x79c0e0: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x79c0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
label_79c0e4:
    // 0x79c0e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79c0e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c0e8: 0x24847470  addiu       $a0, $a0, 0x7470
    ctx->pc = 0x79c0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29808));
    // 0x79c0ec: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x79c0ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x79c0f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79c0f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c0f4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79c0f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c0f8: 0x3c09ff00  lui         $t1, 0xFF00
    ctx->pc = 0x79c0f8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65280 << 16));
    // 0x79c0fc: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x79C0FCu;
    SET_GPR_U32(ctx, 31, 0x79C104u);
    ctx->pc = 0x79C100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C0FCu;
    // 0x79c100: 0x240a0019  addiu       $t2, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x79C0FCu, 0x79C104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C104u;
label_79c104:
    // 0x79c104: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x79c104u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x79c108: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x79c108u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x79c10c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79c10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79c110: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x79c110u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x79c114: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x79c114u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x79c118: 0x100000ef  b           . + 4 + (0xEF << 2)
    ctx->pc = 0x79C118u;
    {
        const bool branch_taken_0x79c118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C118u;
        // 0x79c11c: 0xa2220001  sb          $v0, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c118) {
            ctx->pc = 0x79C4D8u;
            goto label_79c4d8;
        }
    }
    ctx->pc = 0x79C120u;
label_79c120:
    // 0x79c120: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x79c120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x79c124: 0x24507470  addiu       $s0, $v0, 0x7470
    ctx->pc = 0x79c124u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29808));
    // 0x79c128: 0xc0c1dc6  jal         func_307718
    ctx->pc = 0x79C128u;
    SET_GPR_U32(ctx, 31, 0x79C130u);
    ctx->pc = 0x79C12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C128u;
    // 0x79c12c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307718u, 0x79C128u, 0x79C130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C130u;
label_79c130:
    // 0x79c130: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x79c130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x79c134: 0x504000ea  beql        $v0, $zero, . + 4 + (0xEA << 2)
    ctx->pc = 0x79C134u;
    {
        const bool branch_taken_0x79c134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79c134) {
            ctx->pc = 0x79C138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79C134u;
            // 0x79c138: 0x92230001  lbu         $v1, 0x1($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79C4E0u;
            goto label_79c4e0;
        }
    }
    ctx->pc = 0x79C13Cu;
    // 0x79c13c: 0xc0c1dc6  jal         func_307718
    ctx->pc = 0x79C13Cu;
    SET_GPR_U32(ctx, 31, 0x79C144u);
    ctx->pc = 0x79C140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C13Cu;
    // 0x79c140: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307718u, 0x79C13Cu, 0x79C144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C144u;
label_79c144:
    // 0x79c144: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x79c144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x79c148: 0x104000e4  beqz        $v0, . + 4 + (0xE4 << 2)
    ctx->pc = 0x79C148u;
    {
        const bool branch_taken_0x79c148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C148u;
        // 0x79c14c: 0x26240080  addiu       $a0, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c148) {
            ctx->pc = 0x79C4DCu;
            goto label_79c4dc;
        }
    }
    ctx->pc = 0x79C150u;
    // 0x79c150: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79C150u;
    SET_GPR_U32(ctx, 31, 0x79C158u);
    ctx->pc = 0x79C154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C150u;
    // 0x79c154: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79C150u, 0x79C158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C158u;
label_79c158:
    // 0x79c158: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x79c158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x79c15c: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x79c15cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x79c160: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x79c160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x79c164: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x79c164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x79c168: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x79c168u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x79c16c: 0xa2250001  sb          $a1, 0x1($s1)
    ctx->pc = 0x79c16cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x79c170: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x79c170u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x79c174: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x79c174u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x79c178: 0x100000d7  b           . + 4 + (0xD7 << 2)
    ctx->pc = 0x79C178u;
    {
        const bool branch_taken_0x79c178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C178u;
        // 0x79c17c: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c178) {
            ctx->pc = 0x79C4D8u;
            goto label_79c4d8;
        }
    }
    ctx->pc = 0x79C180u;
label_79c180:
    // 0x79c180: 0xa2200024  sb          $zero, 0x24($s1)
    ctx->pc = 0x79c180u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 36), (uint8_t)GPR_U32(ctx, 0));
    // 0x79c184: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x79c184u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x79c188: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x79c188u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x79c18c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79c18cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c190: 0x3c08ff00  lui         $t0, 0xFF00
    ctx->pc = 0x79c190u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65280 << 16));
    // 0x79c194: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79c194u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c198: 0x240a000f  addiu       $t2, $zero, 0xF
    ctx->pc = 0x79c198u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x79c19c: 0x24847470  addiu       $a0, $a0, 0x7470
    ctx->pc = 0x79c19cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29808));
    // 0x79c1a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79c1a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c1a4: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x79C1A4u;
    SET_GPR_U32(ctx, 31, 0x79C1ACu);
    ctx->pc = 0x79C1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C1A4u;
    // 0x79c1a8: 0x26300080  addiu       $s0, $s1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x79C1A4u, 0x79C1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C1ACu;
label_79c1ac:
    // 0x79c1ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79c1acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c1b0: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79C1B0u;
    SET_GPR_U32(ctx, 31, 0x79C1B8u);
    ctx->pc = 0x79C1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C1B0u;
    // 0x79c1b4: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79C1B0u, 0x79C1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C1B8u;
label_79c1b8:
    // 0x79c1b8: 0x8c46002c  lw          $a2, 0x2C($v0)
    ctx->pc = 0x79c1b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x79c1bc: 0x3c03dfff  lui         $v1, 0xDFFF
    ctx->pc = 0x79c1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57343 << 16));
    // 0x79c1c0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x79c1c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x79c1c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79c1c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c1c8: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x79c1c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x79c1cc: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x79c1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x79c1d0: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79C1D0u;
    SET_GPR_U32(ctx, 31, 0x79C1D8u);
    ctx->pc = 0x79C1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C1D0u;
    // 0x79c1d4: 0xac46002c  sw          $a2, 0x2C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79C1D0u, 0x79C1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C1D8u;
label_79c1d8:
    // 0x79c1d8: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x79C1D8u;
    {
        const bool branch_taken_0x79c1d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C1D8u;
        // 0x79c1dc: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c1d8) {
            ctx->pc = 0x79C358u;
            goto label_79c358;
        }
    }
    ctx->pc = 0x79C1E0u;
label_79c1e0:
    // 0x79c1e0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x79c1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x79c1e4: 0x34048030  ori         $a0, $zero, 0x8030
    ctx->pc = 0x79c1e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32816);
    // 0x79c1e8: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x79c1e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x79c1ec: 0xdc437640  ld          $v1, 0x7640($v0)
    ctx->pc = 0x79c1ecu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 30272)));
    // 0x79c1f0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x79c1f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x79c1f4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x79C1F4u;
    {
        const bool branch_taken_0x79c1f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C1F4u;
        // 0x79c1f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c1f4) {
            ctx->pc = 0x79C200u;
            goto label_79c200;
        }
    }
    ctx->pc = 0x79C1FCu;
    // 0x79c1fc: 0xa2220024  sb          $v0, 0x24($s1)
    ctx->pc = 0x79c1fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 36), (uint8_t)GPR_U32(ctx, 2));
label_79c200:
    // 0x79c200: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x79c200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x79c204: 0x24507470  addiu       $s0, $v0, 0x7470
    ctx->pc = 0x79c204u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29808));
    // 0x79c208: 0xc0c1dc6  jal         func_307718
    ctx->pc = 0x79C208u;
    SET_GPR_U32(ctx, 31, 0x79C210u);
    ctx->pc = 0x79C20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C208u;
    // 0x79c20c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307718u, 0x79C208u, 0x79C210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C210u;
label_79c210:
    // 0x79c210: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x79c210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x79c214: 0x504000b2  beql        $v0, $zero, . + 4 + (0xB2 << 2)
    ctx->pc = 0x79C214u;
    {
        const bool branch_taken_0x79c214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79c214) {
            ctx->pc = 0x79C218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79C214u;
            // 0x79c218: 0x92230001  lbu         $v1, 0x1($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79C4E0u;
            goto label_79c4e0;
        }
    }
    ctx->pc = 0x79C21Cu;
    // 0x79c21c: 0xc0c1dc6  jal         func_307718
    ctx->pc = 0x79C21Cu;
    SET_GPR_U32(ctx, 31, 0x79C224u);
    ctx->pc = 0x79C220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C21Cu;
    // 0x79c220: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307718u, 0x79C21Cu, 0x79C224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C224u;
label_79c224:
    // 0x79c224: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x79c224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x79c228: 0x504000ad  beql        $v0, $zero, . + 4 + (0xAD << 2)
    ctx->pc = 0x79C228u;
    {
        const bool branch_taken_0x79c228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79c228) {
            ctx->pc = 0x79C22Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79C228u;
            // 0x79c22c: 0x92230001  lbu         $v1, 0x1($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79C4E0u;
            goto label_79c4e0;
        }
    }
    ctx->pc = 0x79C230u;
    // 0x79c230: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x79c230u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x79c234: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x79c234u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x79c238: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79c238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79c23c: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x79c23cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x79c240: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x79c240u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x79c244: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x79C244u;
    {
        const bool branch_taken_0x79c244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C244u;
        // 0x79c248: 0xa2220001  sb          $v0, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c244) {
            ctx->pc = 0x79C4D4u;
            goto label_79c4d4;
        }
    }
    ctx->pc = 0x79C24Cu;
label_79c24c:
    // 0x79c24c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x79c24cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x79c250: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x79c250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x79c254: 0x28430079  slti        $v1, $v0, 0x79
    ctx->pc = 0x79c254u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)121) ? 1 : 0);
    // 0x79c258: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x79C258u;
    {
        const bool branch_taken_0x79c258 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C258u;
        // 0x79c25c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c258) {
            ctx->pc = 0x79C298u;
            goto label_79c298;
        }
    }
    ctx->pc = 0x79C260u;
    // 0x79c260: 0x24820002  addiu       $v0, $a0, 0x2
    ctx->pc = 0x79c260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x79c264: 0x28430002  slti        $v1, $v0, 0x2
    ctx->pc = 0x79c264u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x79c268: 0x1460009c  bnez        $v1, . + 4 + (0x9C << 2)
    ctx->pc = 0x79C268u;
    {
        const bool branch_taken_0x79c268 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C268u;
        // 0x79c26c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c268) {
            ctx->pc = 0x79C4DCu;
            goto label_79c4dc;
        }
    }
    ctx->pc = 0x79C270u;
    // 0x79c270: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x79c270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x79c274: 0x34048030  ori         $a0, $zero, 0x8030
    ctx->pc = 0x79c274u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32816);
    // 0x79c278: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x79c278u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x79c27c: 0xdc437640  ld          $v1, 0x7640($v0)
    ctx->pc = 0x79c27cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 30272)));
    // 0x79c280: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x79c280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x79c284: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x79C284u;
    {
        const bool branch_taken_0x79c284 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C284u;
        // 0x79c288: 0x3c040074  lui         $a0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c284) {
            ctx->pc = 0x79C29Cu;
            goto label_79c29c;
        }
    }
    ctx->pc = 0x79C28Cu;
    // 0x79c28c: 0x92220024  lbu         $v0, 0x24($s1)
    ctx->pc = 0x79c28cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x79c290: 0x50400093  beql        $v0, $zero, . + 4 + (0x93 << 2)
    ctx->pc = 0x79C290u;
    {
        const bool branch_taken_0x79c290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79c290) {
            ctx->pc = 0x79C294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79C290u;
            // 0x79c294: 0x92230001  lbu         $v1, 0x1($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79C4E0u;
            goto label_79c4e0;
        }
    }
    ctx->pc = 0x79C298u;
label_79c298:
    // 0x79c298: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x79c298u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
label_79c29c:
    // 0x79c29c: 0x3c098080  lui         $t1, 0x8080
    ctx->pc = 0x79c29cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32896 << 16));
    // 0x79c2a0: 0x24847470  addiu       $a0, $a0, 0x7470
    ctx->pc = 0x79c2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29808));
    // 0x79c2a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79c2a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c2a8: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x79c2a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x79c2ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79c2acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c2b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79c2b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c2b4: 0x35298080  ori         $t1, $t1, 0x8080
    ctx->pc = 0x79c2b4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32896);
    // 0x79c2b8: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x79C2B8u;
    SET_GPR_U32(ctx, 31, 0x79C2C0u);
    ctx->pc = 0x79C2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C2B8u;
    // 0x79c2bc: 0x240a000f  addiu       $t2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x79C2B8u, 0x79C2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C2C0u;
label_79c2c0:
    // 0x79c2c0: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x79c2c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x79c2c4: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x79c2c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x79c2c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79c2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79c2cc: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x79c2ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x79c2d0: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x79c2d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x79c2d4: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x79C2D4u;
    {
        const bool branch_taken_0x79c2d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C2D4u;
        // 0x79c2d8: 0xa2220001  sb          $v0, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c2d4) {
            ctx->pc = 0x79C4D8u;
            goto label_79c4d8;
        }
    }
    ctx->pc = 0x79C2DCu;
label_79c2dc:
    // 0x79c2dc: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x79c2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x79c2e0: 0x24507470  addiu       $s0, $v0, 0x7470
    ctx->pc = 0x79c2e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29808));
    // 0x79c2e4: 0xc0c1dc6  jal         func_307718
    ctx->pc = 0x79C2E4u;
    SET_GPR_U32(ctx, 31, 0x79C2ECu);
    ctx->pc = 0x79C2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C2E4u;
    // 0x79c2e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307718u, 0x79C2E4u, 0x79C2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C2ECu;
label_79c2ec:
    // 0x79c2ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x79c2ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x79c2f0: 0x5040007b  beql        $v0, $zero, . + 4 + (0x7B << 2)
    ctx->pc = 0x79C2F0u;
    {
        const bool branch_taken_0x79c2f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79c2f0) {
            ctx->pc = 0x79C2F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79C2F0u;
            // 0x79c2f4: 0x92230001  lbu         $v1, 0x1($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79C4E0u;
            goto label_79c4e0;
        }
    }
    ctx->pc = 0x79C2F8u;
    // 0x79c2f8: 0xc0c1dc6  jal         func_307718
    ctx->pc = 0x79C2F8u;
    SET_GPR_U32(ctx, 31, 0x79C300u);
    ctx->pc = 0x79C2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C2F8u;
    // 0x79c2fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307718u, 0x79C2F8u, 0x79C300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C300u;
label_79c300:
    // 0x79c300: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x79c300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x79c304: 0x10400075  beqz        $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x79C304u;
    {
        const bool branch_taken_0x79c304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C304u;
        // 0x79c308: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c304) {
            ctx->pc = 0x79C4DCu;
            goto label_79c4dc;
        }
    }
    ctx->pc = 0x79C30Cu;
    // 0x79c30c: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x79c30cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x79c310: 0xa2220001  sb          $v0, 0x1($s1)
    ctx->pc = 0x79c310u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x79c314: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x79C314u;
    {
        const bool branch_taken_0x79c314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C314u;
        // 0x79c318: 0xa2230000  sb          $v1, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c314) {
            ctx->pc = 0x79C4D4u;
            goto label_79c4d4;
        }
    }
    ctx->pc = 0x79C31Cu;
label_79c31c:
    // 0x79c31c: 0xa2200024  sb          $zero, 0x24($s1)
    ctx->pc = 0x79c31cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 36), (uint8_t)GPR_U32(ctx, 0));
    // 0x79c320: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x79c320u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x79c324: 0x3c088080  lui         $t0, 0x8080
    ctx->pc = 0x79c324u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32896 << 16));
    // 0x79c328: 0x24847470  addiu       $a0, $a0, 0x7470
    ctx->pc = 0x79c328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29808));
    // 0x79c32c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79c32cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c330: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x79c330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x79c334: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79c334u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c338: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x79c338u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x79c33c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79c33cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c340: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x79C340u;
    SET_GPR_U32(ctx, 31, 0x79C348u);
    ctx->pc = 0x79C344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C340u;
    // 0x79c344: 0x240a000f  addiu       $t2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x79C340u, 0x79C348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C348u;
label_79c348:
    // 0x79c348: 0x26240080  addiu       $a0, $s1, 0x80
    ctx->pc = 0x79c348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x79c34c: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79C34Cu;
    SET_GPR_U32(ctx, 31, 0x79C354u);
    ctx->pc = 0x79C350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C34Cu;
    // 0x79c350: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79C34Cu, 0x79C354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C354u;
label_79c354:
    // 0x79c354: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x79c354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_79c358:
    // 0x79c358: 0xa043008b  sb          $v1, 0x8B($v0)
    ctx->pc = 0x79c358u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 139), (uint8_t)GPR_U32(ctx, 3));
label_79c35c:
    // 0x79c35c: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x79c35cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x79c360: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x79c360u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x79c364: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x79c364u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x79c368: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79c368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79c36c: 0xa2200003  sb          $zero, 0x3($s1)
    ctx->pc = 0x79c36cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x79c370: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x79c370u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x79c374: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x79C374u;
    {
        const bool branch_taken_0x79c374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C374u;
        // 0x79c378: 0xa2220001  sb          $v0, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c374) {
            ctx->pc = 0x79C4DCu;
            goto label_79c4dc;
        }
    }
    ctx->pc = 0x79C37Cu;
label_79c37c:
    // 0x79c37c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x79c37cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x79c380: 0x34048030  ori         $a0, $zero, 0x8030
    ctx->pc = 0x79c380u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32816);
    // 0x79c384: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x79c384u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x79c388: 0xdc437640  ld          $v1, 0x7640($v0)
    ctx->pc = 0x79c388u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 30272)));
    // 0x79c38c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x79c38cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x79c390: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x79C390u;
    {
        const bool branch_taken_0x79c390 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C390u;
        // 0x79c394: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c390) {
            ctx->pc = 0x79C39Cu;
            goto label_79c39c;
        }
    }
    ctx->pc = 0x79C398u;
    // 0x79c398: 0xa2220024  sb          $v0, 0x24($s1)
    ctx->pc = 0x79c398u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 36), (uint8_t)GPR_U32(ctx, 2));
label_79c39c:
    // 0x79c39c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x79c39cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x79c3a0: 0x24507470  addiu       $s0, $v0, 0x7470
    ctx->pc = 0x79c3a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29808));
    // 0x79c3a4: 0xc0c1dc6  jal         func_307718
    ctx->pc = 0x79C3A4u;
    SET_GPR_U32(ctx, 31, 0x79C3ACu);
    ctx->pc = 0x79C3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C3A4u;
    // 0x79c3a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307718u, 0x79C3A4u, 0x79C3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C3ACu;
label_79c3ac:
    // 0x79c3ac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x79c3acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x79c3b0: 0x5040004b  beql        $v0, $zero, . + 4 + (0x4B << 2)
    ctx->pc = 0x79C3B0u;
    {
        const bool branch_taken_0x79c3b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79c3b0) {
            ctx->pc = 0x79C3B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79C3B0u;
            // 0x79c3b4: 0x92230001  lbu         $v1, 0x1($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79C4E0u;
            goto label_79c4e0;
        }
    }
    ctx->pc = 0x79C3B8u;
    // 0x79c3b8: 0xc0c1dc6  jal         func_307718
    ctx->pc = 0x79C3B8u;
    SET_GPR_U32(ctx, 31, 0x79C3C0u);
    ctx->pc = 0x79C3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C3B8u;
    // 0x79c3bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307718u, 0x79C3B8u, 0x79C3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C3C0u;
label_79c3c0:
    // 0x79c3c0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x79c3c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x79c3c4: 0x50400046  beql        $v0, $zero, . + 4 + (0x46 << 2)
    ctx->pc = 0x79C3C4u;
    {
        const bool branch_taken_0x79c3c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79c3c4) {
            ctx->pc = 0x79C3C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79C3C4u;
            // 0x79c3c8: 0x92230001  lbu         $v1, 0x1($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79C4E0u;
            goto label_79c4e0;
        }
    }
    ctx->pc = 0x79C3CCu;
    // 0x79c3cc: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x79c3ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x79c3d0: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x79c3d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x79c3d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79c3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79c3d8: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x79c3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x79c3dc: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x79c3dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x79c3e0: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x79C3E0u;
    {
        const bool branch_taken_0x79c3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C3E0u;
        // 0x79c3e4: 0xa2220001  sb          $v0, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c3e0) {
            ctx->pc = 0x79C4D4u;
            goto label_79c4d4;
        }
    }
    ctx->pc = 0x79C3E8u;
label_79c3e8:
    // 0x79c3e8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x79c3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x79c3ec: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x79c3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x79c3f0: 0x28430079  slti        $v1, $v0, 0x79
    ctx->pc = 0x79c3f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)121) ? 1 : 0);
    // 0x79c3f4: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x79C3F4u;
    {
        const bool branch_taken_0x79c3f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C3F4u;
        // 0x79c3f8: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c3f4) {
            ctx->pc = 0x79C434u;
            goto label_79c434;
        }
    }
    ctx->pc = 0x79C3FCu;
    // 0x79c3fc: 0x24820002  addiu       $v0, $a0, 0x2
    ctx->pc = 0x79c3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x79c400: 0x28430002  slti        $v1, $v0, 0x2
    ctx->pc = 0x79c400u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x79c404: 0x14600035  bnez        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x79C404u;
    {
        const bool branch_taken_0x79c404 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C404u;
        // 0x79c408: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c404) {
            ctx->pc = 0x79C4DCu;
            goto label_79c4dc;
        }
    }
    ctx->pc = 0x79C40Cu;
    // 0x79c40c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x79c40cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x79c410: 0x34048030  ori         $a0, $zero, 0x8030
    ctx->pc = 0x79c410u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32816);
    // 0x79c414: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x79c414u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x79c418: 0xdc437640  ld          $v1, 0x7640($v0)
    ctx->pc = 0x79c418u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 30272)));
    // 0x79c41c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x79c41cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x79c420: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x79C420u;
    {
        const bool branch_taken_0x79c420 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C420u;
        // 0x79c424: 0x3c040074  lui         $a0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c420) {
            ctx->pc = 0x79C438u;
            goto label_79c438;
        }
    }
    ctx->pc = 0x79C428u;
    // 0x79c428: 0x92220024  lbu         $v0, 0x24($s1)
    ctx->pc = 0x79c428u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x79c42c: 0x5040002c  beql        $v0, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x79C42Cu;
    {
        const bool branch_taken_0x79c42c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79c42c) {
            ctx->pc = 0x79C430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79C42Cu;
            // 0x79c430: 0x92230001  lbu         $v1, 0x1($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79C4E0u;
            goto label_79c4e0;
        }
    }
    ctx->pc = 0x79C434u;
label_79c434:
    // 0x79c434: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x79c434u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
label_79c438:
    // 0x79c438: 0x3c098080  lui         $t1, 0x8080
    ctx->pc = 0x79c438u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32896 << 16));
    // 0x79c43c: 0x24847470  addiu       $a0, $a0, 0x7470
    ctx->pc = 0x79c43cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29808));
    // 0x79c440: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79c440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c444: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x79c444u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x79c448: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79c448u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c44c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79c44cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c450: 0x35298080  ori         $t1, $t1, 0x8080
    ctx->pc = 0x79c450u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32896);
    // 0x79c454: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x79C454u;
    SET_GPR_U32(ctx, 31, 0x79C45Cu);
    ctx->pc = 0x79C458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C454u;
    // 0x79c458: 0x240a000f  addiu       $t2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x79C454u, 0x79C45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C45Cu;
label_79c45c:
    // 0x79c45c: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x79c45cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x79c460: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x79c460u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x79c464: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79c464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79c468: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x79c468u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x79c46c: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x79c46cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x79c470: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x79C470u;
    {
        const bool branch_taken_0x79c470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C470u;
        // 0x79c474: 0xa2220001  sb          $v0, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c470) {
            ctx->pc = 0x79C4D8u;
            goto label_79c4d8;
        }
    }
    ctx->pc = 0x79C478u;
label_79c478:
    // 0x79c478: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x79c478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x79c47c: 0x24507470  addiu       $s0, $v0, 0x7470
    ctx->pc = 0x79c47cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29808));
    // 0x79c480: 0xc0c1dc6  jal         func_307718
    ctx->pc = 0x79C480u;
    SET_GPR_U32(ctx, 31, 0x79C488u);
    ctx->pc = 0x79C484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C480u;
    // 0x79c484: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307718u, 0x79C480u, 0x79C488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C488u;
label_79c488:
    // 0x79c488: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x79c488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x79c48c: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x79C48Cu;
    {
        const bool branch_taken_0x79c48c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79c48c) {
            ctx->pc = 0x79C490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79C48Cu;
            // 0x79c490: 0x92230001  lbu         $v1, 0x1($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79C4E0u;
            goto label_79c4e0;
        }
    }
    ctx->pc = 0x79C494u;
    // 0x79c494: 0xc0c1dc6  jal         func_307718
    ctx->pc = 0x79C494u;
    SET_GPR_U32(ctx, 31, 0x79C49Cu);
    ctx->pc = 0x79C498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C494u;
    // 0x79c498: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307718u, 0x79C494u, 0x79C49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C49Cu;
label_79c49c:
    // 0x79c49c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x79c49cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x79c4a0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x79C4A0u;
    {
        const bool branch_taken_0x79c4a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C4A0u;
        // 0x79c4a4: 0x26240080  addiu       $a0, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c4a0) {
            ctx->pc = 0x79C4DCu;
            goto label_79c4dc;
        }
    }
    ctx->pc = 0x79C4A8u;
    // 0x79c4a8: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79C4A8u;
    SET_GPR_U32(ctx, 31, 0x79C4B0u);
    ctx->pc = 0x79C4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C4A8u;
    // 0x79c4ac: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79C4A8u, 0x79C4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C4B0u;
label_79c4b0:
    // 0x79c4b0: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x79c4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x79c4b4: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x79c4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x79c4b8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x79c4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79c4bc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79c4bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79c4c0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x79c4c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x79c4c4: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x79c4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x79c4c8: 0xa2250000  sb          $a1, 0x0($s1)
    ctx->pc = 0x79c4c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x79c4cc: 0xae26000c  sw          $a2, 0xC($s1)
    ctx->pc = 0x79c4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 6));
    // 0x79c4d0: 0xa2200001  sb          $zero, 0x1($s1)
    ctx->pc = 0x79c4d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
label_79c4d4:
    // 0x79c4d4: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x79c4d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
label_79c4d8:
    // 0x79c4d8: 0xa2200003  sb          $zero, 0x3($s1)
    ctx->pc = 0x79c4d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 0));
label_79c4dc:
    // 0x79c4dc: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x79c4dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_79c4e0:
    // 0x79c4e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x79c4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79c4e4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79C4E4u;
    {
        const bool branch_taken_0x79c4e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x79C4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C4E4u;
        // 0x79c4e8: 0x26300080  addiu       $s0, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c4e4) {
            ctx->pc = 0x79C4FCu;
            goto label_79c4fc;
        }
    }
    ctx->pc = 0x79C4ECu;
    // 0x79c4ec: 0xc0aaa90  jal         func_2AAA40
    ctx->pc = 0x79C4ECu;
    SET_GPR_U32(ctx, 31, 0x79C4F4u);
    ctx->pc = 0x79C4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C4ECu;
    // 0x79c4f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAA40u, 0x79C4ECu, 0x79C4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C4F4u;
label_79c4f4:
    // 0x79c4f4: 0xc0aab0a  jal         func_2AAC28
    ctx->pc = 0x79C4F4u;
    SET_GPR_U32(ctx, 31, 0x79C4FCu);
    ctx->pc = 0x79C4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C4F4u;
    // 0x79c4f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAC28u, 0x79C4F4u, 0x79C4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C4FCu;
label_79c4fc:
    // 0x79c4fc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x79c4fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79c500: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x79c500u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79c504: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79c504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79c508: 0x3e00008  jr          $ra
    ctx->pc = 0x79C508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79C50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C508u;
        // 0x79c50c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C510u;
}
} // namespace gh_r020
