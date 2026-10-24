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

// Function: func_00213710
// Address: 0x213710 - 0x213ea8
void func_00213710_0x213710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00213710_0x213710");
#endif

    switch (ctx->pc) {
        case 0x213764u: goto label_213764;
        case 0x2138ccu: goto label_2138cc;
        case 0x2138f0u: goto label_2138f0;
        case 0x213910u: goto label_213910;
        case 0x213938u: goto label_213938;
        case 0x213964u: goto label_213964;
        case 0x213984u: goto label_213984;
        case 0x2139b0u: goto label_2139b0;
        case 0x2139f0u: goto label_2139f0;
        case 0x213a1cu: goto label_213a1c;
        case 0x213ab8u: goto label_213ab8;
        case 0x213ad8u: goto label_213ad8;
        case 0x213ae4u: goto label_213ae4;
        case 0x213b3cu: goto label_213b3c;
        case 0x213b44u: goto label_213b44;
        case 0x213b50u: goto label_213b50;
        case 0x213b5cu: goto label_213b5c;
        case 0x213b68u: goto label_213b68;
        case 0x213c7cu: goto label_213c7c;
        case 0x213d50u: goto label_213d50;
        case 0x213d78u: goto label_213d78;
        case 0x213da4u: goto label_213da4;
        case 0x213dc0u: goto label_213dc0;
        case 0x213de8u: goto label_213de8;
        case 0x213e14u: goto label_213e14;
        case 0x213e1cu: goto label_213e1c;
        case 0x213e40u: goto label_213e40;
        case 0x213e50u: goto label_213e50;
        case 0x213e60u: goto label_213e60;
        case 0x213e70u: goto label_213e70;
        case 0x213e80u: goto label_213e80;
        default: break;
    }

    ctx->pc = 0x213710u;

    // 0x213710: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x213710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x213714: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x213714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x213718: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x213718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x21371c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21371cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213720: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x213720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x213724: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x213724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x213728: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x213728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21372c: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x21372cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x213730: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x213730u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x213734: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x213734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x213738: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x213738u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x21373c: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x21373cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x213740: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x213740u;
    {
        const bool branch_taken_0x213740 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x213744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213740u;
        // 0x213744: 0xae2216d0  sw          $v0, 0x16D0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213740) {
            ctx->pc = 0x21375Cu;
            goto label_21375c;
        }
    }
    ctx->pc = 0x213748u;
    // 0x213748: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x213748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21374c: 0x506200f0  beql        $v1, $v0, . + 4 + (0xF0 << 2)
    ctx->pc = 0x21374Cu;
    {
        const bool branch_taken_0x21374c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x21374c) {
            ctx->pc = 0x213750u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21374Cu;
            // 0x213750: 0xc62005a8  lwc1        $f0, 0x5A8($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x213B10u;
            goto label_213b10;
        }
    }
    ctx->pc = 0x213754u;
    // 0x213754: 0x100001af  b           . + 4 + (0x1AF << 2)
    ctx->pc = 0x213754u;
    {
        const bool branch_taken_0x213754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x213754) {
            ctx->pc = 0x213E14u;
            goto label_213e14;
        }
    }
    ctx->pc = 0x21375Cu;
label_21375c:
    // 0x21375c: 0xc09d91a  jal         func_276468
    ctx->pc = 0x21375Cu;
    SET_GPR_U32(ctx, 31, 0x213764u);
    ctx->pc = 0x213760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21375Cu;
    // 0x213760: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x21375Cu, 0x213764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213764u;
label_213764:
    // 0x213764: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x213764u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x213768: 0x8e220564  lw          $v0, 0x564($s1)
    ctx->pc = 0x213768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x21376c: 0x2444fdfe  addiu       $a0, $v0, -0x202
    ctx->pc = 0x21376cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966782));
    // 0x213770: 0x2c83007d  sltiu       $v1, $a0, 0x7D
    ctx->pc = 0x213770u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)125) ? 1 : 0);
    // 0x213774: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x213774u;
    {
        const bool branch_taken_0x213774 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x213778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213774u;
        // 0x213778: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213774) {
            ctx->pc = 0x213794u;
            goto label_213794;
        }
    }
    ctx->pc = 0x21377Cu;
    // 0x21377c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x21377cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x213780: 0x24425500  addiu       $v0, $v0, 0x5500
    ctx->pc = 0x213780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21760));
    // 0x213784: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x213784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x213788: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x213788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21378c: 0x800008  jr          $a0
    ctx->pc = 0x21378Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x213794u: goto label_213794;
            case 0x2137A4u: goto label_2137a4;
            case 0x2137B4u: goto label_2137b4;
            case 0x2137C4u: goto label_2137c4;
            case 0x2137F0u: goto label_2137f0;
            case 0x213800u: goto label_213800;
            case 0x213810u: goto label_213810;
            case 0x213820u: goto label_213820;
            case 0x213830u: goto label_213830;
            case 0x213840u: goto label_213840;
            case 0x213850u: goto label_213850;
            case 0x213860u: goto label_213860;
            case 0x213870u: goto label_213870;
            case 0x213880u: goto label_213880;
            case 0x213890u: goto label_213890;
            case 0x2138A0u: goto label_2138a0;
            case 0x213918u: goto label_213918;
            case 0x213928u: goto label_213928;
            case 0x213974u: goto label_213974;
            case 0x2139C0u: goto label_2139c0;
            case 0x2139D0u: goto label_2139d0;
            case 0x2139E0u: goto label_2139e0;
            case 0x213A34u: goto label_213a34;
            case 0x213A44u: goto label_213a44;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21378Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x213794u;
label_213794:
    // 0x213794: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x213794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x213798: 0x8c4300c0  lw          $v1, 0xC0($v0)
    ctx->pc = 0x213798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x21379c: 0x100000ac  b           . + 4 + (0xAC << 2)
    ctx->pc = 0x21379Cu;
    {
        const bool branch_taken_0x21379c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2137A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21379Cu;
        // 0x2137a0: 0x8c4400c4  lw          $a0, 0xC4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21379c) {
            ctx->pc = 0x213A50u;
            goto label_213a50;
        }
    }
    ctx->pc = 0x2137A4u;
label_2137a4:
    // 0x2137a4: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2137a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2137a8: 0x8c430660  lw          $v1, 0x660($v0)
    ctx->pc = 0x2137a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1632)));
    // 0x2137ac: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x2137ACu;
    {
        const bool branch_taken_0x2137ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2137B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2137ACu;
        // 0x2137b0: 0x8c440664  lw          $a0, 0x664($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1636)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2137ac) {
            ctx->pc = 0x213A50u;
            goto label_213a50;
        }
    }
    ctx->pc = 0x2137B4u;
label_2137b4:
    // 0x2137b4: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2137b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2137b8: 0x8c4335e4  lw          $v1, 0x35E4($v0)
    ctx->pc = 0x2137b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13796)));
    // 0x2137bc: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x2137BCu;
    {
        const bool branch_taken_0x2137bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2137C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2137BCu;
        // 0x2137c0: 0x8c4435e8  lw          $a0, 0x35E8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2137bc) {
            ctx->pc = 0x213A50u;
            goto label_213a50;
        }
    }
    ctx->pc = 0x2137C4u;
label_2137c4:
    // 0x2137c4: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x2137c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x2137c8: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x2137c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x2137cc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2137ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2137d0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2137D0u;
    {
        const bool branch_taken_0x2137d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2137D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2137D0u;
        // 0x2137d4: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2137d0) {
            ctx->pc = 0x2137E4u;
            goto label_2137e4;
        }
    }
    ctx->pc = 0x2137D8u;
    // 0x2137d8: 0x8c4325f4  lw          $v1, 0x25F4($v0)
    ctx->pc = 0x2137d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9716)));
    // 0x2137dc: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x2137DCu;
    {
        const bool branch_taken_0x2137dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2137E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2137DCu;
        // 0x2137e0: 0x8c4425f8  lw          $a0, 0x25F8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9720)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2137dc) {
            ctx->pc = 0x213A50u;
            goto label_213a50;
        }
    }
    ctx->pc = 0x2137E4u;
label_2137e4:
    // 0x2137e4: 0x8c4325ec  lw          $v1, 0x25EC($v0)
    ctx->pc = 0x2137e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9708)));
    // 0x2137e8: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x2137E8u;
    {
        const bool branch_taken_0x2137e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2137ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2137E8u;
        // 0x2137ec: 0x8c4425f0  lw          $a0, 0x25F0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9712)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2137e8) {
            ctx->pc = 0x213A50u;
            goto label_213a50;
        }
    }
    ctx->pc = 0x2137F0u;
label_2137f0:
    // 0x2137f0: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2137f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2137f4: 0x8c4310c0  lw          $v1, 0x10C0($v0)
    ctx->pc = 0x2137f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4288)));
    // 0x2137f8: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x2137F8u;
    {
        const bool branch_taken_0x2137f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2137FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2137F8u;
        // 0x2137fc: 0x8c4410c4  lw          $a0, 0x10C4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2137f8) {
            ctx->pc = 0x213A50u;
            goto label_213a50;
        }
    }
    ctx->pc = 0x213800u;
label_213800:
    // 0x213800: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x213800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x213804: 0x8c433ca0  lw          $v1, 0x3CA0($v0)
    ctx->pc = 0x213804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15520)));
    // 0x213808: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x213808u;
    {
        const bool branch_taken_0x213808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21380Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213808u;
        // 0x21380c: 0x8c443ca4  lw          $a0, 0x3CA4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213808) {
            ctx->pc = 0x213A50u;
            goto label_213a50;
        }
    }
    ctx->pc = 0x213810u;
label_213810:
    // 0x213810: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x213810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x213814: 0x8c430840  lw          $v1, 0x840($v0)
    ctx->pc = 0x213814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
    // 0x213818: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x213818u;
    {
        const bool branch_taken_0x213818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21381Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213818u;
        // 0x21381c: 0x8c440844  lw          $a0, 0x844($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213818) {
            ctx->pc = 0x213A50u;
            goto label_213a50;
        }
    }
    ctx->pc = 0x213820u;
label_213820:
    // 0x213820: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x213820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x213824: 0x8c431fc8  lw          $v1, 0x1FC8($v0)
    ctx->pc = 0x213824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8136)));
    // 0x213828: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x213828u;
    {
        const bool branch_taken_0x213828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21382Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213828u;
        // 0x21382c: 0x8c441fcc  lw          $a0, 0x1FCC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213828) {
            ctx->pc = 0x213A50u;
            goto label_213a50;
        }
    }
    ctx->pc = 0x213830u;
label_213830:
    // 0x213830: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x213830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x213834: 0x8c431ec4  lw          $v1, 0x1EC4($v0)
    ctx->pc = 0x213834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7876)));
    // 0x213838: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x213838u;
    {
        const bool branch_taken_0x213838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21383Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213838u;
        // 0x21383c: 0x8c441ec8  lw          $a0, 0x1EC8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7880)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213838) {
            ctx->pc = 0x213A50u;
            goto label_213a50;
        }
    }
    ctx->pc = 0x213840u;
label_213840:
    // 0x213840: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x213840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x213844: 0x8c431578  lw          $v1, 0x1578($v0)
    ctx->pc = 0x213844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5496)));
    // 0x213848: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x213848u;
    {
        const bool branch_taken_0x213848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21384Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213848u;
        // 0x21384c: 0x8c44157c  lw          $a0, 0x157C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213848) {
            ctx->pc = 0x213A50u;
            goto label_213a50;
        }
    }
    ctx->pc = 0x213850u;
label_213850:
    // 0x213850: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x213850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x213854: 0x8c433a18  lw          $v1, 0x3A18($v0)
    ctx->pc = 0x213854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14872)));
    // 0x213858: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x213858u;
    {
        const bool branch_taken_0x213858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21385Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213858u;
        // 0x21385c: 0x8c443a1c  lw          $a0, 0x3A1C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14876)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213858) {
            ctx->pc = 0x213A50u;
            goto label_213a50;
        }
    }
    ctx->pc = 0x213860u;
label_213860:
    // 0x213860: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x213860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x213864: 0x8c433430  lw          $v1, 0x3430($v0)
    ctx->pc = 0x213864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13360)));
    // 0x213868: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x213868u;
    {
        const bool branch_taken_0x213868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21386Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213868u;
        // 0x21386c: 0x8c443434  lw          $a0, 0x3434($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13364)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213868) {
            ctx->pc = 0x213A50u;
            goto label_213a50;
        }
    }
    ctx->pc = 0x213870u;
label_213870:
    // 0x213870: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x213870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x213874: 0x8c431908  lw          $v1, 0x1908($v0)
    ctx->pc = 0x213874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6408)));
    // 0x213878: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x213878u;
    {
        const bool branch_taken_0x213878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21387Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213878u;
        // 0x21387c: 0x8c44190c  lw          $a0, 0x190C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6412)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213878) {
            ctx->pc = 0x213A50u;
            goto label_213a50;
        }
    }
    ctx->pc = 0x213880u;
label_213880:
    // 0x213880: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x213880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x213884: 0x8c433050  lw          $v1, 0x3050($v0)
    ctx->pc = 0x213884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12368)));
    // 0x213888: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x213888u;
    {
        const bool branch_taken_0x213888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21388Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213888u;
        // 0x21388c: 0x8c443054  lw          $a0, 0x3054($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213888) {
            ctx->pc = 0x213A50u;
            goto label_213a50;
        }
    }
    ctx->pc = 0x213890u;
label_213890:
    // 0x213890: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x213890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x213894: 0x8c433274  lw          $v1, 0x3274($v0)
    ctx->pc = 0x213894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12916)));
    // 0x213898: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x213898u;
    {
        const bool branch_taken_0x213898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21389Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213898u;
        // 0x21389c: 0x8c443278  lw          $a0, 0x3278($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12920)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213898) {
            ctx->pc = 0x213A50u;
            goto label_213a50;
        }
    }
    ctx->pc = 0x2138A0u;
label_2138a0:
    // 0x2138a0: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x2138a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2138a4: 0xc6210618  lwc1        $f1, 0x618($s1)
    ctx->pc = 0x2138a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2138a8: 0x3c014280  lui         $at, 0x4280
    ctx->pc = 0x2138a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17024 << 16));
    // 0x2138ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2138acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2138b0: 0x8c623734  lw          $v0, 0x3734($v1)
    ctx->pc = 0x2138b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 14132)));
    // 0x2138b4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2138b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2138b8: 0x0  nop
    ctx->pc = 0x2138b8u;
    // NOP
    // 0x2138bc: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x2138BCu;
    {
        const bool branch_taken_0x2138bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2138C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2138BCu;
        // 0x2138c0: 0x439021  addu        $s2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2138bc) {
            ctx->pc = 0x2138F8u;
            goto label_2138f8;
        }
    }
    ctx->pc = 0x2138C4u;
    // 0x2138c4: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x2138C4u;
    SET_GPR_U32(ctx, 31, 0x2138CCu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2138C4u, 0x2138CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2138CCu;
label_2138cc:
    // 0x2138cc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2138ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2138d0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2138D0u;
    {
        const bool branch_taken_0x2138d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2138D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2138D0u;
        // 0x2138d4: 0x8e230304  lw          $v1, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2138d0) {
            ctx->pc = 0x2138F8u;
            goto label_2138f8;
        }
    }
    ctx->pc = 0x2138D8u;
    // 0x2138d8: 0x8e240744  lw          $a0, 0x744($s1)
    ctx->pc = 0x2138d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1860)));
    // 0x2138dc: 0x8c62373c  lw          $v0, 0x373C($v1)
    ctx->pc = 0x2138dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 14140)));
    // 0x2138e0: 0x1080005d  beqz        $a0, . + 4 + (0x5D << 2)
    ctx->pc = 0x2138E0u;
    {
        const bool branch_taken_0x2138e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2138E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2138E0u;
        // 0x2138e4: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2138e0) {
            ctx->pc = 0x213A58u;
            goto label_213a58;
        }
    }
    ctx->pc = 0x2138E8u;
    // 0x2138e8: 0xc09fa94  jal         func_27EA50
    ctx->pc = 0x2138E8u;
    SET_GPR_U32(ctx, 31, 0x2138F0u);
    ctx->pc = 0x2138ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2138E8u;
    // 0x2138ec: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EA50u, 0x2138E8u, 0x2138F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2138F0u;
label_2138f0:
    // 0x2138f0: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x2138F0u;
    {
        const bool branch_taken_0x2138f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2138F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2138F0u;
        // 0x2138f4: 0x8e2206ec  lw          $v0, 0x6EC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2138f0) {
            ctx->pc = 0x213A5Cu;
            goto label_213a5c;
        }
    }
    ctx->pc = 0x2138F8u;
label_2138f8:
    // 0x2138f8: 0x8e240744  lw          $a0, 0x744($s1)
    ctx->pc = 0x2138f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1860)));
    // 0x2138fc: 0x8c623738  lw          $v0, 0x3738($v1)
    ctx->pc = 0x2138fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 14136)));
    // 0x213900: 0x10800055  beqz        $a0, . + 4 + (0x55 << 2)
    ctx->pc = 0x213900u;
    {
        const bool branch_taken_0x213900 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x213904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213900u;
        // 0x213904: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213900) {
            ctx->pc = 0x213A58u;
            goto label_213a58;
        }
    }
    ctx->pc = 0x213908u;
    // 0x213908: 0xc09fa94  jal         func_27EA50
    ctx->pc = 0x213908u;
    SET_GPR_U32(ctx, 31, 0x213910u);
    ctx->pc = 0x21390Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213908u;
    // 0x21390c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EA50u, 0x213908u, 0x213910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213910u;
label_213910:
    // 0x213910: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x213910u;
    {
        const bool branch_taken_0x213910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213910u;
        // 0x213914: 0x8e2206ec  lw          $v0, 0x6EC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213910) {
            ctx->pc = 0x213A5Cu;
            goto label_213a5c;
        }
    }
    ctx->pc = 0x213918u;
label_213918:
    // 0x213918: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x213918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x21391c: 0x8c433d34  lw          $v1, 0x3D34($v0)
    ctx->pc = 0x21391cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15668)));
    // 0x213920: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x213920u;
    {
        const bool branch_taken_0x213920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213920u;
        // 0x213924: 0x8c443d38  lw          $a0, 0x3D38($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15672)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213920) {
            ctx->pc = 0x213A50u;
            goto label_213a50;
        }
    }
    ctx->pc = 0x213928u;
label_213928:
    // 0x213928: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x213928u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x21392c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21392cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213930: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x213930u;
    SET_GPR_U32(ctx, 31, 0x213938u);
    ctx->pc = 0x213934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213930u;
    // 0x213934: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x213930u, 0x213938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213938u;
label_213938:
    // 0x213938: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x213938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x21393c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21393cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213940: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x213940u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x213944: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x213944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x213948: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x213948u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x21394c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21394cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213950: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x213950u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213954: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x213954u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213958: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x213958u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21395c: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x21395Cu;
    SET_GPR_U32(ctx, 31, 0x213964u);
    ctx->pc = 0x213960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21395Cu;
    // 0x213960: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x21395Cu, 0x213964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213964u;
label_213964:
    // 0x213964: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x213964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x213968: 0x8c620d10  lw          $v0, 0xD10($v1)
    ctx->pc = 0x213968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3344)));
    // 0x21396c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x21396Cu;
    {
        const bool branch_taken_0x21396c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21396Cu;
        // 0x213970: 0x8c640d14  lw          $a0, 0xD14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21396c) {
            ctx->pc = 0x213A28u;
            goto label_213a28;
        }
    }
    ctx->pc = 0x213974u;
label_213974:
    // 0x213974: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x213974u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x213978: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x213978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21397c: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x21397Cu;
    SET_GPR_U32(ctx, 31, 0x213984u);
    ctx->pc = 0x213980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21397Cu;
    // 0x213980: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x21397Cu, 0x213984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213984u;
label_213984:
    // 0x213984: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x213984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x213988: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x213988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21398c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x21398cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x213990: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x213990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x213994: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x213994u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x213998: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x213998u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21399c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21399cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2139a0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2139a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2139a4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2139a4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2139a8: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x2139A8u;
    SET_GPR_U32(ctx, 31, 0x2139B0u);
    ctx->pc = 0x2139ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2139A8u;
    // 0x2139ac: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x2139A8u, 0x2139B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2139B0u;
label_2139b0:
    // 0x2139b0: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x2139b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2139b4: 0x8c620d38  lw          $v0, 0xD38($v1)
    ctx->pc = 0x2139b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3384)));
    // 0x2139b8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2139B8u;
    {
        const bool branch_taken_0x2139b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2139BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2139B8u;
        // 0x2139bc: 0x8c640d3c  lw          $a0, 0xD3C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2139b8) {
            ctx->pc = 0x213A28u;
            goto label_213a28;
        }
    }
    ctx->pc = 0x2139C0u;
label_2139c0:
    // 0x2139c0: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2139c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2139c4: 0x8c432454  lw          $v1, 0x2454($v0)
    ctx->pc = 0x2139c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9300)));
    // 0x2139c8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2139C8u;
    {
        const bool branch_taken_0x2139c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2139CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2139C8u;
        // 0x2139cc: 0x8c442458  lw          $a0, 0x2458($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2139c8) {
            ctx->pc = 0x213A50u;
            goto label_213a50;
        }
    }
    ctx->pc = 0x2139D0u;
label_2139d0:
    // 0x2139d0: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2139d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2139d4: 0x8c432154  lw          $v1, 0x2154($v0)
    ctx->pc = 0x2139d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8532)));
    // 0x2139d8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2139D8u;
    {
        const bool branch_taken_0x2139d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2139DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2139D8u;
        // 0x2139dc: 0x8c442158  lw          $a0, 0x2158($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2139d8) {
            ctx->pc = 0x213A50u;
            goto label_213a50;
        }
    }
    ctx->pc = 0x2139E0u;
label_2139e0:
    // 0x2139e0: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x2139e0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x2139e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2139e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2139e8: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x2139E8u;
    SET_GPR_U32(ctx, 31, 0x2139F0u);
    ctx->pc = 0x2139ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2139E8u;
    // 0x2139ec: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x2139E8u, 0x2139F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2139F0u;
label_2139f0:
    // 0x2139f0: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x2139f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x2139f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2139f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2139f8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2139f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2139fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2139fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x213a00: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x213a00u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x213a04: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x213a04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213a08: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x213a08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213a0c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x213a0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213a10: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x213a10u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213a14: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x213A14u;
    SET_GPR_U32(ctx, 31, 0x213A1Cu);
    ctx->pc = 0x213A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213A14u;
    // 0x213a18: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x213A14u, 0x213A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213A1Cu;
label_213a1c:
    // 0x213a1c: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x213a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x213a20: 0x8c621bd0  lw          $v0, 0x1BD0($v1)
    ctx->pc = 0x213a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7120)));
    // 0x213a24: 0x8c641bd4  lw          $a0, 0x1BD4($v1)
    ctx->pc = 0x213a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7124)));
label_213a28:
    // 0x213a28: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x213a28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x213a2c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x213A2Cu;
    {
        const bool branch_taken_0x213a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213A2Cu;
        // 0x213a30: 0x838021  addu        $s0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213a2c) {
            ctx->pc = 0x213A58u;
            goto label_213a58;
        }
    }
    ctx->pc = 0x213A34u;
label_213a34:
    // 0x213a34: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x213a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x213a38: 0x8c432d54  lw          $v1, 0x2D54($v0)
    ctx->pc = 0x213a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11604)));
    // 0x213a3c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x213A3Cu;
    {
        const bool branch_taken_0x213a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213A3Cu;
        // 0x213a40: 0x8c442d58  lw          $a0, 0x2D58($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213a3c) {
            ctx->pc = 0x213A50u;
            goto label_213a50;
        }
    }
    ctx->pc = 0x213A44u;
label_213a44:
    // 0x213a44: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x213a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x213a48: 0x8c43228c  lw          $v1, 0x228C($v0)
    ctx->pc = 0x213a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8844)));
    // 0x213a4c: 0x8c442290  lw          $a0, 0x2290($v0)
    ctx->pc = 0x213a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8848)));
label_213a50:
    // 0x213a50: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x213a50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x213a54: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x213a54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_213a58:
    // 0x213a58: 0x8e2206ec  lw          $v0, 0x6EC($s1)
    ctx->pc = 0x213a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1772)));
label_213a5c:
    // 0x213a5c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x213A5Cu;
    {
        const bool branch_taken_0x213a5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x213A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213A5Cu;
        // 0x213a60: 0x240503b7  addiu       $a1, $zero, 0x3B7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 951));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213a5c) {
            ctx->pc = 0x213AB8u;
            goto label_213ab8;
        }
    }
    ctx->pc = 0x213A64u;
    // 0x213a64: 0x8e270304  lw          $a3, 0x304($s1)
    ctx->pc = 0x213a64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x213a68: 0x944402fe  lhu         $a0, 0x2FE($v0)
    ctx->pc = 0x213a68u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 766)));
    // 0x213a6c: 0x8ce204b8  lw          $v0, 0x4B8($a3)
    ctx->pc = 0x213a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1208)));
    // 0x213a70: 0x8ce304bc  lw          $v1, 0x4BC($a3)
    ctx->pc = 0x213a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1212)));
    // 0x213a74: 0x479021  addu        $s2, $v0, $a3
    ctx->pc = 0x213a74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x213a78: 0x1485000f  bne         $a0, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x213A78u;
    {
        const bool branch_taken_0x213a78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x213A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213A78u;
        // 0x213a7c: 0x678021  addu        $s0, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213a78) {
            ctx->pc = 0x213AB8u;
            goto label_213ab8;
        }
    }
    ctx->pc = 0x213A80u;
    // 0x213a80: 0x8ce204f4  lw          $v0, 0x4F4($a3)
    ctx->pc = 0x213a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1268)));
    // 0x213a84: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x213a84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x213a88: 0x8ce304f8  lw          $v1, 0x4F8($a3)
    ctx->pc = 0x213a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1272)));
    // 0x213a8c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x213a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x213a90: 0x479021  addu        $s2, $v0, $a3
    ctx->pc = 0x213a90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x213a94: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x213a94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x213a98: 0x678021  addu        $s0, $v1, $a3
    ctx->pc = 0x213a98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x213a9c: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x213a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x213aa0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x213aa0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213aa4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x213aa4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213aa8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x213aa8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213aac: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x213aacu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213ab0: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x213AB0u;
    SET_GPR_U32(ctx, 31, 0x213AB8u);
    ctx->pc = 0x213AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213AB0u;
    // 0x213ab4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x213AB0u, 0x213AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213AB8u;
label_213ab8:
    // 0x213ab8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x213ab8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x213abc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x213abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213ac0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x213ac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213ac4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x213ac4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213ac8: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x213ac8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213acc: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x213accu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x213ad0: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x213AD0u;
    SET_GPR_U32(ctx, 31, 0x213AD8u);
    ctx->pc = 0x213AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213AD0u;
    // 0x213ad4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x213AD0u, 0x213AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213AD8u;
label_213ad8:
    // 0x213ad8: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x213ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x213adc: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x213ADCu;
    SET_GPR_U32(ctx, 31, 0x213AE4u);
    ctx->pc = 0x213AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213ADCu;
    // 0x213ae0: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x213ADCu, 0x213AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213AE4u;
label_213ae4:
    // 0x213ae4: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x213ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x213ae8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x213ae8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x213aec: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x213AECu;
    {
        const bool branch_taken_0x213aec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x213aec) {
            ctx->pc = 0x213AF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213AECu;
            // 0x213af0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x213AF4u;
            goto label_213af4;
        }
    }
    ctx->pc = 0x213AF4u;
label_213af4:
    // 0x213af4: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x213af4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x213af8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x213af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x213afc: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x213afcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x213b00: 0x2010  mfhi        $a0
    ctx->pc = 0x213b00u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x213b04: 0x24840078  addiu       $a0, $a0, 0x78
    ctx->pc = 0x213b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 120));
    // 0x213b08: 0xae2405f4  sw          $a0, 0x5F4($s1)
    ctx->pc = 0x213b08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1524), GPR_U32(ctx, 4));
    // 0x213b0c: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x213b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_213b10:
    // 0x213b10: 0x262516a0  addiu       $a1, $s1, 0x16A0
    ctx->pc = 0x213b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5792));
    // 0x213b14: 0x3c013e86  lui         $at, 0x3E86
    ctx->pc = 0x213b14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16006 << 16));
    // 0x213b18: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x213b18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x213b1c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x213b1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x213b20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x213b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213b24: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x213b24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x213b28: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x213b28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x213b2c: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x213b2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x213b30: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x213b30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x213b34: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x213B34u;
    SET_GPR_U32(ctx, 31, 0x213B3Cu);
    ctx->pc = 0x213B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213B34u;
    // 0x213b38: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x213B34u, 0x213B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213B3Cu;
label_213b3c:
    // 0x213b3c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x213B3Cu;
    SET_GPR_U32(ctx, 31, 0x213B44u);
    ctx->pc = 0x213B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213B3Cu;
    // 0x213b40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x213B3Cu, 0x213B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213B44u;
label_213b44:
    // 0x213b44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x213b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213b48: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x213B48u;
    SET_GPR_U32(ctx, 31, 0x213B50u);
    ctx->pc = 0x213B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213B48u;
    // 0x213b4c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x213B48u, 0x213B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213B50u;
label_213b50:
    // 0x213b50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x213b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213b54: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x213B54u;
    SET_GPR_U32(ctx, 31, 0x213B5Cu);
    ctx->pc = 0x213B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213B54u;
    // 0x213b58: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x213B54u, 0x213B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213B5Cu;
label_213b5c:
    // 0x213b5c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x213b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x213b60: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x213B60u;
    SET_GPR_U32(ctx, 31, 0x213B68u);
    ctx->pc = 0x213B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213B60u;
    // 0x213b64: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x213B60u, 0x213B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213B68u;
label_213b68:
    // 0x213b68: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x213b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x213b6c: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x213b6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x213b70: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x213B70u;
    {
        const bool branch_taken_0x213b70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x213B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213B70u;
        // 0x213b74: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213b70) {
            ctx->pc = 0x213B90u;
            goto label_213b90;
        }
    }
    ctx->pc = 0x213B78u;
    // 0x213b78: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x213b78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x213b7c: 0x24425700  addiu       $v0, $v0, 0x5700
    ctx->pc = 0x213b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22272));
    // 0x213b80: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x213b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x213b84: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x213b84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x213b88: 0x800008  jr          $a0
    ctx->pc = 0x213B88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x213B90u: goto label_213b90;
            case 0x213BA4u: goto label_213ba4;
            case 0x213BC0u: goto label_213bc0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213B88u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x213B90u;
label_213b90:
    // 0x213b90: 0x8e2316d8  lw          $v1, 0x16D8($s1)
    ctx->pc = 0x213b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5848)));
    // 0x213b94: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x213B94u;
    {
        const bool branch_taken_0x213b94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x213B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213B94u;
        // 0x213b98: 0x2c620003  sltiu       $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x213b94) {
            ctx->pc = 0x213BE0u;
            goto label_213be0;
        }
    }
    ctx->pc = 0x213B9Cu;
    // 0x213b9c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x213B9Cu;
    {
        const bool branch_taken_0x213b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x213b9c) {
            ctx->pc = 0x213BD4u;
            goto label_213bd4;
        }
    }
    ctx->pc = 0x213BA4u;
label_213ba4:
    // 0x213ba4: 0x8e2216d8  lw          $v0, 0x16D8($s1)
    ctx->pc = 0x213ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5848)));
    // 0x213ba8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x213ba8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213bac: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x213bacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x213bb0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x213BB0u;
    {
        const bool branch_taken_0x213bb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x213BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213BB0u;
        // 0x213bb4: 0x2c620003  sltiu       $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x213bb0) {
            ctx->pc = 0x213BE0u;
            goto label_213be0;
        }
    }
    ctx->pc = 0x213BB8u;
    // 0x213bb8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x213BB8u;
    {
        const bool branch_taken_0x213bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x213bb8) {
            ctx->pc = 0x213BD4u;
            goto label_213bd4;
        }
    }
    ctx->pc = 0x213BC0u;
label_213bc0:
    // 0x213bc0: 0x8e2216d8  lw          $v0, 0x16D8($s1)
    ctx->pc = 0x213bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5848)));
    // 0x213bc4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x213bc4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213bc8: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x213bc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x213bcc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x213BCCu;
    {
        const bool branch_taken_0x213bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x213bcc) {
            ctx->pc = 0x213BE8u;
            goto label_213be8;
        }
    }
    ctx->pc = 0x213BD4u;
label_213bd4:
    // 0x213bd4: 0x3c014010  lui         $at, 0x4010
    ctx->pc = 0x213bd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16400 << 16));
    // 0x213bd8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x213bd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x213bdc: 0x2c620003  sltiu       $v0, $v1, 0x3
    ctx->pc = 0x213bdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_213be0:
    // 0x213be0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x213BE0u;
    {
        const bool branch_taken_0x213be0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x213BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213BE0u;
        // 0x213be4: 0x2c620006  sltiu       $v0, $v1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x213be0) {
            ctx->pc = 0x213BF4u;
            goto label_213bf4;
        }
    }
    ctx->pc = 0x213BE8u;
label_213be8:
    // 0x213be8: 0x3c014244  lui         $at, 0x4244
    ctx->pc = 0x213be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16964 << 16));
    // 0x213bec: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x213becu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x213bf0: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x213bf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_213bf4:
    // 0x213bf4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x213BF4u;
    {
        const bool branch_taken_0x213bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x213BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213BF4u;
        // 0x213bf8: 0x8e230564  lw          $v1, 0x564($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213bf4) {
            ctx->pc = 0x213C04u;
            goto label_213c04;
        }
    }
    ctx->pc = 0x213BFCu;
    // 0x213bfc: 0x3c0142f2  lui         $at, 0x42F2
    ctx->pc = 0x213bfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17138 << 16));
    // 0x213c00: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x213c00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_213c04:
    // 0x213c04: 0x24020264  addiu       $v0, $zero, 0x264
    ctx->pc = 0x213c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 612));
    // 0x213c08: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x213C08u;
    {
        const bool branch_taken_0x213c08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x213C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213C08u;
        // 0x213c0c: 0x24020265  addiu       $v0, $zero, 0x265 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 613));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213c08) {
            ctx->pc = 0x213C20u;
            goto label_213c20;
        }
    }
    ctx->pc = 0x213C10u;
    // 0x213c10: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x213C10u;
    {
        const bool branch_taken_0x213c10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x213C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213C10u;
        // 0x213c14: 0xc6200618  lwc1        $f0, 0x618($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x213c10) {
            ctx->pc = 0x213C58u;
            goto label_213c58;
        }
    }
    ctx->pc = 0x213C18u;
    // 0x213c18: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x213C18u;
    {
        const bool branch_taken_0x213c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x213c18) {
            ctx->pc = 0x213C60u;
            goto label_213c60;
        }
    }
    ctx->pc = 0x213C20u;
label_213c20:
    // 0x213c20: 0xc621075c  lwc1        $f1, 0x75C($s1)
    ctx->pc = 0x213c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213c24: 0x3c013eb2  lui         $at, 0x3EB2
    ctx->pc = 0x213c24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16050 << 16));
    // 0x213c28: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x213c28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
    // 0x213c2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x213c2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x213c30: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x213c30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x213c34: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x213c34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x213c38: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x213c38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213c3c: 0x0  nop
    ctx->pc = 0x213c3cu;
    // NOP
    // 0x213c40: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x213C40u;
    {
        const bool branch_taken_0x213c40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x213C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213C40u;
        // 0x213c44: 0xc6200618  lwc1        $f0, 0x618($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x213c40) {
            ctx->pc = 0x213C60u;
            goto label_213c60;
        }
    }
    ctx->pc = 0x213C48u;
    // 0x213c48: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x213c48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x213c4c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x213c4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x213c50: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x213C50u;
    {
        const bool branch_taken_0x213c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x213c50) {
            ctx->pc = 0x213C60u;
            goto label_213c60;
        }
    }
    ctx->pc = 0x213C58u;
label_213c58:
    // 0x213c58: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x213c58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x213c5c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x213c5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_213c60:
    // 0x213c60: 0x0  nop
    ctx->pc = 0x213c60u;
    // NOP
    // 0x213c64: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x213c64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213c68: 0x0  nop
    ctx->pc = 0x213c68u;
    // NOP
    // 0x213c6c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x213C6Cu;
    {
        const bool branch_taken_0x213c6c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x213c6c) {
            ctx->pc = 0x213C70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213C6Cu;
            // 0x213c70: 0x8e2205f0  lw          $v0, 0x5F0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1520)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x213C80u;
            goto label_213c80;
        }
    }
    ctx->pc = 0x213C74u;
    // 0x213c74: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x213C74u;
    SET_GPR_U32(ctx, 31, 0x213C7Cu);
    ctx->pc = 0x213C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213C74u;
    // 0x213c78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x213C74u, 0x213C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213C7Cu;
label_213c7c:
    // 0x213c7c: 0x8e2205f0  lw          $v0, 0x5F0($s1)
    ctx->pc = 0x213c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1520)));
label_213c80:
    // 0x213c80: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x213C80u;
    {
        const bool branch_taken_0x213c80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x213C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213C80u;
        // 0x213c84: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213c80) {
            ctx->pc = 0x213C90u;
            goto label_213c90;
        }
    }
    ctx->pc = 0x213C88u;
    // 0x213c88: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x213C88u;
    {
        const bool branch_taken_0x213c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213C88u;
        // 0x213c8c: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213c88) {
            ctx->pc = 0x213CE8u;
            goto label_213ce8;
        }
    }
    ctx->pc = 0x213C90u;
label_213c90:
    // 0x213c90: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x213c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x213c94: 0x24020250  addiu       $v0, $zero, 0x250
    ctx->pc = 0x213c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
    // 0x213c98: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x213C98u;
    {
        const bool branch_taken_0x213c98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x213C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213C98u;
        // 0x213c9c: 0x28620251  slti        $v0, $v1, 0x251 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)593) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x213c98) {
            ctx->pc = 0x213CD4u;
            goto label_213cd4;
        }
    }
    ctx->pc = 0x213CA0u;
    // 0x213ca0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x213CA0u;
    {
        const bool branch_taken_0x213ca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x213CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213CA0u;
        // 0x213ca4: 0x2402020a  addiu       $v0, $zero, 0x20A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 522));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213ca0) {
            ctx->pc = 0x213CC0u;
            goto label_213cc0;
        }
    }
    ctx->pc = 0x213CA8u;
    // 0x213ca8: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x213CA8u;
    {
        const bool branch_taken_0x213ca8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x213CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213CA8u;
        // 0x213cac: 0x24020245  addiu       $v0, $zero, 0x245 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 581));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213ca8) {
            ctx->pc = 0x213CD4u;
            goto label_213cd4;
        }
    }
    ctx->pc = 0x213CB0u;
    // 0x213cb0: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x213CB0u;
    {
        const bool branch_taken_0x213cb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x213CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213CB0u;
        // 0x213cb4: 0x28620223  slti        $v0, $v1, 0x223 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)547) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x213cb0) {
            ctx->pc = 0x213CD4u;
            goto label_213cd4;
        }
    }
    ctx->pc = 0x213CB8u;
    // 0x213cb8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x213CB8u;
    {
        const bool branch_taken_0x213cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x213cb8) {
            ctx->pc = 0x213CF0u;
            goto label_213cf0;
        }
    }
    ctx->pc = 0x213CC0u;
label_213cc0:
    // 0x213cc0: 0x2862027a  slti        $v0, $v1, 0x27A
    ctx->pc = 0x213cc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)634) ? 1 : 0);
    // 0x213cc4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x213CC4u;
    {
        const bool branch_taken_0x213cc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x213CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213CC4u;
        // 0x213cc8: 0x28620278  slti        $v0, $v1, 0x278 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)632) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x213cc4) {
            ctx->pc = 0x213CE8u;
            goto label_213ce8;
        }
    }
    ctx->pc = 0x213CCCu;
    // 0x213ccc: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x213CCCu;
    {
        const bool branch_taken_0x213ccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x213ccc) {
            ctx->pc = 0x213CD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213CCCu;
            // 0x213cd0: 0x8e230564  lw          $v1, 0x564($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x213CECu;
            goto label_213cec;
        }
    }
    ctx->pc = 0x213CD4u;
label_213cd4:
    // 0x213cd4: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x213cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x213cd8: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x213cd8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x213cdc: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x213cdcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x213ce0: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x213ce0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x213ce4: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x213ce4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_213ce8:
    // 0x213ce8: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x213ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
label_213cec:
    // 0x213cec: 0x28620223  slti        $v0, $v1, 0x223
    ctx->pc = 0x213cecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)547) ? 1 : 0);
label_213cf0:
    // 0x213cf0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x213CF0u;
    {
        const bool branch_taken_0x213cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x213CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213CF0u;
        // 0x213cf4: 0x28620220  slti        $v0, $v1, 0x220 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)544) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x213cf0) {
            ctx->pc = 0x213D10u;
            goto label_213d10;
        }
    }
    ctx->pc = 0x213CF8u;
    // 0x213cf8: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x213CF8u;
    {
        const bool branch_taken_0x213cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x213CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213CF8u;
        // 0x213cfc: 0x28620212  slti        $v0, $v1, 0x212 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)530) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x213cf8) {
            ctx->pc = 0x213DA4u;
            goto label_213da4;
        }
    }
    ctx->pc = 0x213D00u;
    // 0x213d00: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x213D00u;
    {
        const bool branch_taken_0x213d00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x213D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213D00u;
        // 0x213d04: 0x2862020f  slti        $v0, $v1, 0x20F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)527) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x213d00) {
            ctx->pc = 0x213E14u;
            goto label_213e14;
        }
    }
    ctx->pc = 0x213D08u;
    // 0x213d08: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x213D08u;
    {
        const bool branch_taken_0x213d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x213d08) {
            ctx->pc = 0x213D2Cu;
            goto label_213d2c;
        }
    }
    ctx->pc = 0x213D10u;
label_213d10:
    // 0x213d10: 0x24020226  addiu       $v0, $zero, 0x226
    ctx->pc = 0x213d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 550));
    // 0x213d14: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x213D14u;
    {
        const bool branch_taken_0x213d14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x213D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213D14u;
        // 0x213d18: 0x28620226  slti        $v0, $v1, 0x226 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)550) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x213d14) {
            ctx->pc = 0x213D34u;
            goto label_213d34;
        }
    }
    ctx->pc = 0x213D1Cu;
    // 0x213d1c: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x213D1Cu;
    {
        const bool branch_taken_0x213d1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x213D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213D1Cu;
        // 0x213d20: 0x28620275  slti        $v0, $v1, 0x275 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)629) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x213d1c) {
            ctx->pc = 0x213E14u;
            goto label_213e14;
        }
    }
    ctx->pc = 0x213D24u;
    // 0x213d24: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x213D24u;
    {
        const bool branch_taken_0x213d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x213D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213D24u;
        // 0x213d28: 0x28620270  slti        $v0, $v1, 0x270 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)624) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x213d24) {
            ctx->pc = 0x213E14u;
            goto label_213e14;
        }
    }
    ctx->pc = 0x213D2Cu;
label_213d2c:
    // 0x213d2c: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x213D2Cu;
    {
        const bool branch_taken_0x213d2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x213d2c) {
            ctx->pc = 0x213E14u;
            goto label_213e14;
        }
    }
    ctx->pc = 0x213D34u;
label_213d34:
    // 0x213d34: 0x8e2205f4  lw          $v0, 0x5F4($s1)
    ctx->pc = 0x213d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1524)));
    // 0x213d38: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x213D38u;
    {
        const bool branch_taken_0x213d38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x213D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213D38u;
        // 0x213d3c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213d38) {
            ctx->pc = 0x213D48u;
            goto label_213d48;
        }
    }
    ctx->pc = 0x213D40u;
    // 0x213d40: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x213D40u;
    {
        const bool branch_taken_0x213d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213D40u;
        // 0x213d44: 0xae2205f4  sw          $v0, 0x5F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1524), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213d40) {
            ctx->pc = 0x213DA4u;
            goto label_213da4;
        }
    }
    ctx->pc = 0x213D48u;
label_213d48:
    // 0x213d48: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x213D48u;
    SET_GPR_U32(ctx, 31, 0x213D50u);
    ctx->pc = 0x213D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213D48u;
    // 0x213d4c: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x213D48u, 0x213D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213D50u;
label_213d50:
    // 0x213d50: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x213d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x213d54: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x213d54u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x213d58: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x213D58u;
    {
        const bool branch_taken_0x213d58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x213d58) {
            ctx->pc = 0x213D5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213D58u;
            // 0x213d5c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x213D60u;
            goto label_213d60;
        }
    }
    ctx->pc = 0x213D60u;
label_213d60:
    // 0x213d60: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x213d60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x213d64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x213d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213d68: 0x2810  mfhi        $a1
    ctx->pc = 0x213d68u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x213d6c: 0x24a50078  addiu       $a1, $a1, 0x78
    ctx->pc = 0x213d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 120));
    // 0x213d70: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x213D70u;
    SET_GPR_U32(ctx, 31, 0x213D78u);
    ctx->pc = 0x213D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213D70u;
    // 0x213d74: 0xae2505f4  sw          $a1, 0x5F4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1524), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x213D70u, 0x213D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213D78u;
label_213d78:
    // 0x213d78: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x213d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x213d7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x213d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213d80: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x213d80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x213d84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x213d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x213d88: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x213d88u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x213d8c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x213d8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213d90: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x213d90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213d94: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x213d94u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213d98: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x213d98u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213d9c: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x213D9Cu;
    SET_GPR_U32(ctx, 31, 0x213DA4u);
    ctx->pc = 0x213DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213D9Cu;
    // 0x213da0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x213D9Cu, 0x213DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213DA4u;
label_213da4:
    // 0x213da4: 0x8e2205f4  lw          $v0, 0x5F4($s1)
    ctx->pc = 0x213da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1524)));
    // 0x213da8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x213DA8u;
    {
        const bool branch_taken_0x213da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x213DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213DA8u;
        // 0x213dac: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213da8) {
            ctx->pc = 0x213DB8u;
            goto label_213db8;
        }
    }
    ctx->pc = 0x213DB0u;
    // 0x213db0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x213DB0u;
    {
        const bool branch_taken_0x213db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213DB0u;
        // 0x213db4: 0xae2205f4  sw          $v0, 0x5F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1524), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213db0) {
            ctx->pc = 0x213E14u;
            goto label_213e14;
        }
    }
    ctx->pc = 0x213DB8u;
label_213db8:
    // 0x213db8: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x213DB8u;
    SET_GPR_U32(ctx, 31, 0x213DC0u);
    ctx->pc = 0x213DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213DB8u;
    // 0x213dbc: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x213DB8u, 0x213DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213DC0u;
label_213dc0:
    // 0x213dc0: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x213dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x213dc4: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x213dc4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x213dc8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x213DC8u;
    {
        const bool branch_taken_0x213dc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x213dc8) {
            ctx->pc = 0x213DCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213DC8u;
            // 0x213dcc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x213DD0u;
            goto label_213dd0;
        }
    }
    ctx->pc = 0x213DD0u;
label_213dd0:
    // 0x213dd0: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x213dd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x213dd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x213dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213dd8: 0x2810  mfhi        $a1
    ctx->pc = 0x213dd8u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x213ddc: 0x24a50078  addiu       $a1, $a1, 0x78
    ctx->pc = 0x213ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 120));
    // 0x213de0: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x213DE0u;
    SET_GPR_U32(ctx, 31, 0x213DE8u);
    ctx->pc = 0x213DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213DE0u;
    // 0x213de4: 0xae2505f4  sw          $a1, 0x5F4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1524), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x213DE0u, 0x213DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213DE8u;
label_213de8:
    // 0x213de8: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x213de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x213dec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x213decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213df0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x213df0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x213df4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x213df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x213df8: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x213df8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x213dfc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x213dfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213e00: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x213e00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213e04: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x213e04u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213e08: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x213e08u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213e0c: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x213E0Cu;
    SET_GPR_U32(ctx, 31, 0x213E14u);
    ctx->pc = 0x213E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213E0Cu;
    // 0x213e10: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x213E0Cu, 0x213E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213E14u;
label_213e14:
    // 0x213e14: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x213E14u;
    SET_GPR_U32(ctx, 31, 0x213E1Cu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x213E14u, 0x213E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213E1Cu;
label_213e1c:
    // 0x213e1c: 0x8443054a  lh          $v1, 0x54A($v0)
    ctx->pc = 0x213e1cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1354)));
    // 0x213e20: 0x18600009  blez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x213E20u;
    {
        const bool branch_taken_0x213e20 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x213E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213E20u;
        // 0x213e24: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213e20) {
            ctx->pc = 0x213E48u;
            goto label_213e48;
        }
    }
    ctx->pc = 0x213E28u;
    // 0x213e28: 0x244464f0  addiu       $a0, $v0, 0x64F0
    ctx->pc = 0x213e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    // 0x213e2c: 0x908305b5  lbu         $v1, 0x5B5($a0)
    ctx->pc = 0x213e2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1461)));
    // 0x213e30: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x213E30u;
    {
        const bool branch_taken_0x213e30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x213e30) {
            ctx->pc = 0x213E48u;
            goto label_213e48;
        }
    }
    ctx->pc = 0x213E38u;
    // 0x213e38: 0xc0a4c40  jal         func_293100
    ctx->pc = 0x213E38u;
    SET_GPR_U32(ctx, 31, 0x213E40u);
    ctx->pc = 0x293100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293100u, 0x213E38u, 0x213E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213E40u;
label_213e40:
    // 0x213e40: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x213E40u;
    {
        const bool branch_taken_0x213e40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x213e40) {
            ctx->pc = 0x213E58u;
            goto label_213e58;
        }
    }
    ctx->pc = 0x213E48u;
label_213e48:
    // 0x213e48: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x213E48u;
    SET_GPR_U32(ctx, 31, 0x213E50u);
    ctx->pc = 0x213E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213E48u;
    // 0x213e4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x213E48u, 0x213E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213E50u;
label_213e50:
    // 0x213e50: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x213E50u;
    {
        const bool branch_taken_0x213e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213E50u;
        // 0x213e54: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213e50) {
            ctx->pc = 0x213E84u;
            goto label_213e84;
        }
    }
    ctx->pc = 0x213E58u;
label_213e58:
    // 0x213e58: 0xc098aaa  jal         func_262AA8
    ctx->pc = 0x213E58u;
    SET_GPR_U32(ctx, 31, 0x213E60u);
    ctx->pc = 0x213E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213E58u;
    // 0x213e5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262AA8u, 0x213E58u, 0x213E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213E60u;
label_213e60:
    // 0x213e60: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x213E60u;
    {
        const bool branch_taken_0x213e60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x213E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213E60u;
        // 0x213e64: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213e60) {
            ctx->pc = 0x213E84u;
            goto label_213e84;
        }
    }
    ctx->pc = 0x213E68u;
    // 0x213e68: 0xc092eda  jal         func_24BB68
    ctx->pc = 0x213E68u;
    SET_GPR_U32(ctx, 31, 0x213E70u);
    ctx->pc = 0x213E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213E68u;
    // 0x213e6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BB68u, 0x213E68u, 0x213E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213E70u;
label_213e70:
    // 0x213e70: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x213E70u;
    {
        const bool branch_taken_0x213e70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x213E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213E70u;
        // 0x213e74: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213e70) {
            ctx->pc = 0x213E84u;
            goto label_213e84;
        }
    }
    ctx->pc = 0x213E78u;
    // 0x213e78: 0xc092f68  jal         func_24BDA0
    ctx->pc = 0x213E78u;
    SET_GPR_U32(ctx, 31, 0x213E80u);
    ctx->pc = 0x213E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213E78u;
    // 0x213e7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BDA0u, 0x213E78u, 0x213E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213E80u;
label_213e80:
    // 0x213e80: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x213e80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_213e84:
    // 0x213e84: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x213e84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x213e88: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x213e88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x213e8c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x213e8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213e90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x213e90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213e94: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x213e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x213e98: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x213e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x213e9c: 0x3e00008  jr          $ra
    ctx->pc = 0x213E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213E9Cu;
        // 0x213ea0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213E9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x213EA4u;
    // 0x213ea4: 0x0  nop
    ctx->pc = 0x213ea4u;
    // NOP
    ctx->pc = 0x213ea8u;
}
